/********************************************************************************
** Form generated from reading UI file 'check1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK1_H
#define UI_CHECK1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Check1
{
public:
    QPushButton *pushButton;
    QListWidget *listWidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Check1)
    {
        if (Check1->objectName().isEmpty())
            Check1->setObjectName("Check1");
        Check1->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Check1->setPalette(palette);
        Check1->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(Check1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 81, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
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
        listWidget = new QListWidget(Check1);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 80, 251, 451));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush1(QColor(13, 19, 135, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        listWidget->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        listWidget->setFont(font1);
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget->setStyleSheet(QString::fromUtf8("QListView::item {\n"
"    height: 40px;\n"
"}\n"
"QListView {\n"
"	background: rgb(255, 255, 255);\n"
"	font: 25 12pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid rgb(30,144,255); \n"
"	border-radius: 8px;\n"
"}\n"
"QListView::item:hover {\n"
"	background-color: transparent;\n"
"	padding: 10px;\n"
"	border-left: 3px solid rgb(	30,144,255);\n"
"}\n"
"QListView::item:selected {\n"
"	background-color: transparent;\n"
"	color: black;\n"
"	padding: 10px;\n"
"	border-left: 3px solid rgb(65,105,225);\n"
"}"));
        textBrowser = new QTextBrowser(Check1);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(300, 70, 451, 461));
        QPalette palette2;
        QBrush brush3(QColor(105, 105, 105, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        textBrowser->setPalette(palette2);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"	color: rgb(	105,105,105);\n"
"	background: rgb(255, 255, 255);\n"
"	font: 25 14pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid rgb(30,144,255); \n"
"	padding: 10px;\n"
"	border-radius: 10px;\n"
"}"));
        label = new QLabel(Check1);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 50, 171, 41));
        QPalette palette3;
        QBrush brush4(QColor(132, 132, 132, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(12);
        label->setFont(font2);
        pushButton_2 = new QPushButton(Check1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 540, 221, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
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
        pushButton_3 = new QPushButton(Check1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(640, 540, 101, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
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

        retranslateUi(Check1);

        QMetaObject::connectSlotsByName(Check1);
    } // setupUi

    void retranslateUi(QWidget *Check1)
    {
        Check1->setWindowTitle(QCoreApplication::translate("Check1", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Check1", "<\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("Check1", "\345\217\214\345\207\273\346\237\245\347\234\213|\345\217\263\345\207\273\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Check1", "\346\270\205\347\251\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Check1", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Check1: public Ui_Check1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK1_H
