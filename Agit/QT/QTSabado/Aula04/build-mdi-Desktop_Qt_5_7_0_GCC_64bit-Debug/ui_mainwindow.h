/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo_Form1;
    QAction *actionNovo_WebForm;
    QAction *action;
    QAction *actionSair_2;
    QAction *actionCascata;
    QAction *actionLado_a_lado;
    QAction *actionModo_Janela;
    QAction *actionModo_Tabbed;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuJanela;
    QToolBar *mainToolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNovo_Form1 = new QAction(MainWindow);
        actionNovo_Form1->setObjectName(QStringLiteral("actionNovo_Form1"));
        actionNovo_WebForm = new QAction(MainWindow);
        actionNovo_WebForm->setObjectName(QStringLiteral("actionNovo_WebForm"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        actionSair_2 = new QAction(MainWindow);
        actionSair_2->setObjectName(QStringLiteral("actionSair_2"));
        actionCascata = new QAction(MainWindow);
        actionCascata->setObjectName(QStringLiteral("actionCascata"));
        actionLado_a_lado = new QAction(MainWindow);
        actionLado_a_lado->setObjectName(QStringLiteral("actionLado_a_lado"));
        actionModo_Janela = new QAction(MainWindow);
        actionModo_Janela->setObjectName(QStringLiteral("actionModo_Janela"));
        actionModo_Janela->setCheckable(true);
        actionModo_Tabbed = new QAction(MainWindow);
        actionModo_Tabbed->setObjectName(QStringLiteral("actionModo_Tabbed"));
        actionModo_Tabbed->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        verticalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuJanela = new QMenu(menuBar);
        menuJanela->setObjectName(QStringLiteral("menuJanela"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuJanela->menuAction());
        menuArquivo->addAction(actionNovo_Form1);
        menuArquivo->addAction(actionNovo_WebForm);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair_2);
        menuJanela->addAction(actionCascata);
        menuJanela->addAction(actionLado_a_lado);
        menuJanela->addSeparator();
        menuJanela->addAction(actionModo_Janela);
        menuJanela->addAction(actionModo_Tabbed);

        retranslateUi(MainWindow);
        QObject::connect(actionLado_a_lado, SIGNAL(triggered()), mdiArea, SLOT(tileSubWindows()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNovo_Form1->setText(QApplication::translate("MainWindow", "Novo Form1", 0));
        actionNovo_WebForm->setText(QApplication::translate("MainWindow", "Novo WebForm", 0));
        action->setText(QApplication::translate("MainWindow", "--", 0));
        actionSair_2->setText(QApplication::translate("MainWindow", "Sair", 0));
        actionCascata->setText(QApplication::translate("MainWindow", "Cascata", 0));
        actionLado_a_lado->setText(QApplication::translate("MainWindow", "Lado a lado", 0));
        actionModo_Janela->setText(QApplication::translate("MainWindow", "Modo Janela", 0));
        actionModo_Tabbed->setText(QApplication::translate("MainWindow", "Modo Tabbed", 0));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
        menuJanela->setTitle(QApplication::translate("MainWindow", "Janela", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
