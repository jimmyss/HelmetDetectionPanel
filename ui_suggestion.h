/********************************************************************************
** Form generated from reading UI file 'suggestion.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTION_H
#define UI_SUGGESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Suggestion
{
public:
    QListWidget *listWidget;
    QLabel *label_user;
    QPushButton *pushButton_5;
    QLabel *label_portrait;
    QLabel *label_botom;
    QPushButton *pushButton_3;
    QLabel *label_item1;
    QPushButton *pushButton;
    QLabel *label_work;
    QLabel *label_sugg;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLabel *label_white1;
    QLabel *label_name;
    QPushButton *pushButton_1;
    QLabel *label_sett;
    QLabel *label_line1;
    QPushButton *pushButton_2;
    QLabel *label_suggest;
    QLabel *label_item3;
    QLabel *label_home;
    QLabel *label_welcome;
    QLabel *label_line2;
    QLabel *label_left;
    QLabel *label_noti;
    QLabel *label_top;
    QLabel *label_search;
    QLabel *label_white2;
    QLabel *label_potrait1;
    QLabel *label_name1;
    QPushButton *pushButton_com1;

    void setupUi(QWidget *Suggestion)
    {
        if (Suggestion->objectName().isEmpty())
            Suggestion->setObjectName("Suggestion");
        Suggestion->resize(780, 520);
        listWidget = new QListWidget(Suggestion);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(140, 48, 631, 461));
        label_user = new QLabel(Suggestion);
        label_user->setObjectName("label_user");
        label_user->setGeometry(QRect(40, 176, 101, 21));
        label_user->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_5 = new QPushButton(Suggestion);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(7, 442, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        label_portrait = new QLabel(Suggestion);
        label_portrait->setObjectName("label_portrait");
        label_portrait->setGeometry(QRect(710, -2, 40, 40));
        label_portrait->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        label_botom = new QLabel(Suggestion);
        label_botom->setObjectName("label_botom");
        label_botom->setGeometry(QRect(130, 38, 651, 481));
        label_botom->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 247);"));
        pushButton_3 = new QPushButton(Suggestion);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(7, 170, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        label_item1 = new QLabel(Suggestion);
        label_item1->setObjectName("label_item1");
        label_item1->setGeometry(QRect(160, 93, 590, 211));
        label_item1->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        pushButton = new QPushButton(Suggestion);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(7, 400, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        label_work = new QLabel(Suggestion);
        label_work->setObjectName("label_work");
        label_work->setGeometry(QRect(40, 132, 101, 21));
        label_work->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(Suggestion);
        label_sugg->setObjectName("label_sugg");
        label_sugg->setGeometry(QRect(40, 448, 101, 21));
        label_sugg->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_4 = new QPushButton(Suggestion);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(7, 358, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icon/setting.png);"));
        lineEdit = new QLineEdit(Suggestion);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, -5, 281, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("border:0px solid\357\274\233"));
        label_white1 = new QLabel(Suggestion);
        label_white1->setObjectName("label_white1");
        label_white1->setGeometry(QRect(5, 444, 126, 30));
        label_white1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 51);"));
        label_name = new QLabel(Suggestion);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(160, 58, 351, 31));
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(50, 74, 112);\n"
"font: 27pt \"Poppins\";\n"
"font-weight: bold;"));
        pushButton_1 = new QPushButton(Suggestion);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(7, 86, 31, 31));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/homepage.png);"));
        label_sett = new QLabel(Suggestion);
        label_sett->setObjectName("label_sett");
        label_sett->setGeometry(QRect(40, 364, 101, 21));
        label_sett->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_line1 = new QLabel(Suggestion);
        label_line1->setObjectName("label_line1");
        label_line1->setGeometry(QRect(465, -2, 2, 40));
        label_line1->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        pushButton_2 = new QPushButton(Suggestion);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(7, 128, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
        label_suggest = new QLabel(Suggestion);
        label_suggest->setObjectName("label_suggest");
        label_suggest->setGeometry(QRect(190, 120, 351, 31));
        label_suggest->setStyleSheet(QString::fromUtf8("color: rgb(134, 111, 180);\n"
"font: 17pt \"Poppins\";"));
        label_item3 = new QLabel(Suggestion);
        label_item3->setObjectName("label_item3");
        label_item3->setGeometry(QRect(160, 330, 590, 61));
        label_item3->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        label_home = new QLabel(Suggestion);
        label_home->setObjectName("label_home");
        label_home->setGeometry(QRect(40, 92, 101, 21));
        label_home->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_welcome = new QLabel(Suggestion);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(480, -2, 211, 41));
        label_welcome->setStyleSheet(QString::fromUtf8(""));
        label_line2 = new QLabel(Suggestion);
        label_line2->setObjectName("label_line2");
        label_line2->setGeometry(QRect(681, -2, 2, 40));
        label_line2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_left = new QLabel(Suggestion);
        label_left->setObjectName("label_left");
        label_left->setGeometry(QRect(-1, -2, 140, 520));
        label_left->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_noti = new QLabel(Suggestion);
        label_noti->setObjectName("label_noti");
        label_noti->setGeometry(QRect(40, 406, 101, 21));
        label_noti->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_top = new QLabel(Suggestion);
        label_top->setObjectName("label_top");
        label_top->setGeometry(QRect(130, -2, 650, 40));
        label_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_search = new QLabel(Suggestion);
        label_search->setObjectName("label_search");
        label_search->setGeometry(QRect(140, 1, 31, 31));
        label_search->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/search.png);"));
        label_white2 = new QLabel(Suggestion);
        label_white2->setObjectName("label_white2");
        label_white2->setGeometry(QRect(0, 444, 5, 30));
        label_white2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_potrait1 = new QLabel(Suggestion);
        label_potrait1->setObjectName("label_potrait1");
        label_potrait1->setGeometry(QRect(180, 340, 40, 40));
        label_potrait1->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/other/photo.jpg);"));
        label_name1 = new QLabel(Suggestion);
        label_name1->setObjectName("label_name1");
        label_name1->setGeometry(QRect(230, 350, 221, 16));
        label_name1->setStyleSheet(QString::fromUtf8("color: rgb(128, 150, 192);\n"
"font: 13pt \"Poppins\";"));
        pushButton_com1 = new QPushButton(Suggestion);
        pushButton_com1->setObjectName("pushButton_com1");
        pushButton_com1->setGeometry(QRect(610, 345, 113, 32));
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
        label_left->raise();
        label_top->raise();
        label_search->raise();
        label_white2->raise();
        label_botom->raise();
        label_home->raise();
        label_line1->raise();
        label_line2->raise();
        label_noti->raise();
        label_portrait->raise();
        label_sett->raise();
        label_sugg->raise();
        label_user->raise();
        label_welcome->raise();
        label_white1->raise();
        label_work->raise();
        lineEdit->raise();
        listWidget->raise();
        pushButton->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        label_item1->raise();
        label_item3->raise();
        label_name->raise();
        label_suggest->raise();
        label_potrait1->raise();
        label_name1->raise();
        pushButton_com1->raise();

        retranslateUi(Suggestion);

        QMetaObject::connectSlotsByName(Suggestion);
    } // setupUi

    void retranslateUi(QWidget *Suggestion)
    {
        Suggestion->setWindowTitle(QCoreApplication::translate("Suggestion", "Form", nullptr));
        label_user->setText(QCoreApplication::translate("Suggestion", "user", nullptr));
        pushButton_5->setText(QString());
        label_portrait->setText(QString());
        label_botom->setText(QString());
        pushButton_3->setText(QString());
        label_item1->setText(QString());
        pushButton->setText(QString());
        label_work->setText(QCoreApplication::translate("Suggestion", "workspace", nullptr));
        label_sugg->setText(QCoreApplication::translate("Suggestion", "suggestions", nullptr));
        pushButton_4->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Suggestion", "Type in to search", nullptr));
        label_white1->setText(QString());
        label_name->setText(QCoreApplication::translate("Suggestion", "Suggestions and feedback", nullptr));
        pushButton_1->setText(QString());
        label_sett->setText(QCoreApplication::translate("Suggestion", "settings", nullptr));
        label_line1->setText(QString());
        pushButton_2->setText(QString());
        label_suggest->setText(QCoreApplication::translate("Suggestion", "concrete content...", nullptr));
        label_item3->setText(QString());
        label_home->setText(QCoreApplication::translate("Suggestion", "homepage", nullptr));
        label_welcome->setText(QCoreApplication::translate("Suggestion", "USER NAME,welcome back !", nullptr));
        label_line2->setText(QString());
        label_left->setText(QString());
        label_noti->setText(QCoreApplication::translate("Suggestion", "notification", nullptr));
        label_top->setText(QString());
        label_search->setText(QString());
        label_white2->setText(QString());
        label_potrait1->setText(QString());
        label_name1->setText(QCoreApplication::translate("Suggestion", "Nicci Troiani", nullptr));
        pushButton_com1->setText(QCoreApplication::translate("Suggestion", "Completed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Suggestion: public Ui_Suggestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTION_H
