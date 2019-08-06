/********************************************************************************
** Form generated from reading UI file 'form1.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM1_H
#define UI_FORM1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_form1
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *form1)
    {
        if (form1->objectName().isEmpty())
            form1->setObjectName(QStringLiteral("form1"));
        form1->resize(400, 300);
        verticalLayout = new QVBoxLayout(form1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(form1);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(form1);

        QMetaObject::connectSlotsByName(form1);
    } // setupUi

    void retranslateUi(QDialog *form1)
    {
        form1->setWindowTitle(QApplication::translate("form1", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class form1: public Ui_form1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM1_H
