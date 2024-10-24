#ifndef REDESIGN_H
#define REDESIGN_H

#include <QWidget>

namespace Ui {
class ReDesign;
}

class ReDesign : public QWidget
{
    Q_OBJECT

public:
    explicit ReDesign(QWidget *parent = nullptr);
    ~ReDesign();

private slots:
    void on_confirmButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::ReDesign *ui;
};

#endif // REDESIGN_H
