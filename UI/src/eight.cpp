#include "eight.h"
#include "ui_eight.h"

eight::eight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eight)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤8/9");
}

eight::~eight()
{
    delete ui;
}

void eight::on_pushButton_3_clicked()
{
    emit accept8();
    this->close();
}

