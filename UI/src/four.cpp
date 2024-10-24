#include "four.h"
#include "ui_four.h"

four::four(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::four)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤4/9");
}

four::~four()
{
    delete ui;
}

void four::on_pushButton_4_clicked()
{
    emit accept4();
    this->close();
}

