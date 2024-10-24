#ifndef SPOKESDETAIL_H
#define SPOKESDETAIL_H

#include <QWidget>

namespace Ui {
class SpokesDetail;
}

class SpokesDetail : public QWidget
{
    Q_OBJECT

public:
    explicit SpokesDetail(QWidget *parent = nullptr);
    ~SpokesDetail();

private slots:
    void on_confirmButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::SpokesDetail *ui;
};

#endif // SPOKESDETAIL_H
