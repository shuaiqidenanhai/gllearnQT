/********************************************************************************
** Form generated from reading UI file 'seven.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEVEN_H
#define UI_SEVEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seven
{
public:
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *seven)
    {
        if (seven->objectName().isEmpty())
            seven->setObjectName(QString::fromUtf8("seven"));
        seven->resize(715, 648);
        groupBox = new QGroupBox(seven);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 100, 561, 331));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 70, 251, 19));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 140, 72, 15));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 210, 151, 16));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 150, 113, 21));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(400, 160, 87, 22));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 220, 113, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 240, 72, 15));
        pushButton = new QPushButton(seven);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 520, 93, 28));
        pushButton_2 = new QPushButton(seven);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 520, 93, 28));
        pushButton_3 = new QPushButton(seven);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 520, 93, 28));
        pushButton_4 = new QPushButton(seven);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(540, 520, 93, 28));

        retranslateUi(seven);

        QMetaObject::connectSlotsByName(seven);
    } // setupUi

    void retranslateUi(QWidget *seven)
    {
        seven->setWindowTitle(QCoreApplication::translate("seven", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("seven", "ISO/DIN\346\226\271\346\263\225B\344\270\216AGMA\346\263\225\345\210\206\346\236\220\346\226\271\346\263\225", nullptr));
        checkBox->setText(QCoreApplication::translate("seven", "\346\240\271\346\215\256\350\264\250\351\207\217\347\255\211\347\272\247\344\274\260\347\256\227\345\237\272\350\212\202\350\257\257\345\267\256", nullptr));
        label->setText(QCoreApplication::translate("seven", "\345\237\272\350\212\202\350\257\257\345\267\256", nullptr));
        label_2->setText(QCoreApplication::translate("seven", "\345\210\266\351\200\240\345\274\225\350\265\267\347\232\204\345\225\256\345\220\210\351\224\231\344\275\215", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("seven", "um", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("seven", "mm", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("seven", "in", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("seven", "m", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("seven", "dm", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("seven", "m", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("seven", "feet", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("seven", "ft", nullptr));

        label_3->setText(QCoreApplication::translate("seven", "um", nullptr));
        pushButton->setText(QCoreApplication::translate("seven", "\345\217\226\346\266\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("seven", "\344\270\212\344\270\200\344\270\252", nullptr));
        pushButton_3->setText(QCoreApplication::translate("seven", "\344\270\213\344\270\200\344\270\252", nullptr));
        pushButton_4->setText(QCoreApplication::translate("seven", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seven: public Ui_seven {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEVEN_H
