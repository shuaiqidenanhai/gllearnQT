/********************************************************************************
** Form generated from reading UI file 'newpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPAGE_H
#define UI_NEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewPage
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit_1;
    QLabel *label;
    QLabel *label_4;
    QPushButton *confirmButton;
    QLineEdit *lineEdit_2;
    QPushButton *cancelButton;
    QTextEdit *textEdit;
    QLabel *label_3;

    void setupUi(QWidget *NewPage)
    {
        if (NewPage->objectName().isEmpty())
            NewPage->setObjectName(QString::fromUtf8("NewPage"));
        NewPage->resize(529, 403);
        label_2 = new QLabel(NewPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 72, 15));
        lineEdit_1 = new QLineEdit(NewPage);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(150, 70, 321, 21));
        label = new QLabel(NewPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(20, 10, 72, 15));
        label_4 = new QLabel(NewPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 130, 72, 15));
        confirmButton = new QPushButton(NewPage);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(190, 340, 93, 28));
        lineEdit_2 = new QLineEdit(NewPage);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 240, 321, 41));
        cancelButton = new QPushButton(NewPage);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(330, 340, 93, 28));
        textEdit = new QTextEdit(NewPage);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(150, 130, 321, 87));
        label_3 = new QLabel(NewPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 240, 81, 41));

        retranslateUi(NewPage);

        QMetaObject::connectSlotsByName(NewPage);
    } // setupUi

    void retranslateUi(QWidget *NewPage)
    {
        NewPage->setWindowTitle(QCoreApplication::translate("NewPage", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("NewPage", "\350\256\276\350\256\241\345\220\215\347\247\260\357\274\232", nullptr));
        lineEdit_1->setText(QCoreApplication::translate("NewPage", "\346\226\260\350\256\276\350\256\241", nullptr));
        label->setText(QCoreApplication::translate("NewPage", "\346\226\260\350\256\276\350\256\241", nullptr));
        label_4->setText(QCoreApplication::translate("NewPage", "\350\256\276\350\256\241\346\217\217\350\277\260\357\274\232", nullptr));
        confirmButton->setText(QCoreApplication::translate("NewPage", "\347\241\256\345\256\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("NewPage", "Administrator", nullptr));
        cancelButton->setText(QCoreApplication::translate("NewPage", "\345\217\226\346\266\210", nullptr));
        textEdit->setHtml(QCoreApplication::translate("NewPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("NewPage", "\344\275\234\350\200\205\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewPage: public Ui_NewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPAGE_H
