#ifndef FIVE_H
#define FIVE_H

#include <QWidget>

namespace Ui {
class five;
}

class five : public QWidget
{
    Q_OBJECT

public:
    explicit five(QWidget *parent = nullptr);
    ~five();

private slots:
    void on_pushButton_3_clicked();

signals:
    void accept5();

private:
    Ui::five *ui;
};

#endif // FIVE_H
