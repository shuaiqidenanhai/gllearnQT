#include "editmeshing.h"
#include "ui_editmeshing.h"

EditMeshing::EditMeshing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditMeshing)
{
    ui->setupUi(this);
}

EditMeshing::~EditMeshing()
{
    delete ui;
}

void EditMeshing::on_confirmButton_clicked()
{
    this->close();
}

void EditMeshing::on_cancelButton_clicked()
{
    this->close();
}

void EditMeshing::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == 2)
    {
        ui->lineEdit->setEnabled(true);
        ui->comboBox->setEnabled(true);
        ui->setButton->setEnabled(true);
    }
    else if(arg1 == 0)
    {
        ui->lineEdit->setEnabled(false);
        ui->comboBox->setEnabled(false);
        ui->setButton->setEnabled(false);
    }
}

void EditMeshing::on_addButton_clicked()
{
    //获取当前表格行数
    int currentRowCount = ui->tableWidget->rowCount();
    //在表格中插入行
    ui->tableWidget->insertRow(currentRowCount);

    QString text1 = ui->comboBox_2->currentText();//齿轮1
    QString text2 = ui->comboBox_3->currentText();//齿轮2
    QString text3 = ui->lineEdit->text();//啮合中心距
    //在新插入的行中添加内容
    QTableWidgetItem *item1 = new QTableWidgetItem(text1);
    QTableWidgetItem *item2 = new QTableWidgetItem(text2);
    QTableWidgetItem *item3 = new QTableWidgetItem(text3);
    QTableWidgetItem *item4 = new QTableWidgetItem("估计值");

    ui->tableWidget->setItem(currentRowCount-1, 0, item1);
    ui->tableWidget->setItem(currentRowCount-1, 1, item2);
    ui->tableWidget->setItem(currentRowCount-1, 2, item3);
    ui->tableWidget->setItem(currentRowCount-1, 3, item4);

}

void EditMeshing::on_deleteButton_clicked()
{
    //设置选择模式为单选
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    //在表格中插入行
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void EditMeshing::on_replaceButton_clicked()
{
    // 获取QLineEdit的内容
    QString newText1 = ui->comboBox_2->currentText();
    QString newText2 = ui->comboBox_3->currentText();
    QString newText3 = ui->lineEdit->text();

    // 获取选中行的索引
    QList<QTableWidgetItem *> selectedItems = ui->tableWidget->selectedItems();
    if (selectedItems.isEmpty()) {
        return;
    }
    int selectedRow = selectedItems.first()->row();

    // 将QLineEdit的内容替换到表格中选中行的对应列中
    QTableWidgetItem *item1 = new QTableWidgetItem(newText1);
    QTableWidgetItem *item2 = new QTableWidgetItem(newText2);
    QTableWidgetItem *item3 = new QTableWidgetItem(newText3);
    ui->tableWidget->setItem(selectedRow, 0, item1); // 第一列
    ui->tableWidget->setItem(selectedRow, 1, item2); // 第二列
    ui->tableWidget->setItem(selectedRow, 2, item3); // 第三列
}
