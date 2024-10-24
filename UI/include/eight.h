#ifndef EIGHT_H
#define EIGHT_H

#include <QWidget>

namespace Ui {
class eight;
}

class eight : public QWidget
{
    Q_OBJECT

public:
    explicit eight(QWidget *parent = nullptr);
    ~eight();

private slots:
    void on_pushButton_3_clicked();

signals:
    void accept8();
private:
    Ui::eight *ui;
};

#endif // EIGHT_H
