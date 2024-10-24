#include "two.h"
#include "ui_two.h"

two::two(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::two)
{
    ui->setupUi(this);
    this->setWindowTitle("齿轮导向  步骤2/9");
}

two::~two()
{
    delete ui;
}

void two::on_pushButton_7_clicked()
{
    emit accept2();
    this->close();
}

