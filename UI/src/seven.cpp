#include "seven.h"
#include "ui_seven.h"

seven::seven(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seven)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤7/9");
}

seven::~seven()
{
    delete ui;
}

void seven::on_pushButton_3_clicked()
{
    emit accept7();
    this->close();
}

