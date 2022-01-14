/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QLabel *TitleLabel;
    QPushButton *AddBtn;
    QPushButton *UserPayBtn;
    QPushButton *ExitBtn;
    QPushButton *ModifyBtn;
    QPushButton *DeleteBtn;
    QLabel *label;
    QPushButton *QueryBtn;

    void setupUi(QWidget *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QStringLiteral("HomePage"));
        HomePage->resize(498, 399);
        TitleLabel = new QLabel(HomePage);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(150, 30, 201, 41));
        AddBtn = new QPushButton(HomePage);
        AddBtn->setObjectName(QStringLiteral("AddBtn"));
        AddBtn->setGeometry(QRect(70, 130, 75, 23));
        UserPayBtn = new QPushButton(HomePage);
        UserPayBtn->setObjectName(QStringLiteral("UserPayBtn"));
        UserPayBtn->setGeometry(QRect(350, 130, 75, 23));
        ExitBtn = new QPushButton(HomePage);
        ExitBtn->setObjectName(QStringLiteral("ExitBtn"));
        ExitBtn->setGeometry(QRect(350, 300, 75, 23));
        ModifyBtn = new QPushButton(HomePage);
        ModifyBtn->setObjectName(QStringLiteral("ModifyBtn"));
        ModifyBtn->setGeometry(QRect(70, 300, 75, 23));
        DeleteBtn = new QPushButton(HomePage);
        DeleteBtn->setObjectName(QStringLiteral("DeleteBtn"));
        DeleteBtn->setGeometry(QRect(210, 190, 75, 23));
        label = new QLabel(HomePage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 500, 400));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        QueryBtn = new QPushButton(HomePage);
        QueryBtn->setObjectName(QStringLiteral("QueryBtn"));
        QueryBtn->setGeometry(QRect(210, 260, 75, 23));
        label->raise();
        TitleLabel->raise();
        AddBtn->raise();
        UserPayBtn->raise();
        ExitBtn->raise();
        ModifyBtn->raise();
        DeleteBtn->raise();
        QueryBtn->raise();

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("HomePage", "Form", nullptr));
        TitleLabel->setText(QApplication::translate("HomePage", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\347\224\265\350\257\235\350\256\241\350\264\271\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        AddBtn->setText(QApplication::translate("HomePage", "\346\267\273\345\212\240\344\274\232\345\221\230", nullptr));
        UserPayBtn->setText(QApplication::translate("HomePage", "\344\274\232\345\221\230\347\274\264\350\264\271", nullptr));
        ExitBtn->setText(QApplication::translate("HomePage", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        ModifyBtn->setText(QApplication::translate("HomePage", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        DeleteBtn->setText(QApplication::translate("HomePage", "\345\210\240\351\231\244\344\274\232\345\221\230", nullptr));
        label->setText(QString());
        QueryBtn->setText(QApplication::translate("HomePage", "\346\237\245\346\211\276\344\274\232\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
