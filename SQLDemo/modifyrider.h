#ifndef MODIFYRIDER_H
#define MODIFYRIDER_H

#include <QWidget>

namespace Ui {
class modifyrider;
}

class modifyrider : public QWidget
{
    Q_OBJECT

public:
    explicit modifyrider(QWidget *parent = 0);
    ~modifyrider();

private:
    Ui::modifyrider *ui;
};

#endif // MODIFYRIDER_H
