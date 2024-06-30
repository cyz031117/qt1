#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString folder_name("message1");
    QDir dir(QDir::currentPath());
    if (!dir.exists(folder_name))
    {
        dir.mkdir(folder_name);
        qDebug() << QString("文件夹 %1 创建成功！").arg(folder_name);
    }
    else
    {
        qDebug() << QString("文件夹 %1 已存在！").arg(folder_name);
    }

    MainWindow w;
    w.set_text();
    w.show();
    return a.exec();
}
