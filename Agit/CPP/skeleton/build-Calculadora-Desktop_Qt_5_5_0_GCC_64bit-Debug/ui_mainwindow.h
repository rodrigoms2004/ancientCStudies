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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lnEdtOperacao;
    QLineEdit *lnEdtResultado;
    QPushButton *pshBtnClear;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pshBtn_7;
    QPushButton *pshBtn_8;
    QPushButton *pshBtn_9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pshBtn_4;
    QPushButton *pshBtn_5;
    QPushButton *pshBtn_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pshBtn_1;
    QPushButton *pshBtn_2;
    QPushButton *pshBtn_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pshBtnPonto;
    QPushButton *pshBtn_0;
    QPushButton *pshBtnCalcular;
    QVBoxLayout *verticalLayout;
    QPushButton *pshBtn_Div;
    QPushButton *pshBtn_Mult;
    QPushButton *pshBtn_Sub;
    QPushButton *pshBtn_Soma;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(484, 415);
        MainWindow->setMaximumSize(QSize(484, 415));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lnEdtOperacao = new QLineEdit(centralWidget);
        lnEdtOperacao->setObjectName(QStringLiteral("lnEdtOperacao"));
        lnEdtOperacao->setMinimumSize(QSize(61, 70));
        lnEdtOperacao->setMaximumSize(QSize(61, 70));
        QFont font;
        font.setPointSize(14);
        lnEdtOperacao->setFont(font);

        horizontalLayout_6->addWidget(lnEdtOperacao);

        lnEdtResultado = new QLineEdit(centralWidget);
        lnEdtResultado->setObjectName(QStringLiteral("lnEdtResultado"));
        lnEdtResultado->setMinimumSize(QSize(330, 70));
        lnEdtResultado->setFont(font);

        horizontalLayout_6->addWidget(lnEdtResultado);

        pshBtnClear = new QPushButton(centralWidget);
        pshBtnClear->setObjectName(QStringLiteral("pshBtnClear"));
        pshBtnClear->setMinimumSize(QSize(71, 70));

        horizontalLayout_6->addWidget(pshBtnClear);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 37, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pshBtn_7 = new QPushButton(centralWidget);
        pshBtn_7->setObjectName(QStringLiteral("pshBtn_7"));
        pshBtn_7->setMinimumSize(QSize(71, 61));

        horizontalLayout->addWidget(pshBtn_7);

        pshBtn_8 = new QPushButton(centralWidget);
        pshBtn_8->setObjectName(QStringLiteral("pshBtn_8"));
        pshBtn_8->setMinimumSize(QSize(71, 61));

        horizontalLayout->addWidget(pshBtn_8);

        pshBtn_9 = new QPushButton(centralWidget);
        pshBtn_9->setObjectName(QStringLiteral("pshBtn_9"));
        pshBtn_9->setMinimumSize(QSize(71, 61));

        horizontalLayout->addWidget(pshBtn_9);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pshBtn_4 = new QPushButton(centralWidget);
        pshBtn_4->setObjectName(QStringLiteral("pshBtn_4"));
        pshBtn_4->setMinimumSize(QSize(71, 61));

        horizontalLayout_2->addWidget(pshBtn_4);

        pshBtn_5 = new QPushButton(centralWidget);
        pshBtn_5->setObjectName(QStringLiteral("pshBtn_5"));
        pshBtn_5->setMinimumSize(QSize(71, 61));

        horizontalLayout_2->addWidget(pshBtn_5);

        pshBtn_6 = new QPushButton(centralWidget);
        pshBtn_6->setObjectName(QStringLiteral("pshBtn_6"));
        pshBtn_6->setMinimumSize(QSize(71, 61));

        horizontalLayout_2->addWidget(pshBtn_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pshBtn_1 = new QPushButton(centralWidget);
        pshBtn_1->setObjectName(QStringLiteral("pshBtn_1"));
        pshBtn_1->setMinimumSize(QSize(71, 61));

        horizontalLayout_3->addWidget(pshBtn_1);

        pshBtn_2 = new QPushButton(centralWidget);
        pshBtn_2->setObjectName(QStringLiteral("pshBtn_2"));
        pshBtn_2->setMinimumSize(QSize(71, 61));

        horizontalLayout_3->addWidget(pshBtn_2);

        pshBtn_3 = new QPushButton(centralWidget);
        pshBtn_3->setObjectName(QStringLiteral("pshBtn_3"));
        pshBtn_3->setMinimumSize(QSize(71, 61));

        horizontalLayout_3->addWidget(pshBtn_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pshBtnPonto = new QPushButton(centralWidget);
        pshBtnPonto->setObjectName(QStringLiteral("pshBtnPonto"));
        pshBtnPonto->setMinimumSize(QSize(71, 61));

        horizontalLayout_4->addWidget(pshBtnPonto);

        pshBtn_0 = new QPushButton(centralWidget);
        pshBtn_0->setObjectName(QStringLiteral("pshBtn_0"));
        pshBtn_0->setMinimumSize(QSize(71, 61));

        horizontalLayout_4->addWidget(pshBtn_0);

        pshBtnCalcular = new QPushButton(centralWidget);
        pshBtnCalcular->setObjectName(QStringLiteral("pshBtnCalcular"));
        pshBtnCalcular->setMinimumSize(QSize(71, 61));

        horizontalLayout_4->addWidget(pshBtnCalcular);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pshBtn_Div = new QPushButton(centralWidget);
        pshBtn_Div->setObjectName(QStringLiteral("pshBtn_Div"));
        pshBtn_Div->setMinimumSize(QSize(71, 61));
        pshBtn_Div->setMaximumSize(QSize(182, 61));

        verticalLayout->addWidget(pshBtn_Div);

        pshBtn_Mult = new QPushButton(centralWidget);
        pshBtn_Mult->setObjectName(QStringLiteral("pshBtn_Mult"));
        pshBtn_Mult->setMinimumSize(QSize(71, 61));
        pshBtn_Mult->setMaximumSize(QSize(182, 61));

        verticalLayout->addWidget(pshBtn_Mult);

        pshBtn_Sub = new QPushButton(centralWidget);
        pshBtn_Sub->setObjectName(QStringLiteral("pshBtn_Sub"));
        pshBtn_Sub->setMinimumSize(QSize(71, 61));
        pshBtn_Sub->setMaximumSize(QSize(182, 61));

        verticalLayout->addWidget(pshBtn_Sub);

        pshBtn_Soma = new QPushButton(centralWidget);
        pshBtn_Soma->setObjectName(QStringLiteral("pshBtn_Soma"));
        pshBtn_Soma->setMinimumSize(QSize(71, 61));
        pshBtn_Soma->setMaximumSize(QSize(182, 61));

        verticalLayout->addWidget(pshBtn_Soma);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculadora", 0));
        pshBtnClear->setText(QApplication::translate("MainWindow", "CLEAR", 0));
        pshBtn_7->setText(QApplication::translate("MainWindow", "7", 0));
        pshBtn_8->setText(QApplication::translate("MainWindow", "8", 0));
        pshBtn_9->setText(QApplication::translate("MainWindow", "9", 0));
        pshBtn_4->setText(QApplication::translate("MainWindow", "4", 0));
        pshBtn_5->setText(QApplication::translate("MainWindow", "5", 0));
        pshBtn_6->setText(QApplication::translate("MainWindow", "6", 0));
        pshBtn_1->setText(QApplication::translate("MainWindow", "1", 0));
        pshBtn_2->setText(QApplication::translate("MainWindow", "2", 0));
        pshBtn_3->setText(QApplication::translate("MainWindow", "3", 0));
        pshBtnPonto->setText(QApplication::translate("MainWindow", ".", 0));
        pshBtn_0->setText(QApplication::translate("MainWindow", "0", 0));
        pshBtnCalcular->setText(QApplication::translate("MainWindow", "=", 0));
        pshBtn_Div->setText(QApplication::translate("MainWindow", "/", 0));
        pshBtn_Mult->setText(QApplication::translate("MainWindow", "*", 0));
        pshBtn_Sub->setText(QApplication::translate("MainWindow", "-", 0));
        pshBtn_Soma->setText(QApplication::translate("MainWindow", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
