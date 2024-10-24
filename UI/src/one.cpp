#include "one.h"
#include "ui_one.h"
#include "two.h"

one::one(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::one)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤1/9");
}

one::~one()
{
    delete ui;
}

void one::on_pushButton_6_clicked()
{
    emit accepted_signal();
    this->close();
}

