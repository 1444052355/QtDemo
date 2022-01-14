#ifndef MODIFYINFO_H
#define MODIFYINFO_H

#include <QWidget>
#include "homepage.h"
#include <QSqlTableModel>

namespace Ui {
class modifyInfo;
}

class modifyInfo : public QWidget
{
    Q_OBJECT

public:
    explicit modifyInfo(QWidget *parent = 0);
    ~modifyInfo();

private:
    Ui::modifyInfo *ui;
    QSqlTableModel *model;
private slots:
    void returnSlot();
    void researchSlot();
    void ModifyUserInfoSlot();
    void on_BackButton_clicked();
};

#endif // MODIFYINFO_H
