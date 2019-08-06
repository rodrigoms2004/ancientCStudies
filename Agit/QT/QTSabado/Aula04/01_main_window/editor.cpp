#include "editor.h"
#include "ui_editor.h"

#include <qcombobox.h>

Editor::Editor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/dwr_logo.png"));
    //ui->menu_Arquivo->addMenu("Teste");
    QMenu *menuAjuda = ui->menuBar->addMenu("Ajuda");
    QAction *actionSobre = menuAjuda->addAction("Sobre");
    connect(actionSobre,SIGNAL(triggered(bool)),this,SLOT(on_actionSobre()));

    QComboBox *combo = new QComboBox;
    combo->addItem("Item1");
    combo->addItem("Item2");
    combo->addItem("Item3");

    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(combo);
    ui->statusBar->showMessage("Ready");

    connect(combo, SIGNAL(currentIndexChanged(int)), this, SLOT(on_actionSobre()));
}

Editor::~Editor()
{
    delete ui;
}

void Editor::on_actionSobre()
{
    qApp->aboutQt();
}

