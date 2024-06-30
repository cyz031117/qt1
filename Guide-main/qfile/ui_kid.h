/********************************************************************************
** Form generated from reading UI file 'kid.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KID_H
#define UI_KID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kid
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLineEdit *title1;
    QLabel *label;
    QCheckBox *checkBox;

    void setupUi(QWidget *kid)
    {
        if (kid->objectName().isEmpty())
            kid->setObjectName("kid");
        kid->resize(500, 600);
        QPalette palette;
        QBrush brush(QColor(252, 250, 222, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        kid->setPalette(palette);
        pushButton = new QPushButton(kid);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 540, 121, 41));
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
        textEdit = new QTextEdit(kid);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 100, 371, 431));
        QPalette palette1;
        QBrush brush2(QColor(105, 105, 105, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        textEdit->setPalette(palette1);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	color: rgb(105,105,105);\n"
"	background: rgb(255, 255, 255);\n"
"	font: 25 14pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid rgb(30,144,255); \n"
"	border-radius: 10px;\n"
"	padding: 10px;\n"
"}"));
        title1 = new QLineEdit(kid);
        title1->setObjectName("title1");
        title1->setGeometry(QRect(100, 10, 331, 41));
        title1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: rgb(105,105,105);\n"
"	background: rgb(255, 255, 255);\n"
"	font: 25 12pt \"\351\273\221\344\275\223\";\n"
"	border: 2px solid rgb(30,144,255); \n"
"	border-radius: 10px;\n"
"	padding: 10px;\n"
"}"));
        label = new QLabel(kid);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 51, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: rgb(105,105,105);\n"
"font: 25 12pt \"\351\273\221\344\275\223\";\n"
"}"));
        checkBox = new QCheckBox(kid);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(360, 60, 71, 31));
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: rgb(105,105,105);\n"
"font: 25 16px \"\351\273\221\344\275\223\";\n"
"}"));

        retranslateUi(kid);

        QMetaObject::connectSlotsByName(kid);
    } // setupUi

    void retranslateUi(QWidget *kid)
    {
        kid->setWindowTitle(QCoreApplication::translate("kid", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("kid", "\344\277\235\345\255\230", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("kid", "\345\234\250\350\277\231\351\207\214\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("kid", "\346\240\207\351\242\230", nullptr));
        checkBox->setText(QCoreApplication::translate("kid", "\346\227\266\351\227\264\346\210\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kid: public Ui_kid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KID_H
