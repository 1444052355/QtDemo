/********************************************************************************
** Form generated from reading UI file 'queryuser.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYUSER_H
#define UI_QUERYUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryUser
{
public:
    QLabel *BGRLabel;
    QLabel *TitleLabel;
    QPushButton *QueryBtn;
    QLabel *label;
    QLineEdit *UserIDLineEdit;
    QTextEdit *UserInfoTextEdit;
    QPushButton *returnBtn;

    void setupUi(QWidget *QueryUser)
    {
        if (QueryUser->objectName().isEmpty())
            QueryUser->setObjectName(QStringLiteral("QueryUser"));
        QueryUser->resize(500, 400);
        BGRLabel = new QLabel(QueryUser);
        BGRLabel->setObjectName(QStringLiteral("BGRLabel"));
        BGRLabel->setGeometry(QRect(0, 0, 500, 400));
        BGRLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        TitleLabel = new QLabel(QueryUser);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(175, 20, 151, 51));
        QueryBtn = new QPushButton(QueryUser);
        QueryBtn->setObjectName(QStringLiteral("QueryBtn"));
        QueryBtn->setGeometry(QRect(350, 90, 75, 23));
        label = new QLabel(QueryUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 90, 81, 16));
        UserIDLineEdit = new QLineEdit(QueryUser);
        UserIDLineEdit->setObjectName(QStringLiteral("UserIDLineEdit"));
        UserIDLineEdit->setGeometry(QRect(200, 90, 133, 20));
        UserInfoTextEdit = new QTextEdit(QueryUser);
        UserInfoTextEdit->setObjectName(QStringLiteral("UserInfoTextEdit"));
        UserInfoTextEdit->setGeometry(QRect(110, 130, 311, 211));
        returnBtn = new QPushButton(QueryUser);
        returnBtn->setObjectName(QStringLiteral("returnBtn"));
        returnBtn->setGeometry(QRect(230, 360, 75, 23));

        retranslateUi(QueryUser);

        QMetaObject::connectSlotsByName(QueryUser);
    } // setupUi

    void retranslateUi(QWidget *QueryUser)
    {
        QueryUser->setWindowTitle(QApplication::translate("QueryUser", "Form", nullptr));
        BGRLabel->setText(QString());
        TitleLabel->setText(QApplication::translate("QueryUser", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\344\274\232\345\221\230\344\277\241\346\201\257\346\237\245\350\257\242</span></p></body></html>", nullptr));
        QueryBtn->setText(QApplication::translate("QueryUser", "\346\237\245\350\257\242", nullptr));
        label->setText(QApplication::translate("QueryUser", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        returnBtn->setText(QApplication::translate("QueryUser", "\350\277\224\345\233\236\344\270\212\344\270\200\345\261\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryUser: public Ui_QueryUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYUSER_H
