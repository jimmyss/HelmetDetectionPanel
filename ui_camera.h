/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QPushButton *photoButton;
    QPushButton *backButton;
    QLabel *pictureLabel;

    void setupUi(QWidget *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName("Camera");
        Camera->resize(550, 393);
        photoButton = new QPushButton(Camera);
        photoButton->setObjectName("photoButton");
        photoButton->setGeometry(QRect(50, 330, 75, 24));
        backButton = new QPushButton(Camera);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(370, 330, 75, 24));
        pictureLabel = new QLabel(Camera);
        pictureLabel->setObjectName("pictureLabel");
        pictureLabel->setGeometry(QRect(20, 20, 481, 291));

        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QWidget *Camera)
    {
        Camera->setWindowTitle(QCoreApplication::translate("Camera", "Form", nullptr));
        photoButton->setText(QCoreApplication::translate("Camera", "Action!", nullptr));
        backButton->setText(QCoreApplication::translate("Camera", "back", nullptr));
        pictureLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
