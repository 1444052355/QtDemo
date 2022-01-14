/********************************************************************************
** Form generated from reading UI file 'modifyinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYINFO_H
#define UI_MODIFYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyInfo
{
public:
    QPushButton *SearchBtn;
    QLineEdit *NameLineEdit;
    QLineEdit *IDLineEdit;
    QLineEdit *AddrLineEdit;
    QLineEdit *PhoneLineEdit;
    QLabel *NameLabel;
    QLabel *IDLabel;
    QLabel *AddrLabel;
    QLabel *TitleLabel;
    QPushButton *ReturnBtn;
    QLabel *PhoneLabel;
    QPushButton *modifyBtn;
    QLabel *BGRLabel;
    QLabel *SIDLabel;
    QLineEdit *SIDLineEdit;

    void setupUi(QWidget *modifyInfo)
    {
        if (modifyInfo->objectName().isEmpty())
            modifyInfo->setObjectName(QStringLiteral("modifyInfo"));
        modifyInfo->resize(500, 400);
        SearchBtn = new QPushButton(modifyInfo);
        SearchBtn->setObjectName(QStringLiteral("SearchBtn"));
        SearchBtn->setGeometry(QRect(330, 70, 40, 40));
        NameLineEdit = new QLineEdit(modifyInfo);
        NameLineEdit->setObjectName(QStringLiteral("NameLineEdit"));
        NameLineEdit->setGeometry(QRect(180, 120, 133, 20));
        IDLineEdit = new QLineEdit(modifyInfo);
        IDLineEdit->setObjectName(QStringLiteral("IDLineEdit"));
        IDLineEdit->setGeometry(QRect(180, 170, 133, 20));
        AddrLineEdit = new QLineEdit(modifyInfo);
        AddrLineEdit->setObjectName(QStringLiteral("AddrLineEdit"));
        AddrLineEdit->setGeometry(QRect(180, 270, 133, 20));
        PhoneLineEdit = new QLineEdit(modifyInfo);
        PhoneLineEdit->setObjectName(QStringLiteral("PhoneLineEdit"));
        PhoneLineEdit->setGeometry(QRect(180, 220, 133, 20));
        NameLabel = new QLabel(modifyInfo);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(130, 120, 40, 20));
        IDLabel = new QLabel(modifyInfo);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(130, 170, 40, 20));
        AddrLabel = new QLabel(modifyInfo);
        AddrLabel->setObjectName(QStringLiteral("AddrLabel"));
        AddrLabel->setGeometry(QRect(130, 270, 40, 20));
        TitleLabel = new QLabel(modifyInfo);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(175, 0, 151, 51));
        ReturnBtn = new QPushButton(modifyInfo);
        ReturnBtn->setObjectName(QStringLiteral("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(280, 320, 75, 23));
        PhoneLabel = new QLabel(modifyInfo);
        PhoneLabel->setObjectName(QStringLiteral("PhoneLabel"));
        PhoneLabel->setGeometry(QRect(130, 220, 40, 20));
        modifyBtn = new QPushButton(modifyInfo);
        modifyBtn->setObjectName(QStringLiteral("modifyBtn"));
        modifyBtn->setEnabled(true);
        modifyBtn->setGeometry(QRect(160, 320, 75, 23));
        BGRLabel = new QLabel(modifyInfo);
        BGRLabel->setObjectName(QStringLiteral("BGRLabel"));
        BGRLabel->setGeometry(QRect(9, 9, 491, 391));
        BGRLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        SIDLabel = new QLabel(modifyInfo);
        SIDLabel->setObjectName(QStringLiteral("SIDLabel"));
        SIDLabel->setGeometry(QRect(185, 60, 131, 16));
        SIDLineEdit = new QLineEdit(modifyInfo);
        SIDLineEdit->setObjectName(QStringLiteral("SIDLineEdit"));
        SIDLineEdit->setGeometry(QRect(180, 80, 133, 20));
        BGRLabel->raise();
        modifyBtn->raise();
        NameLineEdit->raise();
        IDLineEdit->raise();
        AddrLineEdit->raise();
        PhoneLineEdit->raise();
        NameLabel->raise();
        AddrLabel->raise();
        IDLabel->raise();
        PhoneLabel->raise();
        SearchBtn->raise();
        TitleLabel->raise();
        ReturnBtn->raise();
        SIDLabel->raise();
        SIDLineEdit->raise();

        retranslateUi(modifyInfo);

        QMetaObject::connectSlotsByName(modifyInfo);
    } // setupUi

    void retranslateUi(QWidget *modifyInfo)
    {
        modifyInfo->setWindowTitle(QApplication::translate("modifyInfo", "Form", nullptr));
        SearchBtn->setText(QApplication::translate("modifyInfo", "\346\220\234\347\264\242", nullptr));
        NameLabel->setText(QApplication::translate("modifyInfo", "\345\247\223\345\220\215\357\274\232", nullptr));
        IDLabel->setText(QApplication::translate("modifyInfo", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        AddrLabel->setText(QApplication::translate("modifyInfo", "\344\275\217\345\235\200\357\274\232", nullptr));
        TitleLabel->setText(QApplication::translate("modifyInfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\344\274\232\345\221\230\344\277\241\346\201\257\344\277\256\346\224\271</span></p></body></html>", nullptr));
        ReturnBtn->setText(QApplication::translate("modifyInfo", "\350\277\224\345\233\236\344\270\212\344\270\200\345\261\202", nullptr));
        PhoneLabel->setText(QApplication::translate("modifyInfo", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        modifyBtn->setText(QApplication::translate("modifyInfo", "\344\277\256\346\224\271", nullptr));
        BGRLabel->setText(QString());
        SIDLabel->setText(QApplication::translate("modifyInfo", "\350\276\223\350\246\201\344\277\256\346\224\271\344\274\232\345\221\230\347\232\204\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyInfo: public Ui_modifyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYINFO_H
