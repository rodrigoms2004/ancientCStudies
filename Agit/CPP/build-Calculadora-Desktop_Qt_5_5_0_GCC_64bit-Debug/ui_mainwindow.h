/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lnEdt1;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lnEdt2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lnEdtResultado;
    QWidget *widget3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushBtnDiv;
    QPushButton *pushBtnMult;
    QPushButton *pushBtnSub;
    QPushButton *pushBtnSoma;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(467, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 275, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lnEdt1 = new QLineEdit(widget);
        lnEdt1->setObjectName(QStringLiteral("lnEdt1"));

        horizontalLayout->addWidget(lnEdt1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 70, 277, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lnEdt2 = new QLineEdit(widget1);
        lnEdt2->setObjectName(QStringLiteral("lnEdt2"));

        horizontalLayout_2->addWidget(lnEdt2);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(30, 110, 223, 29));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lnEdtResultado = new QLineEdit(widget2);
        lnEdtResultado->setObjectName(QStringLiteral("lnEdtResultado"));

        horizontalLayout_3->addWidget(lnEdtResultado);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(360, 30, 101, 128));
        verticalLayout = new QVBoxLayout(widget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushBtnDiv = new QPushButton(widget3);
        pushBtnDiv->setObjectName(QStringLiteral("pushBtnDiv"));

        verticalLayout->addWidget(pushBtnDiv);

        pushBtnMult = new QPushButton(widget3);
        pushBtnMult->setObjectName(QStringLiteral("pushBtnMult"));

        verticalLayout->addWidget(pushBtnMult);

        pushBtnSub = new QPushButton(widget3);
        pushBtnSub->setObjectName(QStringLiteral("pushBtnSub"));

        verticalLayout->addWidget(pushBtnSub);

        pushBtnSoma = new QPushButton(widget3);
        pushBtnSoma->setObjectName(QStringLiteral("pushBtnSoma"));

        verticalLayout->addWidget(pushBtnSoma);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Primeiro Numero:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Segundo Numero:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Resultado", 0));
        pushBtnDiv->setText(QApplication::translate("MainWindow", "/", 0));
        pushBtnMult->setText(QApplication::translate("MainWindow", "*", 0));
        pushBtnSub->setText(QApplication::translate("MainWindow", "-", 0));
        pushBtnSoma->setText(QApplication::translate("MainWindow", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
