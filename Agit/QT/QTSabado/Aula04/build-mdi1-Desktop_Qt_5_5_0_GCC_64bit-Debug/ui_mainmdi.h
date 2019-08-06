/********************************************************************************
** Form generated from reading UI file 'mainmdi.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMDI_H
#define UI_MAINMDI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMDI
{
public:
    QAction *action_Novo_form1;
    QAction *action_Cascata;
    QAction *action_Lado_a_lado;
    QAction *actionNovo_WebBrowser;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu_Arquivo;
    QMenu *menu_Janelas;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainMDI)
    {
        if (MainMDI->objectName().isEmpty())
            MainMDI->setObjectName(QStringLiteral("MainMDI"));
        MainMDI->resize(400, 300);
        action_Novo_form1 = new QAction(MainMDI);
        action_Novo_form1->setObjectName(QStringLiteral("action_Novo_form1"));
        action_Cascata = new QAction(MainMDI);
        action_Cascata->setObjectName(QStringLiteral("action_Cascata"));
        action_Lado_a_lado = new QAction(MainMDI);
        action_Lado_a_lado->setObjectName(QStringLiteral("action_Lado_a_lado"));
        actionNovo_WebBrowser = new QAction(MainMDI);
        actionNovo_WebBrowser->setObjectName(QStringLiteral("actionNovo_WebBrowser"));
        centralWidget = new QWidget(MainMDI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        horizontalLayout->addWidget(mdiArea);

        MainMDI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainMDI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menu_Arquivo = new QMenu(menuBar);
        menu_Arquivo->setObjectName(QStringLiteral("menu_Arquivo"));
        menu_Janelas = new QMenu(menuBar);
        menu_Janelas->setObjectName(QStringLiteral("menu_Janelas"));
        MainMDI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainMDI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainMDI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainMDI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainMDI->setStatusBar(statusBar);

        menuBar->addAction(menu_Arquivo->menuAction());
        menuBar->addAction(menu_Janelas->menuAction());
        menu_Arquivo->addAction(action_Novo_form1);
        menu_Arquivo->addAction(actionNovo_WebBrowser);
        menu_Janelas->addAction(action_Cascata);
        menu_Janelas->addAction(action_Lado_a_lado);

        retranslateUi(MainMDI);

        QMetaObject::connectSlotsByName(MainMDI);
    } // setupUi

    void retranslateUi(QMainWindow *MainMDI)
    {
        MainMDI->setWindowTitle(QApplication::translate("MainMDI", "MainMDI", 0));
        action_Novo_form1->setText(QApplication::translate("MainMDI", "&Novo form1", 0));
        action_Cascata->setText(QApplication::translate("MainMDI", "&Cascata", 0));
        action_Lado_a_lado->setText(QApplication::translate("MainMDI", "&Lado a lado", 0));
        actionNovo_WebBrowser->setText(QApplication::translate("MainMDI", "Novo &WebBrowser", 0));
        menu_Arquivo->setTitle(QApplication::translate("MainMDI", "&Arquivo", 0));
        menu_Janelas->setTitle(QApplication::translate("MainMDI", "&Janelas", 0));
    } // retranslateUi

};

namespace Ui {
    class MainMDI: public Ui_MainMDI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMDI_H
