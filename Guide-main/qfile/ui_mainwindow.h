/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *newmemo;
    QPushButton *viewmemo;
    QLabel *label1;
    QLabel *label;
    QPushButton *backpackbt;
    QPushButton *browse;
    QLabel *image;
    QPushButton *setting;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(420, 600);
        QPalette palette;
        QBrush brush(QColor(132, 132, 132, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(226, 226, 226, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 4, 93, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush4(QColor(247, 247, 247, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        QBrush brush5(QColor(0, 22, 148, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush6(QColor(120, 120, 120, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QBrush brush7(QColor(240, 240, 240, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QBrush brush8(QColor(0, 17, 130, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        newmemo = new QPushButton(centralWidget);
        newmemo->setObjectName("newmemo");
        newmemo->setGeometry(QRect(120, 120, 181, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        newmemo->setFont(font1);
        newmemo->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background: rgb(65,105,225);\n"
"border: 2px solid rgb(65,105,225);\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(0,0,139);\n"
"border: 2px solid rgb(0,0,139);\n"
"}\n"
"QPushButton {\n"
"	color: white;\n"
"	background: rgb(100,149,237);\n"
"	font: 25 14pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid 	rgb(100,149,237);\n"
"	border-radius: 5px;\n"
"}"));
        newmemo->setCheckable(false);
        viewmemo = new QPushButton(centralWidget);
        viewmemo->setObjectName("viewmemo");
        viewmemo->setGeometry(QRect(120, 230, 181, 51));
        viewmemo->setFont(font1);
        viewmemo->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background: rgb(65,105,225);\n"
"border: 2px solid rgb(65,105,225);\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(0,0,139);\n"
"border: 2px solid rgb(0,0,139);\n"
"}\n"
"QPushButton {\n"
"	color: white;\n"
"	background: rgb(100,149,237);\n"
"	font: 25 14pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid 	rgb(100,149,237);\n"
"	border-radius: 5px;\n"
"}"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(130, 40, 191, 31));
        QFont font2;
        font2.setPointSize(12);
        label1->setFont(font2);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 51, 31));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("text-align: justify;"));
        backpackbt = new QPushButton(centralWidget);
        backpackbt->setObjectName("backpackbt");
        backpackbt->setGeometry(QRect(120, 340, 141, 51));
        backpackbt->setFont(font1);
        backpackbt->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background: rgb(65,105,225);\n"
"border: 2px solid rgb(65,105,225);\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(0,0,139);\n"
"border: 2px solid rgb(0,0,139);\n"
"}\n"
"QPushButton {\n"
"	color: white;\n"
"	background: rgb(100,149,237);\n"
"	font: 25 14pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid 	rgb(100,149,237);\n"
"	border-radius: 5px;\n"
"}"));
        browse = new QPushButton(centralWidget);
        browse->setObjectName("browse");
        browse->setGeometry(QRect(270, 350, 51, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        browse->setFont(font3);
        browse->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background: rgb(65,105,225);\n"
"border: 2px solid rgb(65,105,225);\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(0,0,139);\n"
"border: 2px solid rgb(0,0,139);\n"
"}\n"
"QPushButton {\n"
"	color: white;\n"
"	background: rgb(100,149,237);\n"
"	font: 25 10pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid 	rgb(100,149,237);\n"
"	border-radius: 5px;\n"
"}"));
        image = new QLabel(centralWidget);
        image->setObjectName("image");
        image->setGeometry(QRect(10, 0, 431, 611));
        setting = new QPushButton(centralWidget);
        setting->setObjectName("setting");
        setting->setGeometry(QRect(40, 550, 81, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        setting->setFont(font4);
        setting->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"background: rgb(128,128,128);\n"
"border: 2px solid rgb(128,128,128);\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(105,105,105);\n"
"border: 2px solid rgb(105,105,135);\n"
"}\n"
"QPushButton {\n"
"	color: white;\n"
"	background: rgb(211,211,211);\n"
"	font: 22 12pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid 	rgb(211,211,211);\n"
"	border-radius: 5px;\n"
"}"));
        setting->setCheckable(false);
        MainWindow->setCentralWidget(centralWidget);
        image->raise();
        browse->raise();
        backpackbt->raise();
        newmemo->raise();
        viewmemo->raise();
        label1->raise();
        label->raise();
        setting->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newmemo->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272Memo", nullptr));
        viewmemo->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213Memo", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "[\346\225\260\351\207\217]", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "number", nullptr));
        backpackbt->setText(QCoreApplication::translate("MainWindow", "\345\244\207\344\273\275", nullptr));
        browse->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        image->setText(QString());
        setting->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
