#include "kid.h"
#include "ui_kid.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <QResizeEvent>
#include <QDebug>
#include <QFile>
#include <QLineEdit>
#include <Qdir>
#include <QTextStream>
#include <QProcess>
#include <string.h>
#include <QGraphicsDropShadowEffect>

FILE *fp2;
char tm[11]="0";
char ren[100]="ren m.txt m",end[10]=".guide",fln[20]="m",moe[20]="move ",end2[10]=" message";
int i=0,num=0,dn=0,s1=0;
char k;
char co2[12],dco2[20];

void eread()//读取当前攻略数
{
    fp2=fopen("num.memo","r");
    fgets(co2,11,fp2);
    fclose(fp2);
}

void deread()//读取删除次数
{
    fp2=fopen("den.memo","r");
    fgets(dco2,11,fp2);
    fclose(fp2);
}

kid::kid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kid)
{
    ui->setupUi(this);
    this->setWindowTitle("新建Guide");
    this->setWindowIcon(QIcon("Guide.ico"));
    QGraphicsDropShadowEffect *sa1 = new QGraphicsDropShadowEffect;
    sa1->setColor(QColor(200,200,200));
    sa1->setBlurRadius(8);//阴影模糊半径
    sa1->setOffset(3);    //阴影偏移
    QLineEdit *pLineEdit = ui->title1;
    pLineEdit->setPlaceholderText("留空以m+数字命名(不能包含错误字符)");
    ui->pushButton->setGraphicsEffect(sa1);
    eread();
    deread();
    while(co2[i])
    {
        num*=10;
        num+=co2[i++]-48;//'0'
    }
    i=0;
    while(dco2[i])
    {
        dn*=10;
        dn+=dco2[i++]-48;
    }
    s1=dn+num;
    fp2=fopen("m.txt","w");
    fclose(fp2);
    setFixedSize(500,600);
}

void kid::closeEvent(QCloseEvent *ev)
{
    QMessageBox::Button btn = QMessageBox::question(this, "关闭新建", "是否确认已经保存该Guide？");
    if(btn == QMessageBox::Yes)
    {
        kid::on_pushButton_clicked();
        ev->accept();
    }
    else
        ev->ignore();
}

kid::~kid()
{
    delete ui;
}

void kid::on_pushButton_clicked()
{
    bool cbox=ui->checkBox->checkState();
    QString str=ui->textEdit->toPlainText();
    QString st2=ui->title1->text();
    qDebug()<<st2;
    qDebug()<<str;

    //将文本框数据取出并按行排列
    QString filename = "./message1/" + st2 + ".guide";
    QFile file(filename);//文件命名
    file.open(QIODevice::Append | QIODevice::Text);
    file.write(str.toLocal8Bit());

    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDate = currentDateTime.toString("yyyy-MM-dd");
    QString currentTime = currentDateTime.toString("hh:mm:ss");
    QTextStream out(&file);
    if(cbox)
    {
        out << "\n" << "\n";
        out << currentDate << "\n";
        out << currentTime << "\n";
    }

    file.close();

    for(i=0;s1!=0;i++)  //防止命名冲突
    {
        co2[i]=s1%10+'0';
        s1/=10;
    }
    for(i=0;i<=strlen(co2)/2;i++)
        k=co2[i],co2[i]=co2[strlen(co2)-1],co2[strlen(co2)-1]=k;

    num++;

    for(i=0;num!=0;i++)  //重写存在文件数
    {
        co2[i]=num%10+'0';
        num/=10;
    }
    for(i=0;i<=strlen(co2)/2;i++)
        k=co2[i],co2[i]=co2[strlen(co2)-1],co2[strlen(co2)-1]=k;
    fp2=fopen("num.memo","w");
    fputs(co2,fp2);
    fclose(fp2);
    reboot();
}

void kid::reboot()//重启
{
    QString program = QApplication::applicationFilePath();
    QStringList arguments = QApplication::arguments();
    QString workingDirectory = QDir::currentPath();
    QProcess::startDetached(program, arguments, workingDirectory);
    QApplication::exit();
}
