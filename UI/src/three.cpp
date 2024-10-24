#include "three.h"
#include "ui_three.h"

three::three(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::three)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤3/9");
}

three::~three()
{
    delete ui;
}

void three::on_pushButton_6_clicked()
{
    emit accept3();
    this->close();
}

