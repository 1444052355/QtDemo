/********************************************************************************
** Form generated from reading UI file 'userwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWIDGET_H
#define UI_USERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWidget
{
public:
    QLabel *BRGLabel;
    QPushButton *SafeExitBtn;
    QPushButton *CancellationBtn;
    QLabel *WelcomeLabel;
    QTextEdit *UserInfoTextEdit;

    void setupUi(QWidget *UserWidget)
    {
        if (UserWidget->objectName().isEmpty())
            UserWidget->setObjectName(QStringLiteral("UserWidget"));
        UserWidget->resize(500, 400);
        BRGLabel = new QLabel(UserWidget);
        BRGLabel->setObjectName(QStringLiteral("BRGLabel"));
        BRGLabel->setGeometry(QRect(0, 0, 500, 400));
        BRGLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        SafeExitBtn = new QPushButton(UserWidget);
        SafeExitBtn->setObjectName(QStringLiteral("SafeExitBtn"));
        SafeExitBtn->setGeometry(QRect(260, 350, 75, 23));
        CancellationBtn = new QPushButton(UserWidget);
        CancellationBtn->setObjectName(QStringLiteral("CancellationBtn"));
        CancellationBtn->setGeometry(QRect(140, 350, 75, 23));
        WelcomeLabel = new QLabel(UserWidget);
        WelcomeLabel->setObjectName(QStringLiteral("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(160, 50, 171, 41));
        WelcomeLabel->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        UserInfoTextEdit = new QTextEdit(UserWidget);
        UserInfoTextEdit->setObjectName(QStringLiteral("UserInfoTextEdit"));
        UserInfoTextEdit->setGeometry(QRect(110, 110, 271, 221));

        retranslateUi(UserWidget);

        QMetaObject::connectSlotsByName(UserWidget);
    } // setupUi

    void retranslateUi(QWidget *UserWidget)
    {
        UserWidget->setWindowTitle(QApplication::translate("UserWidget", "Form", nullptr));
        BRGLabel->setText(QString());
        SafeExitBtn->setText(QApplication::translate("UserWidget", "\345\256\211\345\205\250\351\200\200\345\207\272", nullptr));
        CancellationBtn->setText(QApplication::translate("UserWidget", "\346\263\250\351\224\200\347\231\273\345\275\225", nullptr));
        WelcomeLabel->setText(QApplication::translate("UserWidget", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\346\254\242\350\277\216\345\260\212\346\225\254\347\232\204\347\256\241\347\220\206\345\221\230</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWidget: public Ui_UserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWIDGET_H
