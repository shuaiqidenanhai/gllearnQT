/********************************************************************************
** Form generated from reading UI file 'gainian.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAINIAN_H
#define UI_GAINIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GaiNian
{
public:
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLineEdit *lineEdit_6;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_8;
    QGroupBox *groupBox_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_14;
    QLineEdit *lineEdit_3;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_5;
    QLabel *label_15;
    QPushButton *editButton;
    QCheckBox *checkBox;
    QComboBox *comboBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *copyButton;
    QPushButton *deleteButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *editMeshing;
    QPushButton *editMaterial;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *reDesignButton;
    QPushButton *pushButton_10;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *GaiNian)
    {
        if (GaiNian->objectName().isEmpty())
            GaiNian->setObjectName(QString::fromUtf8("GaiNian"));
        GaiNian->resize(935, 837);
        lineEdit_4 = new QLineEdit(GaiNian);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(590, 310, 113, 21));
        label_2 = new QLabel(GaiNian);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 81, 31));
        lineEdit_6 = new QLineEdit(GaiNian);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(590, 230, 113, 21));
        groupBox = new QGroupBox(GaiNian);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 180, 401, 231));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 40, 115, 19));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 80, 115, 19));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 130, 91, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 180, 191, 16));
        leftButton = new QPushButton(groupBox);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(170, 180, 93, 28));
        rightButton = new QPushButton(groupBox);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(290, 180, 93, 28));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 130, 113, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 130, 72, 15));
        scrollArea = new QScrollArea(GaiNian);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(160, 100, 291, 61));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 289, 59));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, -4, 291, 71));
        scrollArea->setWidget(scrollAreaWidgetContents);
        comboBox = new QComboBox(GaiNian);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(750, 230, 87, 22));
        comboBox_2 = new QComboBox(GaiNian);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(750, 310, 87, 22));
        lineEdit_2 = new QLineEdit(GaiNian);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 60, 301, 21));
        label_7 = new QLabel(GaiNian);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 100, 91, 31));
        label_9 = new QLabel(GaiNian);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(460, 300, 141, 41));
        label = new QLabel(GaiNian);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 91, 16));
        label_8 = new QLabel(GaiNian);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(460, 220, 141, 41));
        groupBox_2 = new QGroupBox(GaiNian);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(480, 410, 401, 241));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 141, 41));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 60, 141, 41));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 100, 141, 41));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 30, 113, 21));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(160, 70, 101, 22));
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 110, 113, 21));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 190, 141, 41));
        editButton = new QPushButton(groupBox_2);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(180, 190, 151, 28));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 160, 91, 19));
        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(300, 110, 87, 22));
        layoutWidget = new QWidget(GaiNian);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 610, 441, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        copyButton = new QPushButton(layoutWidget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));

        horizontalLayout->addWidget(copyButton);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        layoutWidget1 = new QWidget(GaiNian);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(149, 680, 311, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        editMeshing = new QPushButton(layoutWidget1);
        editMeshing->setObjectName(QString::fromUtf8("editMeshing"));

        horizontalLayout_2->addWidget(editMeshing);

        editMaterial = new QPushButton(layoutWidget1);
        editMaterial->setObjectName(QString::fromUtf8("editMaterial"));

        horizontalLayout_2->addWidget(editMaterial);

        layoutWidget2 = new QWidget(GaiNian);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(220, 740, 206, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        reDesignButton = new QPushButton(layoutWidget2);
        reDesignButton->setObjectName(QString::fromUtf8("reDesignButton"));

        horizontalLayout_3->addWidget(reDesignButton);

        pushButton_10 = new QPushButton(layoutWidget2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setEnabled(false);

        horizontalLayout_3->addWidget(pushButton_10);

        layoutWidget3 = new QWidget(GaiNian);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(570, 740, 194, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        confirmButton = new QPushButton(layoutWidget3);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));

        horizontalLayout_4->addWidget(confirmButton);

        cancelButton = new QPushButton(layoutWidget3);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_4->addWidget(cancelButton);

        tableWidget = new QTableWidget(GaiNian);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(25, 421, 441, 181));
        tableWidget->setShowGrid(false);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setVisible(false);

        retranslateUi(GaiNian);

        QMetaObject::connectSlotsByName(GaiNian);
    } // setupUi

    void retranslateUi(QWidget *GaiNian)
    {
        GaiNian->setWindowTitle(QCoreApplication::translate("GaiNian", "Form", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("GaiNian", "20.000", nullptr));
        label_2->setText(QCoreApplication::translate("GaiNian", "\351\275\277\350\275\256\345\211\257\345\220\215\347\247\260", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("GaiNian", "1000", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GaiNian", "\351\275\277\350\275\256\347\261\273\345\236\213", nullptr));
        radioButton->setText(QCoreApplication::translate("GaiNian", "\347\233\264\351\275\277", nullptr));
        radioButton_2->setText(QCoreApplication::translate("GaiNian", "\346\226\234\351\275\277\350\275\256", nullptr));
        label_4->setText(QCoreApplication::translate("GaiNian", "\345\217\202\350\200\203\350\236\272\346\227\213\350\247\222", nullptr));
        label_5->setText(QCoreApplication::translate("GaiNian", "\350\236\272\346\227\213\346\226\271\345\220\221", nullptr));
        leftButton->setText(QCoreApplication::translate("GaiNian", "\345\267\246", nullptr));
        rightButton->setText(QCoreApplication::translate("GaiNian", "\345\217\263", nullptr));
        label_6->setText(QCoreApplication::translate("GaiNian", "deg", nullptr));
        textEdit->setHtml(QCoreApplication::translate("GaiNian", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("GaiNian", "mm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("GaiNian", "inch-1", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("GaiNian", "deg", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("GaiNian", "rad", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("GaiNian", "mrad", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("GaiNian", "rev", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("GaiNian", "grad", nullptr));

        lineEdit_2->setText(QCoreApplication::translate("GaiNian", "\351\275\277\350\275\256\347\273\2041", nullptr));
        label_7->setText(QCoreApplication::translate("GaiNian", "\346\217\217\350\277\260", nullptr));
        label_9->setText(QCoreApplication::translate("GaiNian", "\345\217\202\350\200\203\346\263\225\345\220\221\345\216\213\345\212\233\350\247\222", nullptr));
        label->setText(QCoreApplication::translate("GaiNian", "\346\246\202\345\277\265\351\275\277\350\275\256\347\273\204", nullptr));
        label_8->setText(QCoreApplication::translate("GaiNian", "\346\263\225\345\220\221\346\250\241\346\225\260", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GaiNian", "\351\275\277\350\275\256\347\273\206\350\212\202", nullptr));
        label_11->setText(QCoreApplication::translate("GaiNian", "\351\275\277\350\275\256\345\220\215\347\247\260\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("GaiNian", "\351\275\277\346\225\260\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("GaiNian", "\351\275\277\345\256\275\357\274\232", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("GaiNian", "\345\260\217\351\275\277\350\275\256", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("GaiNian", "5.000", nullptr));
        label_15->setText(QCoreApplication::translate("GaiNian", "\350\275\256\350\276\220\347\273\206\350\212\202", nullptr));
        editButton->setText(QCoreApplication::translate("GaiNian", "\347\274\226\350\276\221\351\275\277\350\275\256\350\275\256\350\276\220\347\273\206\350\212\202", nullptr));
        checkBox->setText(QCoreApplication::translate("GaiNian", "\345\206\205\351\275\277\350\275\256", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("GaiNian", "mm", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("GaiNian", "cm", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("GaiNian", "dm", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("GaiNian", "ft", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("GaiNian", "feet", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("GaiNian", "yd", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("GaiNian", "in", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("GaiNian", "inch", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("GaiNian", "m", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("GaiNian", "metre", nullptr));

        addButton->setText(QCoreApplication::translate("GaiNian", "\346\267\273\345\212\240", nullptr));
        copyButton->setText(QCoreApplication::translate("GaiNian", "\345\244\215\345\210\266", nullptr));
        deleteButton->setText(QCoreApplication::translate("GaiNian", "\345\210\240\351\231\244", nullptr));
        editMeshing->setText(QCoreApplication::translate("GaiNian", "\347\274\226\350\276\221\351\275\277\350\275\256\345\225\256\345\220\210\344\270\255\345\277\203", nullptr));
        editMaterial->setText(QCoreApplication::translate("GaiNian", "\346\235\220\346\226\231..", nullptr));
        reDesignButton->setText(QCoreApplication::translate("GaiNian", "\345\206\215\350\256\276\350\256\241\351\275\277\350\275\256\347\273\204", nullptr));
        pushButton_10->setText(QCoreApplication::translate("GaiNian", "\350\241\214\346\230\237\351\275\277\350\275\256\350\256\276\350\256\241", nullptr));
        confirmButton->setText(QCoreApplication::translate("GaiNian", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("GaiNian", "\345\217\226\346\266\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GaiNian", "\345\267\262...", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GaiNian", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GaiNian", "\351\275\277\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GaiNian", "\351\275\277\345\256\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("GaiNian", "\350\275\256\350\276\220\347\261\273\345\236\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GaiNian: public Ui_GaiNian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAINIAN_H
