#ifndef SHAFT_H
#define SHAFT_H

#include <QWidget>

namespace Ui {
class shaft;
}

class shaft : public QWidget
{
    Q_OBJECT

public:
    explicit shaft(QWidget *parent = nullptr);
    ~shaft();

private slots:
    void on_confirmButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::shaft *ui;
};

#endif // SHAFT_H
