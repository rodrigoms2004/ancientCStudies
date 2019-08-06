/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QAction *action_Novo;
    QAction *actionSair;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_Arquivo;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName(QStringLiteral("Editor"));
        Editor->resize(400, 300);
        action_Novo = new QAction(Editor);
        action_Novo->setObjectName(QStringLiteral("action_Novo"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../../../Dropbox/icons/55.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Novo->setIcon(icon);
        actionSair = new QAction(Editor);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        centralWidget = new QWidget(Editor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(textEdit);

        Editor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Editor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menu_Arquivo = new QMenu(menuBar);
        menu_Arquivo->setObjectName(QStringLiteral("menu_Arquivo"));
        Editor->setMenuBar(menuBar);
        statusBar = new QStatusBar(Editor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Editor->setStatusBar(statusBar);
        toolBar = new QToolBar(Editor);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Editor->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_Arquivo->menuAction());
        menu_Arquivo->addAction(action_Novo);
        menu_Arquivo->addSeparator();
        menu_Arquivo->addAction(actionSair);
        toolBar->addAction(action_Novo);

        retranslateUi(Editor);

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QMainWindow *Editor)
    {
        Editor->setWindowTitle(QApplication::translate("Editor", "PSOL_Vim", 0));
        action_Novo->setText(QApplication::translate("Editor", "&Novo", 0));
        action_Novo->setShortcut(QApplication::translate("Editor", "Ctrl+N", 0));
        actionSair->setText(QApplication::translate("Editor", "&Sair", 0));
        menu_Arquivo->setTitle(QApplication::translate("Editor", "&Arquivo", 0));
        toolBar->setWindowTitle(QApplication::translate("Editor", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
