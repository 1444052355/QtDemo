#include "adduser.h"
#include "ui_adduser.h"
#include<QDebug>
AddUser::AddUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddUser)
{
    ui->setupUi(this);
    setMaximumSize(671,451);
    setMinimumSize(671,451);
    this->setWindowTitle("骑手添加");
    QRegExp CountDator("[0-9]{18,18}");
    QIcon icon(":/image/github.png");
    setWindowIcon(icon);
    QValidator *validator = new QRegExpValidator(CountDator,0);

    groupButton=new QButtonGroup(this);
    groupButton->addButton(ui->femaleButton,0);
    groupButton->addButton(ui->maleButton,1);
    ui->maleButton->setChecked(true);


    //ui->IDLineEdit->setValidator(validator);
    connect(ui->OkBtn,SIGNAL(clicked(bool)),this,SLOT(addUserSlot()));
    connect(ui->returnBtn,SIGNAL(clicked(bool)),this,SLOT(returnSlot()));
}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::addUserSlot()
{
    QString Name = ui->NameLineEdit->text();
    QString PhoneNum = ui->PhoneLineEdit->text();
    QString Age = ui->AgeLineEdit->text();
    QString Edu = ui->EduLineEdit->text();
    QString Sex = QString::number(groupButton->checkedId());


    qDebug()<<"Name:"<<Name<<"PhoneNum:"<<
              PhoneNum<<"Age:"<<Age<<"Edu:"<<Edu<<"Sex"<<Sex;
    qDebug()<<QString("use Recruitment Insert into Rider values('%1',%2 ,'%3',%4,%5)")
              .arg(Name).arg(PhoneNum).arg(Edu).arg(Sex).arg(Age);



    if(Name.isEmpty()|PhoneNum.isEmpty()|Age.isEmpty()|Edu.isEmpty()|Sex.isEmpty())
    {
        QMessageBox::information(this,"tips","Please complete information",QMessageBox::Yes);
        return ;
    }
    QSqlQuery query;
    if(query.exec(QString("use Recruitment Insert into Rider(name,tphone,edu,sex,age) values('%1',%2 ,'%3',%4,%5)")
                                            .arg(Name).arg(PhoneNum).arg(Edu).arg(Sex).arg(Age)))
       {
//        query.exec(QString("Insert into charge values('%1','%2' ,'%3','%4','%5')")
//                   .arg(Name).arg(PhoneNum).arg(0).arg(0).arg(0));
//        query.exec(QString("Insert into bill values('%1','%2' ,'%3','%4')")
//                   .arg(PhoneNum).arg(0).arg(0).arg(0));
        int index = QMessageBox::information
                (this,"tips","insert successful and Return to the upper layer?",QMessageBox::Yes,QMessageBox::Cancel);
        if(index == QMessageBox::Yes)
        {
            this->close();
            HomePage *PHomePage = new HomePage;
            PHomePage->show();
        }
        else if(index == QMessageBox::Cancel)
            {
            ui->NameLineEdit->clear();
            ui->PhoneLineEdit->clear();
            ui->EduLineEdit->clear();
            //ui->SexlineEdit->clear();
            ui->AgeLineEdit->clear();
            qDebug()<<"user cansel it.";
            }
    }
    else
    {
        QMessageBox::information(this,"tip","insert failed!",QMessageBox::Yes);
                return;
    }


}

void AddUser::returnSlot()
{
    this->close();
    HomePage *PHomePage = new HomePage;
    PHomePage->show();
}
