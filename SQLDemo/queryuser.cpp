#include "queryuser.h"
#include "ui_queryuser.h"
#include "qsqldatabase.h"
#include "qmessagebox.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "qsqltablemodel.h"





QueryUser::QueryUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueryUser)
{
    ui->setupUi(this);
    ui->UserInfoTextEdit->setReadOnly(true);
    setMaximumSize(691,611);
    setMinimumSize(691,611);
    this->setWindowTitle("骑手信息查询");
    QRegExp CountDator("[0-9]{18,18}");
    QValidator *validator = new QRegExpValidator(CountDator,0);
    //ui->UserIDLineEdit->setValidator(validator);

    QIcon icon(":/image/github.png");
    setWindowIcon(icon);


        //ui->UserInfoTextEdit->append(QString(""));

    connect(ui->returnBtn,SIGNAL(clicked(bool)),this,SLOT(returnSlot()));
   // connect(ui->QueryBtn,SIGNAL(clicked(bool)),this,SLOT(searchSlot()));
}

QueryUser::~QueryUser()
{
    delete ui;
}

void QueryUser::returnSlot()
{
    this->close();
    HomePage *PHomePage = new HomePage;
    PHomePage->show();
}

void QueryUser::searchSlot()
{
    ui->UserInfoTextEdit->clear();
    QSqlQuery query;
    QString index;
    //QString UserID = ui->UserIDLineEdit->text();
    //QString Table=ui->TablecomboBox->currentText();
    qDebug()<<QString("select *from %1");

//    if(query.exec(QString("use Recruitment select *from %1")))
//    {



//        if(Table==QString("Rider"))
//        {
//            index="Cdanum  name sex age  edu  tphone ";
//                    ui->UserInfoTextEdit->append(index);
//                    index="";
//            while(query.next()){
//                for(int i=0;i<6;i++)
//                {
//               index += query.value(i).toString().simplified()+"  ";
//                }

//                ui->UserInfoTextEdit->append(index);
//                index="";
//            }
//        }
//        else if(Table ==QString("ArrivalResults")){
//               index="Cdanum  tphone      isarrival";
//               ui->UserInfoTextEdit->append(index);
//               index="";
//               while(query.next()){
//                   for(int i=0;i<3;i++)
//                   {
//                  index += query.value(i).toString().simplified()+"  ";
//                   }

//                   ui->UserInfoTextEdit->append(index);
//                   index="";
//               }

//    }
//        else if(Table==QString("AuditResults"))
//        {
//            index="cdanum resis exper traff aver ishire";
//            ui->UserInfoTextEdit->append(index);
//            index="";
//            while(query.next()){
//                for(int i=0;i<6;i++)
//                {
//               index += query.value(i).toString().simplified()+"  ";
//                }

//                ui->UserInfoTextEdit->append(index);
//                index="";
//            }
//        }
//      }

//    else
//    {
//        QMessageBox::information(this,"tips","No this User");
//    }

}
