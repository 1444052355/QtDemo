/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QLineEdit *AddrLineEdit;
    QLabel *PhoneLabel;
    QLineEdit *PhoneLineEdit;
    QLabel *AddrLabel;
    QLineEdit *IDLineEdit;
    QLabel *IDLabel;
    QLabel *TitleLabel;
    QLineEdit *NameLineEdit;
    QLabel *NameLabel;
    QLabel *BGRLabel;
    QPushButton *OkBtn;
    QPushButton *returnBtn;

    void setupUi(QWidget *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QStringLiteral("AddUser"));
        AddUser->resize(500, 400);
        AddrLineEdit = new QLineEdit(AddUser);
        AddrLineEdit->setObjectName(QStringLiteral("AddrLineEdit"));
        AddrLineEdit->setGeometry(QRect(190, 200, 133, 20));
        PhoneLabel = new QLabel(AddUser);
        PhoneLabel->setObjectName(QStringLiteral("PhoneLabel"));
        PhoneLabel->setGeometry(QRect(140, 250, 40, 20));
        PhoneLineEdit = new QLineEdit(AddUser);
        PhoneLineEdit->setObjectName(QStringLiteral("PhoneLineEdit"));
        PhoneLineEdit->setGeometry(QRect(190, 250, 133, 20));
        AddrLabel = new QLabel(AddUser);
        AddrLabel->setObjectName(QStringLiteral("AddrLabel"));
        AddrLabel->setGeometry(QRect(140, 200, 40, 20));
        IDLineEdit = new QLineEdit(AddUser);
        IDLineEdit->setObjectName(QStringLiteral("IDLineEdit"));
        IDLineEdit->setGeometry(QRect(190, 140, 133, 20));
        IDLabel = new QLabel(AddUser);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(140, 140, 40, 20));
        TitleLabel = new QLabel(AddUser);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(180, 10, 151, 51));
        NameLineEdit = new QLineEdit(AddUser);
        NameLineEdit->setObjectName(QStringLiteral("NameLineEdit"));
        NameLineEdit->setGeometry(QRect(190, 80, 133, 20));
        NameLineEdit->setStyleSheet(QStringLiteral(""));
        NameLabel = new QLabel(AddUser);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(140, 80, 40, 20));
        BGRLabel = new QLabel(AddUser);
        BGRLabel->setObjectName(QStringLiteral("BGRLabel"));
        BGRLabel->setGeometry(QRect(0, 0, 500, 400));
        BGRLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        OkBtn = new QPushButton(AddUser);
        OkBtn->setObjectName(QStringLiteral("OkBtn"));
        OkBtn->setGeometry(QRect(150, 300, 75, 23));
        returnBtn = new QPushButton(AddUser);
        returnBtn->setObjectName(QStringLiteral("returnBtn"));
        returnBtn->setGeometry(QRect(260, 300, 75, 23));
        BGRLabel->raise();
        AddrLineEdit->raise();
        PhoneLabel->raise();
        PhoneLineEdit->raise();
        AddrLabel->raise();
        IDLineEdit->raise();
        IDLabel->raise();
        TitleLabel->raise();
        NameLineEdit->raise();
        NameLabel->raise();
        OkBtn->raise();
        returnBtn->raise();

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QWidget *AddUser)
    {
        AddUser->setWindowTitle(QApplication::translate("AddUser", "Form", nullptr));
        PhoneLabel->setText(QApplication::translate("AddUser", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        AddrLabel->setText(QApplication::translate("AddUser", "\344\275\217\345\235\200\357\274\232", nullptr));
        IDLabel->setText(QApplication::translate("AddUser", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        TitleLabel->setText(QApplication::translate("AddUser", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\345\242\236\345\212\240\344\274\232\345\221\230\344\277\241\346\201\257</span></p></body></html>", nullptr));
        NameLabel->setText(QApplication::translate("AddUser", "\345\247\223\345\220\215\357\274\232", nullptr));
        BGRLabel->setText(QString());
        OkBtn->setText(QApplication::translate("AddUser", "\347\241\256\345\256\232", nullptr));
        returnBtn->setText(QApplication::translate("AddUser", "\350\277\224\345\233\236\344\270\212\344\270\200\345\261\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
