#include "five.h"
#include "ui_five.h"

five::five(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::five)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤5/9");
}

five::~five()
{
    delete ui;
}

void five::on_pushButton_3_clicked()
{
    emit accept5();
    this->close();
}

