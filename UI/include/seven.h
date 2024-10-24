#ifndef SEVEN_H
#define SEVEN_H

#include <QWidget>

namespace Ui {
class seven;
}

class seven : public QWidget
{
    Q_OBJECT

public:
    explicit seven(QWidget *parent = nullptr);
    ~seven();

private slots:
    void on_pushButton_3_clicked();
signals:
    void accept7();
private:
    Ui::seven *ui;
};

#endif // SEVEN_H
