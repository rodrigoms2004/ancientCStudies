#include "widget.h"
#include "ui_widget.h"
#include "QSplitter"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QStringList"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    qList1 = new QListWidget;
    qList1->addItem(new QListWidgetItem("Item 1"));
    qList1->addItem(new QListWidgetItem("Item 2"));

    qTree1 = new QTreeWidget;
    qTree1->setHeaderLabel("Items");
    QTreeWidgetItem *item = new QTreeWidgetItem;
    item->setText(0, "item1");
    qTree1->addTopLevelItem(item);
    QTreeWidgetItem *subItem = new QTreeWidgetItem(item);
    subItem->setText(0, "Subitem 1");
    QTreeWidgetItem *subItem2 = new QTreeWidgetItem(subItem);
    subItem2->setText(0, "Subitem 2");


    qTable1->setHorizontalHeaderLabels(
                QStringList()
                    << "Coluna 1"
                    << "Coluna 2"
                );

    qTable1->verticalHeader()->hide();


    //QTableWidgetItem *itemTable = new QTableWidgetItem();
    //qTable1->setItem(0, 1, itemTable);



    qLine1 = new QLineEdit;
    qLine1->setText("Item 1");

    QHBoxLayout *layout = new QHBoxLayout(this);

    QSplitter *splitter = new QSplitter();
    layout->addWidget(splitter);

    splitter->addWidget(qList1);
    splitter->addWidget(qTable1);
    splitter->addWidget(qTree1);
    //splitter->addWidget(qLine1);

    splitter->setCollapsible(0, false);
    splitter->setCollapsible(1, false);
    splitter->setCollapsible(2, false);
    //splitter->setCollapsible(3, false);


    //this->setLayout(layout);

}

Widget::~Widget()
{
    delete ui;
}


