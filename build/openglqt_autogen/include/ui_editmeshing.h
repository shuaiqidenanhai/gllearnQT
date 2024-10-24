/********************************************************************************
** Form generated from reading UI file 'editmeshing.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMESHING_H
#define UI_EDITMESHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditMeshing
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *addButton;
    QPushButton *replaceButton;
    QPushButton *deleteButton;
    QPushButton *setButton;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *EditMeshing)
    {
        if (EditMeshing->objectName().isEmpty())
            EditMeshing->setObjectName(QString::fromUtf8("EditMeshing"));
        EditMeshing->resize(643, 585);
        frame = new QFrame(EditMeshing);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 320, 611, 201));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 72, 15));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 30, 72, 15));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 60, 72, 15));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 100, 141, 19));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(41, 160, 91, 20));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(140, 160, 113, 21));
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);
        comboBox->setGeometry(QRect(270, 160, 87, 22));
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(480, 20, 93, 28));
        replaceButton = new QPushButton(frame);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(480, 90, 93, 28));
        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(480, 160, 93, 28));
        setButton = new QPushButton(frame);
        setButton->setObjectName(QString::fromUtf8("setButton"));
        setButton->setEnabled(false);
        setButton->setGeometry(QRect(370, 160, 93, 28));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(40, 60, 171, 22));
        comboBox_3 = new QComboBox(frame);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(280, 60, 181, 22));
        confirmButton = new QPushButton(EditMeshing);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(390, 550, 93, 28));
        cancelButton = new QPushButton(EditMeshing);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(510, 550, 93, 28));
        tableWidget = new QTableWidget(EditMeshing);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 110, 601, 192));
        tableWidget->setShowGrid(false);
        tableWidget->verticalHeader()->setVisible(false);

        retranslateUi(EditMeshing);

        QMetaObject::connectSlotsByName(EditMeshing);
    } // setupUi

    void retranslateUi(QWidget *EditMeshing)
    {
        EditMeshing->setWindowTitle(QCoreApplication::translate("EditMeshing", "Form", nullptr));
        label->setText(QCoreApplication::translate("EditMeshing", "\351\275\277\350\275\2561", nullptr));
        label_2->setText(QCoreApplication::translate("EditMeshing", "\351\275\277\350\275\2562", nullptr));
        label_3->setText(QCoreApplication::translate("EditMeshing", "-->", nullptr));
        checkBox->setText(QCoreApplication::translate("EditMeshing", "\344\275\277\347\224\250\345\233\272\345\256\232\344\270\255\345\277\203\350\267\235", nullptr));
        label_4->setText(QCoreApplication::translate("EditMeshing", "\345\225\256\345\220\210\344\270\255\345\277\203\350\267\235:", nullptr));
        lineEdit->setText(QCoreApplication::translate("EditMeshing", "40.000", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("EditMeshing", "mm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("EditMeshing", "m", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("EditMeshing", "cm", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("EditMeshing", "dm", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("EditMeshing", "inch", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("EditMeshing", "in", nullptr));

        addButton->setText(QCoreApplication::translate("EditMeshing", "\346\267\273\345\212\240", nullptr));
        replaceButton->setText(QCoreApplication::translate("EditMeshing", "\346\233\277\346\215\242", nullptr));
        deleteButton->setText(QCoreApplication::translate("EditMeshing", "\345\210\240\351\231\244", nullptr));
        setButton->setText(QCoreApplication::translate("EditMeshing", "\350\256\276\345\256\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("EditMeshing", "\345\260\217\351\275\277\350\275\2561", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("EditMeshing", "\345\244\247\351\275\277\350\275\2561", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("EditMeshing", "\345\244\247\351\275\277\350\275\2561", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("EditMeshing", "\345\260\217\351\275\277\350\275\2561", nullptr));

        confirmButton->setText(QCoreApplication::translate("EditMeshing", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("EditMeshing", "\345\217\226\346\266\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("EditMeshing", "\351\275\277\350\275\2561", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("EditMeshing", "\351\275\277\350\275\2562", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("EditMeshing", "\344\270\255\345\277\203\350\267\235(mm)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("EditMeshing", "\344\270\255\345\277\203\350\267\235\347\261\273\345\236\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditMeshing: public Ui_EditMeshing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMESHING_H
