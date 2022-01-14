/********************************************************************************
** Form generated from reading UI file 'sqldemo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDEMO_H
#define UI_SQLDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SQLDemo
{
public:
    QLabel *CountLabel;
    QLabel *PasswordLabel;
    QLineEdit *CountLineEdit;
    QLineEdit *PasswordLineEdit;
    QLabel *TitleLabel;
    QPushButton *LoadBtn;
    QLabel *ForgetLabel;
    QRadioButton *MassgeradioBtn;
    QRadioButton *UserRadioBtn;
    QLabel *backgroundLabel;

    void setupUi(QWidget *SQLDemo)
    {
        if (SQLDemo->objectName().isEmpty())
            SQLDemo->setObjectName(QStringLiteral("SQLDemo"));
        SQLDemo->resize(450, 300);
        CountLabel = new QLabel(SQLDemo);
        CountLabel->setObjectName(QStringLiteral("CountLabel"));
        CountLabel->setGeometry(QRect(140, 110, 31, 16));
        PasswordLabel = new QLabel(SQLDemo);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(140, 160, 31, 16));
        CountLineEdit = new QLineEdit(SQLDemo);
        CountLineEdit->setObjectName(QStringLiteral("CountLineEdit"));
        CountLineEdit->setGeometry(QRect(190, 110, 113, 20));
        PasswordLineEdit = new QLineEdit(SQLDemo);
        PasswordLineEdit->setObjectName(QStringLiteral("PasswordLineEdit"));
        PasswordLineEdit->setGeometry(QRect(190, 160, 113, 20));
        PasswordLineEdit->setEchoMode(QLineEdit::Password);
        TitleLabel = new QLabel(SQLDemo);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(130, 40, 201, 41));
        LoadBtn = new QPushButton(SQLDemo);
        LoadBtn->setObjectName(QStringLiteral("LoadBtn"));
        LoadBtn->setGeometry(QRect(190, 230, 75, 23));
        ForgetLabel = new QLabel(SQLDemo);
        ForgetLabel->setObjectName(QStringLiteral("ForgetLabel"));
        ForgetLabel->setGeometry(QRect(310, 110, 90, 16));
        MassgeradioBtn = new QRadioButton(SQLDemo);
        MassgeradioBtn->setObjectName(QStringLiteral("MassgeradioBtn"));
        MassgeradioBtn->setGeometry(QRect(160, 190, 61, 21));
        UserRadioBtn = new QRadioButton(SQLDemo);
        UserRadioBtn->setObjectName(QStringLiteral("UserRadioBtn"));
        UserRadioBtn->setGeometry(QRect(250, 190, 51, 21));
        backgroundLabel = new QLabel(SQLDemo);
        backgroundLabel->setObjectName(QStringLiteral("backgroundLabel"));
        backgroundLabel->setGeometry(QRect(0, 0, 450, 300));
        backgroundLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        backgroundLabel->raise();
        CountLabel->raise();
        PasswordLabel->raise();
        CountLineEdit->raise();
        PasswordLineEdit->raise();
        TitleLabel->raise();
        LoadBtn->raise();
        ForgetLabel->raise();
        MassgeradioBtn->raise();
        UserRadioBtn->raise();

        retranslateUi(SQLDemo);

        QMetaObject::connectSlotsByName(SQLDemo);
    } // setupUi

    void retranslateUi(QWidget *SQLDemo)
    {
        SQLDemo->setWindowTitle(QApplication::translate("SQLDemo", "SQLDemo", nullptr));
        CountLabel->setText(QApplication::translate("SQLDemo", "\350\264\246\346\210\267\357\274\232", nullptr));
        PasswordLabel->setText(QApplication::translate("SQLDemo", "\345\257\206\347\240\201\357\274\232", nullptr));
        TitleLabel->setText(QApplication::translate("SQLDemo", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\347\224\265\350\257\235\350\256\241\350\264\271\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        LoadBtn->setText(QApplication::translate("SQLDemo", "\347\231\273\345\275\225", nullptr));
        ForgetLabel->setText(QApplication::translate("SQLDemo", "forget password", nullptr));
        MassgeradioBtn->setText(QApplication::translate("SQLDemo", "\347\256\241\347\220\206\345\221\230", nullptr));
        UserRadioBtn->setText(QApplication::translate("SQLDemo", "\344\274\232\345\221\230", nullptr));
        backgroundLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SQLDemo: public Ui_SQLDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDEMO_H
