#ifndef ONE_H
#define ONE_H

#include <QWidget>

namespace Ui {
class one;
}

class one : public QWidget
{
    Q_OBJECT

public:
    explicit one(QWidget *parent = nullptr);
    ~one();

private slots:
    void on_pushButton_6_clicked();

signals:
    void accepted_signal();

private:
    Ui::one *ui;
};

#endif // ONE_H
