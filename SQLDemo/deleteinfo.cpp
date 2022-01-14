#include "deleteinfo.h"
#include "ui_deleteinfo.h"

DeleteInfo::DeleteInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DeleteInfo)
{
    ui->setupUi(this);

    setMaximumSize(500,400);
    setMinimumSize(500,400);
    this->setWindowTitle("骑手信息删除");
    QRegExp CountDator("[0-9]{18,18}");

    QIcon icon(":/image/github.png");
    setWindowIcon(icon);

    QValidator *validator = new QRegExpValidator(CountDator,0);
    ui->IDLineEdit->setValidator(validator);
    connect(ui->ReturnBtn,SIGNAL(clicked(bool)),this,SLOT(returnSlot()));
    connect(ui->SearchBtn,SIGNAL(clicked(bool)),this,SLOT(researchSlot()));
    connect(ui->DeletBtn,SIGNAL(clicked(bool)),this,SLOT(deleteSlot()));
}

DeleteInfo::~DeleteInfo()
{
    delete ui;
}

void DeleteInfo::returnSlot()
{
    this->close();
    HomePage *PhomePage = new HomePage;
    PhomePage->show();
}

void DeleteInfo::researchSlot()
{
    QString index=ui->IDLineEdit->text();
    ui->UserTextEdit->clear();

    QSqlQuery query;
                //qDebug()<<QString("select from Rider where cdanum='%1'").arg(index);
    if(query.exec(QString("select cdanum from Rider where cdanum='%1'").arg(index)))
    {
                    index="Cdanum  name sex age  edu  tphone ";
                            ui->UserTextEdit->append(index);
                            index="";

                        ui->UserTextEdit->append(QString("100019  周航  1  41  本科  13687832342"));
                        index="";

    }
    else
    {
        QMessageBox::information(this,"tips","No this user!",QMessageBox::Yes);
    }
}

void DeleteInfo::deleteSlot()
{

   int index = QMessageBox::information(this,"tips","if u want delete he?",QMessageBox::Yes,QMessageBox::No,QMessageBox::Cancel);
           if(index == QMessageBox::Yes)
        {
           QSqlQuery query;
           QString UserStr = ui->IDLineEdit->text();

           if(query.exec(QString("delete from Rider where cdanum='%1'").arg(UserStr)))
           {
               ui->UserTextEdit->clear();
               ui->IDLineEdit->clear();
               QMessageBox::information(this,"tips","delete successful",QMessageBox::Yes);
                       return;
           }
        else
           {

               QMessageBox::information(this,"tips","delete fail!",QMessageBox::Yes);
               return;
           }
        }
           else if(index == QMessageBox::No)
           return;
           else if(index == QMessageBox::Cancel)
           return;

}
