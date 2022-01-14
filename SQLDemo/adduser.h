#ifndef ADDUSER_H
#define ADDUSER_H

#include <QButtonGroup>
#include <QDebug>
#include <QWidget>
#include "sqldemo.h"

namespace Ui {
class AddUser;
}

class AddUser : public QWidget
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = 0);
    ~AddUser();

private:
    QButtonGroup *groupButton;
    Ui::AddUser *ui;
private slots:
    void addUserSlot();
    void returnSlot();
};

#endif // ADDUSER_H
