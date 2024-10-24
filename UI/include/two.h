#ifndef TWO_H
#define TWO_H

#include <QWidget>

namespace Ui {
class two;
}

class two : public QWidget
{
    Q_OBJECT

public:
    two(QWidget *parent = nullptr);
    ~two();

private slots:
    void on_pushButton_7_clicked();

signals:
    void accept2();

private:
    Ui::two *ui;
};

#endif // TWO_H
