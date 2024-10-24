#include "six.h"
#include "ui_six.h"

six::six(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::six)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤6/9");
}

six::~six()
{
    delete ui;
}

void six::on_pushButton_3_clicked()
{
    emit accept6();
    this->close();
}

