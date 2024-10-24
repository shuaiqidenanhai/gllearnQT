#ifndef FOUR_H
#define FOUR_H

#include <QWidget>

namespace Ui {
class four;
}

class four : public QWidget
{
    Q_OBJECT

public:
    explicit four(QWidget *parent = nullptr);
    ~four();

private slots:
    void on_pushButton_4_clicked();

signals:
    void accept4();

private:
    Ui::four *ui;
};

#endif // FOUR_H
