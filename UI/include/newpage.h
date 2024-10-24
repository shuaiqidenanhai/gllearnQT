#ifndef NEWPAGE_H
#define NEWPAGE_H

#include <QWidget>
#include <nestedmainwindow.h>


namespace Ui {
class NewPage;
}

class NewPage : public QWidget
{
    Q_OBJECT

public:
    explicit NewPage(QWidget *parent = nullptr);
    ~NewPage();

    QString getLabelText() const;

signals:
    void accepted();
    void accepted_1();
    void accepted_name();

private slots:
    void on_confirmButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::NewPage *ui;
    //QLabel *lable;
};

#endif // NEWPAGE_H
