#ifndef SIX_H
#define SIX_H

#include <QWidget>

namespace Ui {
class six;
}

class six : public QWidget
{
    Q_OBJECT

public:
    explicit six(QWidget *parent = nullptr);
    ~six();

private slots:
    void on_pushButton_3_clicked();

signals:
    void accept6();

private:
    Ui::six *ui;
};

#endif // SIX_H
