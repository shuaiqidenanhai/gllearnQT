#ifndef EDITMESHING_H
#define EDITMESHING_H

#include <QWidget>

namespace Ui {
class EditMeshing;
}

class EditMeshing : public QWidget
{
    Q_OBJECT

public:
    explicit EditMeshing(QWidget *parent = nullptr);
    ~EditMeshing();

private slots:
    void on_confirmButton_clicked();

    void on_cancelButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_addButton_clicked();

    void on_deleteButton_clicked();

    void on_replaceButton_clicked();

private:
    Ui::EditMeshing *ui;
};

#endif // EDITMESHING_H
