/********************************************************************************
** Form generated from reading UI file 'notification.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATION_H
#define UI_NOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notification
{
public:
    QLabel *label_white1;
    QPushButton *pushButton_com2;
    QLabel *label_name1_3;
    QLabel *label_item1;
    QLabel *label_name2_2;
    QLabel *label_sugg;
    QLabel *label_name2_3;
    QLabel *label_portrait;
    QLabel *label_potrait2;
    QLabel *label_search;
    QLabel *label_left;
    QLabel *label_top;
    QLabel *label_user;
    QLabel *label_potrait1;
    QLabel *label_line1;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QListWidget *listWidget;
    QLabel *label_work;
    QLabel *label_botom;
    QLabel *label_noti;
    QLabel *label_name2;
    QLabel *label_home;
    QLabel *label_name1_4;
    QLabel *label_item2;
    QLabel *label_sett;
    QPushButton *pushButton_com1;
    QLabel *label_name2_4;
    QLabel *label_name1_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QLabel *label_line2;
    QLabel *label_welcome;
    QLabel *label_white2;
    QPushButton *pushButton;
    QLabel *label_name1;

    void setupUi(QWidget *Notification)
    {
        if (Notification->objectName().isEmpty())
            Notification->setObjectName("Notification");
        Notification->resize(780, 520);
        label_white1 = new QLabel(Notification);
        label_white1->setObjectName("label_white1");
        label_white1->setGeometry(QRect(5, 404, 126, 30));
        label_white1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 51);"));
        pushButton_com2 = new QPushButton(Notification);
        pushButton_com2->setObjectName("pushButton_com2");
        pushButton_com2->setGeometry(QRect(580, 450, 113, 32));
        pushButton_com2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(46,212,122,1), \n"
"stop:1 rgba(46,212,122,1));\n"
"color: rgb(255, 255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";\n"
"\n"
""));
        label_name1_3 = new QLabel(Notification);
        label_name1_3->setObjectName("label_name1_3");
        label_name1_3->setGeometry(QRect(320, 170, 221, 16));
        label_name1_3->setStyleSheet(QString::fromUtf8("color: rgb(177, 182, 185);\n"
"font: 15pt \"Poppins\";"));
        label_item1 = new QLabel(Notification);
        label_item1->setObjectName("label_item1");
        label_item1->setGeometry(QRect(160, 65, 590, 210));
        label_item1->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        label_name2_2 = new QLabel(Notification);
        label_name2_2->setObjectName("label_name2_2");
        label_name2_2->setGeometry(QRect(190, 400, 221, 16));
        label_name2_2->setStyleSheet(QString::fromUtf8("color: rgb(227, 228, 230);\n"
"font: 13pt \"Poppins\";"));
        label_sugg = new QLabel(Notification);
        label_sugg->setObjectName("label_sugg");
        label_sugg->setGeometry(QRect(40, 450, 101, 21));
        label_sugg->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_name2_3 = new QLabel(Notification);
        label_name2_3->setObjectName("label_name2_3");
        label_name2_3->setGeometry(QRect(320, 400, 221, 16));
        label_name2_3->setStyleSheet(QString::fromUtf8("color: rgb(177, 182, 185);\n"
"font: 15pt \"Poppins\";"));
        label_portrait = new QLabel(Notification);
        label_portrait->setObjectName("label_portrait");
        label_portrait->setGeometry(QRect(710, 0, 40, 40));
        label_portrait->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        label_potrait2 = new QLabel(Notification);
        label_potrait2->setObjectName("label_potrait2");
        label_potrait2->setGeometry(QRect(170, 450, 40, 40));
        label_potrait2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/other/photo.jpg);"));
        label_search = new QLabel(Notification);
        label_search->setObjectName("label_search");
        label_search->setGeometry(QRect(140, 3, 31, 31));
        label_search->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/search.png);"));
        label_left = new QLabel(Notification);
        label_left->setObjectName("label_left");
        label_left->setGeometry(QRect(-1, 0, 140, 520));
        label_left->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_top = new QLabel(Notification);
        label_top->setObjectName("label_top");
        label_top->setGeometry(QRect(130, 0, 650, 40));
        label_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_user = new QLabel(Notification);
        label_user->setObjectName("label_user");
        label_user->setGeometry(QRect(40, 178, 101, 21));
        label_user->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_potrait1 = new QLabel(Notification);
        label_potrait1->setObjectName("label_potrait1");
        label_potrait1->setGeometry(QRect(170, 220, 40, 40));
        label_potrait1->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/other/photo.jpg);"));
        label_line1 = new QLabel(Notification);
        label_line1->setObjectName("label_line1");
        label_line1->setGeometry(QRect(465, 0, 2, 40));
        label_line1->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        pushButton_5 = new QPushButton(Notification);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(7, 444, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        lineEdit = new QLineEdit(Notification);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, -3, 281, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("border:0px solid\357\274\233"));
        pushButton_3 = new QPushButton(Notification);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(7, 172, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(Notification);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(7, 360, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icon/setting.png);"));
        listWidget = new QListWidget(Notification);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(140, 50, 631, 461));
        label_work = new QLabel(Notification);
        label_work->setObjectName("label_work");
        label_work->setGeometry(QRect(40, 134, 101, 21));
        label_work->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_botom = new QLabel(Notification);
        label_botom->setObjectName("label_botom");
        label_botom->setGeometry(QRect(130, 40, 651, 481));
        label_botom->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 247);"));
        label_noti = new QLabel(Notification);
        label_noti->setObjectName("label_noti");
        label_noti->setGeometry(QRect(40, 408, 101, 21));
        label_noti->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_name2 = new QLabel(Notification);
        label_name2->setObjectName("label_name2");
        label_name2->setGeometry(QRect(220, 460, 221, 16));
        label_name2->setStyleSheet(QString::fromUtf8("color: rgb(128, 150, 192);\n"
"font: 13pt \"Poppins\";"));
        label_home = new QLabel(Notification);
        label_home->setObjectName("label_home");
        label_home->setGeometry(QRect(40, 94, 101, 21));
        label_home->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_name1_4 = new QLabel(Notification);
        label_name1_4->setObjectName("label_name1_4");
        label_name1_4->setGeometry(QRect(190, 100, 351, 31));
        label_name1_4->setStyleSheet(QString::fromUtf8("color: rgb(50, 74, 112);\n"
"font: 25pt \"Poppins\";"));
        label_item2 = new QLabel(Notification);
        label_item2->setObjectName("label_item2");
        label_item2->setGeometry(QRect(160, 290, 590, 210));
        label_item2->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        label_sett = new QLabel(Notification);
        label_sett->setObjectName("label_sett");
        label_sett->setGeometry(QRect(40, 366, 101, 21));
        label_sett->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_com1 = new QPushButton(Notification);
        pushButton_com1->setObjectName("pushButton_com1");
        pushButton_com1->setGeometry(QRect(580, 220, 113, 32));
        pushButton_com1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(46,212,122,1), \n"
"stop:1 rgba(46,212,122,1));\n"
"color: rgb(255, 255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";\n"
"\n"
""));
        label_name2_4 = new QLabel(Notification);
        label_name2_4->setObjectName("label_name2_4");
        label_name2_4->setGeometry(QRect(190, 350, 351, 31));
        label_name2_4->setStyleSheet(QString::fromUtf8("color: rgb(50, 74, 112);\n"
"font: 25pt \"Poppins\";"));
        label_name1_2 = new QLabel(Notification);
        label_name1_2->setObjectName("label_name1_2");
        label_name1_2->setGeometry(QRect(190, 170, 221, 16));
        label_name1_2->setStyleSheet(QString::fromUtf8("color: rgb(227, 228, 230);\n"
"font: 13pt \"Poppins\";"));
        pushButton_1 = new QPushButton(Notification);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(7, 88, 31, 31));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(Notification);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(7, 130, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
        label_line2 = new QLabel(Notification);
        label_line2->setObjectName("label_line2");
        label_line2->setGeometry(QRect(681, 0, 2, 40));
        label_line2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_welcome = new QLabel(Notification);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(480, 0, 211, 41));
        label_welcome->setStyleSheet(QString::fromUtf8(""));
        label_white2 = new QLabel(Notification);
        label_white2->setObjectName("label_white2");
        label_white2->setGeometry(QRect(0, 404, 5, 30));
        label_white2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(Notification);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(7, 402, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        label_name1 = new QLabel(Notification);
        label_name1->setObjectName("label_name1");
        label_name1->setGeometry(QRect(220, 230, 221, 16));
        label_name1->setStyleSheet(QString::fromUtf8("color: rgb(128, 150, 192);\n"
"font: 13pt \"Poppins\";"));
        label_left->raise();
        label_top->raise();
        label_user->raise();
        label_line1->raise();
        pushButton_5->raise();
        lineEdit->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_work->raise();
        label_botom->raise();
        label_noti->raise();
        label_home->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        label_line2->raise();
        label_welcome->raise();
        label_white2->raise();
        pushButton->raise();
        label_portrait->raise();
        label_search->raise();
        label_sett->raise();
        label_sugg->raise();
        label_white1->raise();
        listWidget->raise();
        label_item1->raise();
        label_item2->raise();
        label_name1->raise();
        label_name1_2->raise();
        label_name1_3->raise();
        label_name1_4->raise();
        label_name2->raise();
        label_name2_2->raise();
        label_name2_3->raise();
        label_name2_4->raise();
        label_potrait1->raise();
        label_potrait2->raise();
        pushButton_com1->raise();
        pushButton_com2->raise();

        retranslateUi(Notification);

        QMetaObject::connectSlotsByName(Notification);
    } // setupUi

    void retranslateUi(QWidget *Notification)
    {
        Notification->setWindowTitle(QCoreApplication::translate("Notification", "Form", nullptr));
        label_white1->setText(QString());
        pushButton_com2->setText(QCoreApplication::translate("Notification", "Completed", nullptr));
        label_name1_3->setText(QCoreApplication::translate("Notification", "December 20, 2018", nullptr));
        label_item1->setText(QString());
        label_name2_2->setText(QCoreApplication::translate("Notification", "Due data", nullptr));
        label_sugg->setText(QCoreApplication::translate("Notification", "suggestions", nullptr));
        label_name2_3->setText(QCoreApplication::translate("Notification", "December 20, 2018", nullptr));
        label_portrait->setText(QString());
        label_potrait2->setText(QString());
        label_search->setText(QString());
        label_left->setText(QString());
        label_top->setText(QString());
        label_user->setText(QCoreApplication::translate("Notification", "user", nullptr));
        label_potrait1->setText(QString());
        label_line1->setText(QString());
        pushButton_5->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Notification", "Type in to search", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_work->setText(QCoreApplication::translate("Notification", "workspace", nullptr));
        label_botom->setText(QString());
        label_noti->setText(QCoreApplication::translate("Notification", "notification", nullptr));
        label_name2->setText(QCoreApplication::translate("Notification", "Nicci Troiani", nullptr));
        label_home->setText(QCoreApplication::translate("Notification", "homepage", nullptr));
        label_name1_4->setText(QCoreApplication::translate("Notification", "Send benefit review by Sunday", nullptr));
        label_item2->setText(QString());
        label_sett->setText(QCoreApplication::translate("Notification", "settings", nullptr));
        pushButton_com1->setText(QCoreApplication::translate("Notification", "Completed", nullptr));
        label_name2_4->setText(QCoreApplication::translate("Notification", "Send benefit review by Sunday", nullptr));
        label_name1_2->setText(QCoreApplication::translate("Notification", "Due data", nullptr));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        label_line2->setText(QString());
        label_welcome->setText(QCoreApplication::translate("Notification", "USER NAME,welcome back !", nullptr));
        label_white2->setText(QString());
        pushButton->setText(QString());
        label_name1->setText(QCoreApplication::translate("Notification", "Nicci Troiani", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notification: public Ui_Notification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATION_H
