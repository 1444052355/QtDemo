/********************************************************************************
** Form generated from reading UI file 'userpay.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAY_H
#define UI_USERPAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPay
{
public:
    QLabel *TitleLabel;
    QPushButton *ResearchBtn;
    QLineEdit *IDLineEdit;
    QLabel *IDLabel;
    QPushButton *RechangeBtn;
    QLineEdit *MoneyLineEdit;
    QLabel *MoneyPayLabel;
    QPushButton *returnBtn;
    QLabel *BRGLabel;
    QTextEdit *UserInfoTextEdit;

    void setupUi(QWidget *UserPay)
    {
        if (UserPay->objectName().isEmpty())
            UserPay->setObjectName(QStringLiteral("UserPay"));
        UserPay->resize(500, 400);
        TitleLabel = new QLabel(UserPay);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(175, 20, 151, 51));
        ResearchBtn = new QPushButton(UserPay);
        ResearchBtn->setObjectName(QStringLiteral("ResearchBtn"));
        ResearchBtn->setGeometry(QRect(330, 80, 75, 23));
        IDLineEdit = new QLineEdit(UserPay);
        IDLineEdit->setObjectName(QStringLiteral("IDLineEdit"));
        IDLineEdit->setGeometry(QRect(170, 80, 133, 20));
        IDLabel = new QLabel(UserPay);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(100, 80, 71, 21));
        RechangeBtn = new QPushButton(UserPay);
        RechangeBtn->setObjectName(QStringLiteral("RechangeBtn"));
        RechangeBtn->setGeometry(QRect(330, 330, 75, 23));
        MoneyLineEdit = new QLineEdit(UserPay);
        MoneyLineEdit->setObjectName(QStringLiteral("MoneyLineEdit"));
        MoneyLineEdit->setGeometry(QRect(170, 330, 133, 20));
        MoneyPayLabel = new QLabel(UserPay);
        MoneyPayLabel->setObjectName(QStringLiteral("MoneyPayLabel"));
        MoneyPayLabel->setGeometry(QRect(100, 330, 61, 16));
        returnBtn = new QPushButton(UserPay);
        returnBtn->setObjectName(QStringLiteral("returnBtn"));
        returnBtn->setGeometry(QRect(410, 330, 75, 23));
        BRGLabel = new QLabel(UserPay);
        BRGLabel->setObjectName(QStringLiteral("BRGLabel"));
        BRGLabel->setGeometry(QRect(0, 0, 500, 400));
        BRGLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        UserInfoTextEdit = new QTextEdit(UserPay);
        UserInfoTextEdit->setObjectName(QStringLiteral("UserInfoTextEdit"));
        UserInfoTextEdit->setGeometry(QRect(100, 120, 300, 190));
        BRGLabel->raise();
        TitleLabel->raise();
        ResearchBtn->raise();
        IDLineEdit->raise();
        IDLabel->raise();
        RechangeBtn->raise();
        MoneyLineEdit->raise();
        MoneyPayLabel->raise();
        returnBtn->raise();
        UserInfoTextEdit->raise();

        retranslateUi(UserPay);

        QMetaObject::connectSlotsByName(UserPay);
    } // setupUi

    void retranslateUi(QWidget *UserPay)
    {
        UserPay->setWindowTitle(QApplication::translate("UserPay", "Form", nullptr));
        TitleLabel->setText(QApplication::translate("UserPay", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\344\274\232\345\221\230\347\274\264\350\264\271</span></p></body></html>", nullptr));
        ResearchBtn->setText(QApplication::translate("UserPay", "\346\220\234\347\264\242", nullptr));
        IDLabel->setText(QApplication::translate("UserPay", "\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        RechangeBtn->setText(QApplication::translate("UserPay", "\345\205\205\345\200\274", nullptr));
        MoneyPayLabel->setText(QApplication::translate("UserPay", "\350\276\223\345\205\245\351\207\221\351\242\235\357\274\232", nullptr));
        returnBtn->setText(QApplication::translate("UserPay", "\350\277\224\345\233\236\344\270\212\345\261\202", nullptr));
        BRGLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserPay: public Ui_UserPay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAY_H
