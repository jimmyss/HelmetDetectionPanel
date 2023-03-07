/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QLabel *label_left;
    QLabel *label_top;
    QLabel *label_botom;
    QLabel *label_search;
    QLineEdit *lineEdit;
    QLabel *label_line1;
    QLabel *label_line2;
    QLabel *label_welcome;
    QLabel *label_portrait;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QLabel *label_home;
    QLabel *label_work;
    QLabel *label_user;
    QLabel *label_sett;
    QLabel *label_noti;
    QLabel *label_sugg;
    QLabel *label_white2;
    QLabel *label_white1;
    QListWidget *listWidget;
    QLabel *label_item1;
    QLabel *label_item2;
    QLabel *label_name;
    QLabel *label_name1;
    QLabel *label_name2;
    QLabel *label_item3;
    QLabel *label_name2_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(780, 520);
        label_left = new QLabel(Setting);
        label_left->setObjectName("label_left");
        label_left->setGeometry(QRect(-1, 0, 140, 520));
        label_left->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_top = new QLabel(Setting);
        label_top->setObjectName("label_top");
        label_top->setGeometry(QRect(130, 0, 650, 40));
        label_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_botom = new QLabel(Setting);
        label_botom->setObjectName("label_botom");
        label_botom->setGeometry(QRect(130, 40, 651, 481));
        label_botom->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 247);"));
        label_search = new QLabel(Setting);
        label_search->setObjectName("label_search");
        label_search->setGeometry(QRect(140, 3, 31, 31));
        label_search->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/search.png);"));
        lineEdit = new QLineEdit(Setting);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, -3, 281, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("border:0px solid\357\274\233"));
        label_line1 = new QLabel(Setting);
        label_line1->setObjectName("label_line1");
        label_line1->setGeometry(QRect(465, 0, 2, 40));
        label_line1->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_line2 = new QLabel(Setting);
        label_line2->setObjectName("label_line2");
        label_line2->setGeometry(QRect(681, 0, 2, 40));
        label_line2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_welcome = new QLabel(Setting);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(480, 0, 211, 41));
        label_welcome->setStyleSheet(QString::fromUtf8(""));
        label_portrait = new QLabel(Setting);
        label_portrait->setObjectName("label_portrait");
        label_portrait->setGeometry(QRect(710, 0, 40, 40));
        label_portrait->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        pushButton_1 = new QPushButton(Setting);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(7, 88, 31, 31));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(Setting);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(7, 130, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
        pushButton_3 = new QPushButton(Setting);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(7, 172, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(Setting);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(7, 360, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icon/setting.png);"));
        pushButton = new QPushButton(Setting);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(7, 402, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        pushButton_5 = new QPushButton(Setting);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(7, 444, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        label_home = new QLabel(Setting);
        label_home->setObjectName("label_home");
        label_home->setGeometry(QRect(40, 94, 101, 21));
        label_home->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_work = new QLabel(Setting);
        label_work->setObjectName("label_work");
        label_work->setGeometry(QRect(40, 134, 101, 21));
        label_work->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_user = new QLabel(Setting);
        label_user->setObjectName("label_user");
        label_user->setGeometry(QRect(40, 178, 101, 21));
        label_user->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sett = new QLabel(Setting);
        label_sett->setObjectName("label_sett");
        label_sett->setGeometry(QRect(40, 366, 101, 21));
        label_sett->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_noti = new QLabel(Setting);
        label_noti->setObjectName("label_noti");
        label_noti->setGeometry(QRect(40, 408, 101, 21));
        label_noti->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(Setting);
        label_sugg->setObjectName("label_sugg");
        label_sugg->setGeometry(QRect(40, 450, 101, 21));
        label_sugg->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_white2 = new QLabel(Setting);
        label_white2->setObjectName("label_white2");
        label_white2->setGeometry(QRect(0, 362, 5, 30));
        label_white2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_white1 = new QLabel(Setting);
        label_white1->setObjectName("label_white1");
        label_white1->setGeometry(QRect(5, 362, 126, 30));
        label_white1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 51);"));
        listWidget = new QListWidget(Setting);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(140, 50, 631, 461));
        label_item1 = new QLabel(Setting);
        label_item1->setObjectName("label_item1");
        label_item1->setGeometry(QRect(160, 95, 590, 61));
        label_item1->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        label_item2 = new QLabel(Setting);
        label_item2->setObjectName("label_item2");
        label_item2->setGeometry(QRect(160, 180, 590, 61));
        label_item2->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        label_name = new QLabel(Setting);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(160, 60, 351, 31));
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(50, 74, 112);\n"
"font: 27pt \"Poppins\";\n"
"font-weight: bold;"));
        label_name1 = new QLabel(Setting);
        label_name1->setObjectName("label_name1");
        label_name1->setGeometry(QRect(190, 110, 351, 31));
        label_name1->setStyleSheet(QString::fromUtf8("\n"
"font: 17pt \"Poppins\";"));
        label_name2 = new QLabel(Setting);
        label_name2->setObjectName("label_name2");
        label_name2->setGeometry(QRect(190, 195, 351, 31));
        label_name2->setStyleSheet(QString::fromUtf8("\n"
"font: 17pt \"Poppins\";"));
        label_item3 = new QLabel(Setting);
        label_item3->setObjectName("label_item3");
        label_item3->setGeometry(QRect(160, 430, 590, 61));
        label_item3->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        label_name2_2 = new QLabel(Setting);
        label_name2_2->setObjectName("label_name2_2");
        label_name2_2->setGeometry(QRect(190, 445, 351, 31));
        label_name2_2->setStyleSheet(QString::fromUtf8("color: rgb(252, 13, 29);\n"
"font: 17pt \"Poppins\";"));
        radioButton = new QRadioButton(Setting);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(610, 110, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        radioButton->setFont(font);
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        radioButton_2 = new QRadioButton(Setting);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(480, 110, 111, 31));
        radioButton_2->setFont(font);
        radioButton_2->setStyleSheet(QString::fromUtf8("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        radioButton_3 = new QRadioButton(Setting);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(610, 195, 111, 31));
        radioButton_3->setFont(font);
        radioButton_3->setStyleSheet(QString::fromUtf8("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Form", nullptr));
        label_left->setText(QString());
        label_top->setText(QString());
        label_botom->setText(QString());
        label_search->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Setting", "Type in to search", nullptr));
        label_line1->setText(QString());
        label_line2->setText(QString());
        label_welcome->setText(QCoreApplication::translate("Setting", "USER NAME,welcome back !", nullptr));
        label_portrait->setText(QString());
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        label_home->setText(QCoreApplication::translate("Setting", "homepage", nullptr));
        label_work->setText(QCoreApplication::translate("Setting", "workspace", nullptr));
        label_user->setText(QCoreApplication::translate("Setting", "user", nullptr));
        label_sett->setText(QCoreApplication::translate("Setting", "settings", nullptr));
        label_noti->setText(QCoreApplication::translate("Setting", "notification", nullptr));
        label_sugg->setText(QCoreApplication::translate("Setting", "suggestions", nullptr));
        label_white2->setText(QString());
        label_white1->setText(QString());
        label_item1->setText(QString());
        label_item2->setText(QString());
        label_name->setText(QCoreApplication::translate("Setting", "Settings", nullptr));
        label_name1->setText(QCoreApplication::translate("Setting", "Interface style", nullptr));
        label_name2->setText(QCoreApplication::translate("Setting", "Language", nullptr));
        label_item3->setText(QString());
        label_name2_2->setText(QCoreApplication::translate("Setting", "Exit", nullptr));
        radioButton->setText(QCoreApplication::translate("Setting", "Light", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Setting", "Dark", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Setting", "English", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
