#ifndef GEAR_H
#define GEAR_H

#include <QWidget>
// #include <mainwindow.h>
#include "drawNoraml.h"
#include <GLFW/glfw3.h>

namespace Ui {
class Gear;
}

class Gear : public QWidget
{
    Q_OBJECT

public:
    explicit Gear(QWidget *parent = nullptr);
    ~Gear();

   // MultipleFloats getText() const;
    QString getText1() const;
    int8_t getText2() const;
    QString getText3() const;
    QString getText4() const;
    QString getText5() const;


private slots:
    void on_confirmButton_clicked();

    void on_pushButton_2_clicked();


signals:
    //void requestAddDrawNormal(drawNoraml *DrawNormal);
    void parameters();

private:
    Ui::Gear *ui;



};

#endif // GEAR_H
