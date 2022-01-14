#include "modifyrider.h"
#include "ui_modifyrider.h"

modifyrider::modifyrider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyrider)
{
    ui->setupUi(this);
}

modifyrider::~modifyrider()
{
    delete ui;
}
