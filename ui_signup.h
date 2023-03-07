/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label;
    QLabel *label_2_back;
    QLabel *label_2;
    QLineEdit *lineEdit_id1;
    QLineEdit *lineEdit_id1_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(780, 520);
        label = new QLabel(Signup);
        label->setObjectName("label");
        label->setGeometry(QRect(-1, -5, 781, 531));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/background/register.jpg);"));
        label_2_back = new QLabel(Signup);
        label_2_back->setObjectName("label_2_back");
        label_2_back->setGeometry(QRect(150, 130, 271, 311));
        label_2_back->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"\n"
"\n"
""));
        label_2 = new QLabel(Signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 150, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"SourceHanSansSC\";\n"
"color: rgba(0,0,0,1);"));
        lineEdit_id1 = new QLineEdit(Signup);
        lineEdit_id1->setObjectName("lineEdit_id1");
        lineEdit_id1->setGeometry(QRect(180, 240, 211, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        lineEdit_id1->setFont(font);
        lineEdit_id1->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id1_2 = new QLineEdit(Signup);
        lineEdit_id1_2->setObjectName("lineEdit_id1_2");
        lineEdit_id1_2->setGeometry(QRect(180, 310, 211, 31));
        lineEdit_id1_2->setFont(font);
        lineEdit_id1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id1_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(Signup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 380, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(110,102,162,1), \n"
"stop:1 rgba(110,102,162,1));\n"
"color: rgb(255, 255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"15px;padding:2px 4px;\n"
"font: 18pt \"Candara\";\n"
"\n"
""));

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
        label->setText(QString());
        label_2_back->setText(QString());
        label_2->setText(QCoreApplication::translate("Signup", "Register", nullptr));
        lineEdit_id1->setText(QString());
        lineEdit_id1->setPlaceholderText(QCoreApplication::translate("Signup", "Please enter your mobile number", nullptr));
        lineEdit_id1_2->setText(QString());
        lineEdit_id1_2->setPlaceholderText(QCoreApplication::translate("Signup", "Please input a password", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
