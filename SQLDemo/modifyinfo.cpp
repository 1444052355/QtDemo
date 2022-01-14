#include "modifyinfo.h"
#include "ui_modifyinfo.h"

modifyInfo::modifyInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyInfo)
{
    ui->setupUi(this);
    setMaximumSize(748,558);
    setMinimumSize(748,558);
    this->setWindowTitle("修改骑手信息");
    QIcon icon(":/image/github.png");
    setWindowIcon(icon);


    model = new QSqlTableModel(this);
    connect(ui->ReturnBtn,SIGNAL(clicked(bool)),this,SLOT(returnSlot()));
    connect(ui->SearchBtn,SIGNAL(clicked(bool)),this,SLOT(researchSlot()));
    connect(ui->modifyBtn,SIGNAL(clicked(bool)),this,SLOT(ModifyUserInfoSlot()));
    connect(ui->BackButton,SIGNAL(clicked(bool)),this,SLOT(on_BackButton_clicked()));
}

modifyInfo::~modifyInfo()
{
    delete ui;
}

void modifyInfo::returnSlot()
{
    this->close();
    HomePage *PHomePage = new HomePage;
    PHomePage->show();
}


void modifyInfo::researchSlot()
{
    QString index = ui->CdanLineEdit->text();
    QString Table=ui->TableBox->currentText();
    model->setTable(Table);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    if(!index.isEmpty())model->setFilter(QString("cdanum = '%1'").arg(index));
    model->select();
    ui->tableView->setModel(model);
    QSqlQuery query;


    if(query.exec(QString("use Recruitment select name from Rider where cdanum='%1'").arg(index)))
    {
        query.next();
        QString UserInfo = query.value(0).toString();//如果成功就在之中插入姓名
        UserInfo = UserInfo.simplified();




















        //qDebug()<<UserInfo;
       // ui->NameLineEdit->setText(UserInfo);
      //ui->IDLineEdit->setText(index);

//        query.exec(QString("select Phone from phoneuser where ID='%1'").arg(index));
//        query.next();
//        UserInfo = query.value(0).toString();
//        UserInfo = UserInfo.simplified();
//        ui->PhoneLineEdit->setText(UserInfo);


//        query.exec(QString("select addr from phoneuser where ID='%1'").arg(index));
//        query.next();
//        UserInfo = query.value(0).toString();
//        UserInfo = UserInfo.simplified();
//        ui->AddrLineEdit->setText(UserInfo);
    }

}

void modifyInfo::ModifyUserInfoSlot()
{
    model->database().transaction(); //开始事务操作
        if (model->submitAll()) {
           model->database().commit(); //提交
        } else {
           model->database().rollback(); //回滚
           QMessageBox::warning(this, tr("tableModel"),
                                 tr("数据库错误: %1")
                                 .arg(model->lastError().text()));
        }
        model->select();
}

void modifyInfo::on_BackButton_clicked()
{
    model->revertAll();
}
