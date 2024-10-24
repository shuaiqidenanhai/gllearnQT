#include "gainian.h"
#include "ui_gainian.h"

#include "spokesdetail.h"
#include "redesign.h"

#include "editmeshing.h"

GaiNian::GaiNian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GaiNian)
{
    ui->setupUi(this);
    //setWindowFlags(Qt::Widget);
    //setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    //hide();


//    //加载其他界面
//    QUiLoader loader;
//    QFile file(":/gainian.ui"); // 替换成其他UI文件的路径
//    file.open(QFile::ReadOnly);
//    QWidget *otherWidget = loader.load(&file, this);
//    file.close();

//    if (otherWidget) {
//        QVBoxLayout *layout = new QVBoxLayout(this);
//        layout->addWidget(otherWidget);
//  }

    QButtonGroup *buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->leftButton);
    buttonGroup->addButton(ui->rightButton);

    //设置按钮为checkable
    ui->leftButton->setCheckable(true);
    ui->rightButton->setCheckable(true);

    //设置按钮互斥
    buttonGroup->setExclusive(true);

    //tableWidget = new QTableWidget(this);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setColumnCount(5);
}

GaiNian::~GaiNian()
{
    delete ui;
}


void GaiNian::on_radioButton_clicked()
{
    ui->lineEdit->setEnabled(false);
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    ui->label_4->setEnabled(false);
    ui->label_5->setEnabled(false);
    ui->label_6->setEnabled(false);
}

void GaiNian::on_radioButton_2_clicked()
{
    ui->lineEdit->setEnabled(true);
    ui->leftButton->setEnabled(true);
    ui->rightButton->setEnabled(true);
    ui->label_4->setEnabled(true);
    ui->label_5->setEnabled(true);
    ui->label_6->setEnabled(true);
}

void GaiNian::on_editButton_clicked()
{
    SpokesDetail *spokesDetail = new SpokesDetail();
    spokesDetail->show();

}

void GaiNian::on_reDesignButton_clicked()
{
    ReDesign *reDesign = new ReDesign();
    reDesign->show();
}

// void GaiNian::on_editMaterial_clicked()
// {
//     Materials *material = new Materials();
//     material->show();
// }

void GaiNian::on_editMeshing_clicked()
{
    EditMeshing *editmeshing = new EditMeshing();
    editmeshing->show();
}

void GaiNian::on_confirmButton_clicked()
{
    this->close();
}

void GaiNian::on_cancelButton_clicked()
{
    this->close();
}

void GaiNian::on_addButton_clicked()
{
    //获取当前表格行数
    int currentRowCount = ui->tableWidget->rowCount();
    //在表格中插入行
    ui->tableWidget->insertRow(currentRowCount);

    QString textMingCheng = ui->lineEdit_3->text();
    QString textChiShu = ui->spinBox->text();
    QString textChiKuan = ui->lineEdit_5->text();
    //在新插入的行中添加内容
    QTableWidgetItem *item1 = new QTableWidgetItem("yes");
    QTableWidgetItem *item2 = new QTableWidgetItem(textMingCheng);
    QTableWidgetItem *item3 = new QTableWidgetItem(textChiShu);
    QTableWidgetItem *item4 = new QTableWidgetItem(textChiKuan);
    QTableWidgetItem *item5 = new QTableWidgetItem("集成");

    ui->tableWidget->setItem(currentRowCount-1, 0, item1);
    ui->tableWidget->setItem(currentRowCount-1, 1, item2);
    ui->tableWidget->setItem(currentRowCount-1, 2, item3);
    ui->tableWidget->setItem(currentRowCount-1, 3, item4);
    ui->tableWidget->setItem(currentRowCount-1, 4, item5);

}

void GaiNian::on_deleteButton_clicked()
{
    //设置选择模式为单选
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    //在表格中插入行
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}
