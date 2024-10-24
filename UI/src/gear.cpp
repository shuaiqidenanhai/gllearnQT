#include "gear.h"
#include "ui_gear.h"
#include <QDebug>
Gear::Gear(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gear)
{
    ui->setupUi(this);
}

Gear::~Gear()
{
    delete ui;
}

void Gear::on_confirmButton_clicked()
{

    this->close();
    emit parameters();

    //emit requestAddDrawNormal(DrawNoraml); // Emit signal with DrawNormal window

    // glfwDestroyWindow(DrawNoraml->showGear());
    // glfwWindow = nullptr;
    // setCentralWidget(glfwContainer);
    // GLFWwindow *DrawNormal1 = DrawNormal->showGear();


    // DrawNormal->drawShow();
    // drawNormal w1;
    //w1.show();
    //DrawNormal->show();
    //DrawNormal->move(this->geometry().center() - DrawNormal->rect().center());
    // MainWindow* empty = new MainWindow();
    // empty->centeralWindow(DrawNormal);

    // QCoreApplication::exit(); // 终止 Qt 事件循环
}


void Gear::on_pushButton_2_clicked()
{
    this->close();
}

// MultipleFloats Gear::getText() const
// {
//     // MultipleFloats textList;

//     return floats;
// }
QString Gear::getText1() const
{
    return ui->lineEdit->text();
}
int8_t Gear::getText2() const
{
    return ui->spinBox->value();
}
QString Gear::getText3() const
{
    return ui->lineEdit_2->text();
}
QString Gear::getText4() const
{
    return ui->lineEdit_3->text();;
}
QString Gear::getText5() const
{
    return ui->lineEdit_4->text();
}


