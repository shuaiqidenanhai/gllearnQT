#ifndef THREE_H
#define THREE_H

#include <QWidget>

namespace Ui {
class three;
}

class three : public QWidget
{
    Q_OBJECT

public:
    explicit three(QWidget *parent = nullptr);
    ~three();

private slots:
    void on_pushButton_6_clicked();

signals:
    void accept3();

private:
    Ui::three *ui;
};

#endif // THREE_H
