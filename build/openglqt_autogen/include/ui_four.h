/********************************************************************************
** Form generated from reading UI file 'four.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOUR_H
#define UI_FOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_four
{
public:
    QGroupBox *groupBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *four)
    {
        if (four->objectName().isEmpty())
            four->setObjectName(QString::fromUtf8("four"));
        four->resize(854, 769);
        groupBox = new QGroupBox(four);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(90, 70, 481, 291));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(-1, 20, 481, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 479, 269));
        scrollArea->setWidget(scrollAreaWidgetContents);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 16, 481, 281));
        comboBox = new QComboBox(four);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 420, 87, 22));
        pushButton = new QPushButton(four);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 420, 93, 28));
        checkBox = new QCheckBox(four);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(480, 430, 351, 19));
        pushButton_2 = new QPushButton(four);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 530, 93, 28));
        pushButton_3 = new QPushButton(four);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 530, 93, 28));
        pushButton_4 = new QPushButton(four);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(520, 530, 93, 28));
        pushButton_5 = new QPushButton(four);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(650, 530, 93, 28));

        retranslateUi(four);

        QMetaObject::connectSlotsByName(four);
    } // setupUi

    void retranslateUi(QWidget *four)
    {
        four->setWindowTitle(QCoreApplication::translate("four", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("four", "\346\211\200\351\200\211\346\235\220\346\226\231", nullptr));
        textEdit->setHtml(QCoreApplication::translate("four", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">\346\234\252\345\256\232\344\271\211</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("four", "\345\260\217\351\275\277\350\275\256", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("four", "\345\244\247\351\275\277\350\275\256", nullptr));

        pushButton->setText(QCoreApplication::translate("four", "\351\200\211\346\213\251\346\235\220\346\226\231", nullptr));
        checkBox->setText(QCoreApplication::translate("four", "\344\277\235\346\214\201\346\211\200\346\211\200\346\234\211\351\275\277\350\275\256\346\235\220\346\226\231\344\270\200\350\207\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("four", "\345\217\226\346\266\210", nullptr));
        pushButton_3->setText(QCoreApplication::translate("four", "\344\270\212\344\270\200\344\270\252", nullptr));
        pushButton_4->setText(QCoreApplication::translate("four", "\344\270\213\344\270\200\344\270\252", nullptr));
        pushButton_5->setText(QCoreApplication::translate("four", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class four: public Ui_four {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOUR_H
