/********************************************************************************
** Form generated from reading UI file 'spokesdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPOKESDETAIL_H
#define UI_SPOKESDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpokesDetail
{
public:
    QPushButton *confirmButton;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_15;
    QPushButton *cancelButton;
    QCheckBox *checkBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QComboBox *comboBox_2;

    void setupUi(QWidget *SpokesDetail)
    {
        if (SpokesDetail->objectName().isEmpty())
            SpokesDetail->setObjectName(QString::fromUtf8("SpokesDetail"));
        SpokesDetail->resize(669, 472);
        confirmButton = new QPushButton(SpokesDetail);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(470, 430, 93, 28));
        label = new QLabel(SpokesDetail);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 72, 15));
        layoutWidget = new QWidget(SpokesDetail);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 130, 421, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_8 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setScaledContents(true);

        horizontalLayout_2->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_5->addWidget(label_13);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);

        horizontalSpacer_5 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setEnabled(true);

        horizontalLayout_6->addWidget(label_14);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_7->addWidget(lineEdit_7);

        horizontalSpacer_7 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_7->addWidget(label_15);


        verticalLayout->addLayout(horizontalLayout_7);

        cancelButton = new QPushButton(SpokesDetail);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(570, 430, 93, 28));
        checkBox = new QCheckBox(SpokesDetail);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(490, 250, 131, 19));
        widget = new QWidget(SpokesDetail);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 80, 271, 23));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_8->addWidget(comboBox_2);


        retranslateUi(SpokesDetail);

        QMetaObject::connectSlotsByName(SpokesDetail);
    } // setupUi

    void retranslateUi(QWidget *SpokesDetail)
    {
        SpokesDetail->setWindowTitle(QCoreApplication::translate("SpokesDetail", "Form", nullptr));
        confirmButton->setText(QCoreApplication::translate("SpokesDetail", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("SpokesDetail", "\350\275\256\350\276\220\347\273\206\350\212\202\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("SpokesDetail", "\350\275\256\347\274\230\345\244\226\345\276\204\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SpokesDetail", "mm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SpokesDetail", "cm", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("SpokesDetail", "dm", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("SpokesDetail", "ft", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("SpokesDetail", "feet", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("SpokesDetail", "in", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("SpokesDetail", "inch", nullptr));

        label_4->setText(QCoreApplication::translate("SpokesDetail", "\350\275\256\347\274\230\345\206\205\345\276\204\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("SpokesDetail", "mm", nullptr));
        label_5->setText(QCoreApplication::translate("SpokesDetail", "\350\275\256\347\274\230\345\256\275\345\272\246\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("SpokesDetail", "mm", nullptr));
        label_6->setText(QCoreApplication::translate("SpokesDetail", "\350\205\271\346\235\277\345\256\275\345\272\246\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("SpokesDetail", "mm", nullptr));
        label_7->setText(QCoreApplication::translate("SpokesDetail", "\350\275\256\346\257\202\345\244\226\345\276\204\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("SpokesDetail", "mm", nullptr));
        label_8->setText(QCoreApplication::translate("SpokesDetail", "\350\275\256\346\257\202\345\206\205\345\276\204\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("SpokesDetail", "mm", nullptr));
        label_9->setText(QCoreApplication::translate("SpokesDetail", "\350\275\256\346\257\202\345\256\275\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("SpokesDetail", "mm", nullptr));
        cancelButton->setText(QCoreApplication::translate("SpokesDetail", "\345\217\226\346\266\210", nullptr));
        checkBox->setText(QCoreApplication::translate("SpokesDetail", "\345\222\214\351\275\277\345\256\275\347\233\270\345\220\214", nullptr));
        label_2->setText(QCoreApplication::translate("SpokesDetail", "\351\275\277\350\275\256\350\275\256\350\276\220\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("SpokesDetail", "\347\264\247\345\233\272\357\274\210\344\270\216\350\275\264\351\233\206\346\210\220\357\274\211", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("SpokesDetail", "\347\256\200\345\215\225\346\224\257\346\222\221\357\274\210\346\227\240\350\276\220\346\235\277\357\274\211", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("SpokesDetail", "\345\257\271\347\247\260\346\224\257\346\222\221", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("SpokesDetail", "\346\240\207\345\207\206\351\224\245\351\275\277\350\275\256", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("SpokesDetail", "\351\235\236\345\257\271\347\247\260\346\224\257\346\222\221", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SpokesDetail: public Ui_SpokesDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPOKESDETAIL_H
