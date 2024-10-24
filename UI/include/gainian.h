#ifndef GAINIAN_H
#define GAINIAN_H

#include <QWidget>
#include <QFile>
#include <QVBoxLayout>
#include <QButtonGroup>
// #include <QUiLoader>
#include <spokesdetail.h>
#include <redesign.h>
// #include <materials.h>
#include <editmeshing.h>
#include <QTableWidget>

namespace Ui {
class GaiNian;
}

class GaiNian : public QWidget
{
    Q_OBJECT

public:
    explicit GaiNian(QWidget *parent = nullptr);
    ~GaiNian();


private slots:

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();


    void on_editButton_clicked();

    void on_reDesignButton_clicked();

    // void on_editMaterial_clicked();

    void on_editMeshing_clicked();

    void on_confirmButton_clicked();



    void on_cancelButton_clicked();

    void on_addButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::GaiNian *ui;
    //QTableWidget *tableWidget;
};

#endif // GAINIAN_H
