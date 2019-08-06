#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    qStringListModel = new QStringListModel;
    //qStringList = new QStringList;

    qStringList <<"Rodrigo"<<"Yris"<<"Suely"<<"Sidney";
    //qStringListModel->setStringList(*(this->qStringList)); // necessário deferenciar, para obter o endereço
    qStringListModel->setStringList(qStringList);
    qStringListModel->sort(0);


    ui->listView->setModel(qStringListModel);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int row = ui->listView->currentIndex().row(); // obtém indice atual da listview

    if (!ui->listView->currentIndex().isValid()) {
        row = 0;
    }

    qStringListModel->insertRow(row);   // informa ao model
    QModelIndex index = qStringListModel->index(row);   // cria uma QModelIndex para responder ao listView
    ui->listView->setCurrentIndex(index); // define a nova linha como linha atual
    ui->listView->edit(index);


}

void Widget::on_pushButton_2_clicked()
{
    qStringListModel->removeRow(ui->listView->currentIndex().row());
}
