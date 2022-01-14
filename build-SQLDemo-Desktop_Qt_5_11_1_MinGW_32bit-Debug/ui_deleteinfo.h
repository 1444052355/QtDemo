/********************************************************************************
** Form generated from reading UI file 'deleteinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEINFO_H
#define UI_DELETEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteInfo
{
public:
    QLabel *label;
    QPushButton *SearchBtn;
    QLabel *IDLabel;
    QLabel *TitleLabel;
    QLineEdit *IDLineEdit;
    QTextEdit *UserTextEdit;
    QPushButton *DeletBtn;
    QPushButton *ReturnBtn;

    void setupUi(QWidget *DeleteInfo)
    {
        if (DeleteInfo->objectName().isEmpty())
            DeleteInfo->setObjectName(QStringLiteral("DeleteInfo"));
        DeleteInfo->resize(500, 400);
        label = new QLabel(DeleteInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 500, 400));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/backimage.png);"));
        SearchBtn = new QPushButton(DeleteInfo);
        SearchBtn->setObjectName(QStringLiteral("SearchBtn"));
        SearchBtn->setGeometry(QRect(360, 80, 75, 23));
        IDLabel = new QLabel(DeleteInfo);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(100, 80, 81, 16));
        TitleLabel = new QLabel(DeleteInfo);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setGeometry(QRect(175, 10, 151, 51));
        IDLineEdit = new QLineEdit(DeleteInfo);
        IDLineEdit->setObjectName(QStringLiteral("IDLineEdit"));
        IDLineEdit->setGeometry(QRect(190, 80, 133, 20));
        UserTextEdit = new QTextEdit(DeleteInfo);
        UserTextEdit->setObjectName(QStringLiteral("UserTextEdit"));
        UserTextEdit->setGeometry(QRect(90, 120, 341, 221));
        DeletBtn = new QPushButton(DeleteInfo);
        DeletBtn->setObjectName(QStringLiteral("DeletBtn"));
        DeletBtn->setGeometry(QRect(150, 360, 75, 23));
        ReturnBtn = new QPushButton(DeleteInfo);
        ReturnBtn->setObjectName(QStringLiteral("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(290, 360, 75, 23));

        retranslateUi(DeleteInfo);

        QMetaObject::connectSlotsByName(DeleteInfo);
    } // setupUi

    void retranslateUi(QWidget *DeleteInfo)
    {
        DeleteInfo->setWindowTitle(QApplication::translate("DeleteInfo", "Form", nullptr));
        label->setText(QString());
        SearchBtn->setText(QApplication::translate("DeleteInfo", "\346\220\234\347\264\242", nullptr));
        IDLabel->setText(QApplication::translate("DeleteInfo", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        TitleLabel->setText(QApplication::translate("DeleteInfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\344\274\232\345\221\230\344\277\241\346\201\257\345\210\240\351\231\244</span></p></body></html>", nullptr));
        DeletBtn->setText(QApplication::translate("DeleteInfo", "\345\210\240\351\231\244", nullptr));
        ReturnBtn->setText(QApplication::translate("DeleteInfo", "\350\277\224\345\233\236\344\270\212\344\270\200\345\261\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteInfo: public Ui_DeleteInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEINFO_H
