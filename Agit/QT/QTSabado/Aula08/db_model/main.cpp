#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <iostream>
#include <QSqlError>


void show_registers(QSqlTableModel* model) {
    // percorrendo dados com indices para grandes volumes de dados
    int idIndex = model->record().indexOf("id");
    int nomeIndex = model->record().indexOf("nome");
    int cidadeIndex = model->record().indexOf("cidade");
    for (int i = 0; i < model->rowCount(); ++i) {
        QSqlRecord record = model->record(i);
        int id = record.value(idIndex).toInt();
        QString nome = record.value(nomeIndex).toString();
        QString cidade = record.value(cidadeIndex).toString();
        std::cerr << id << " - " << qPrintable(nome) << " - " << cidade.toStdString() << std::endl;
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("db_POS");
    db.setHostName("172.16.128.128");
    db.setUserName("user_pos");
    db.setPassword("user_pospass");

    QSqlQuery query;
    QString str;

    QSqlTableModel model;
    model.setTable("alunos");

    model.select();


    // inserção
    /*
    int row = 0;
    model.insertRows(row, 1);
    model.setData(model.index(row, 1),"Rodrigo");
    model.setData(model.index(row, 2),"São Bernardo");
    model.submitAll();
*/
    //show_registers(&model);

    // update
   /*
    model.setFilter("id = 8");
    model.select();
    if (model.rowCount() == 1) {
        QSqlRecord record = model.record(0);
        record.setValue("nome", "Yris");
        record.setValue("cidade", "Diadema");
        model.setRecord(0,record);
        model.submitAll();
    }
*/
    //show_registers(&model);

    // delete

    model.setFilter("id > 9");
    model.select();
    if (model.rowCount() > 0) {
        //std::cerr << "teste";
        bool result = model.removeRows(0,model.rowCount());
        std::cerr << result << std::endl;
        std::cerr << "Erro: " << model.lastError().text().toStdString() << std::endl;
        //model.removeRows(0,1);
        model.submitAll();
    }


    show_registers(&model);


   return a.exec();
}

