#include <QCoreApplication>
#include <QSqlDatabase>
#include <iostream>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>

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

    if (!db.open()) {
        std::cerr << "Erro ao conectar";
    }

    str = "DROP TABLE alunos";
    if (!query.exec(str)) {
        std::cerr << "Não foi possivel excluir a tabela";
    }

    str = "CREATE TABLE alunos (id INTEGER KEY AUTO_INCREMENT, nome VARCHAR(250), cidade VARCHAR(40), PRIMARY KEY(id))";
    if (!query.exec(str)) {
        std::cerr << "Não foi possivel excluir a tabela";
    }

    str = "SELECT id, nome FROM alunos ORDER BY nome";
    if (!query.exec(str)) {
        std::cerr << "exec() ";
        std::cerr << query.lastError().text().toStdString();
        std::cout << '\n';

    }

    while (query.next()) {
        std::cout << query.value(0).toInt();
        std::cout << query.value(1).toString().toStdString();
        std::cout << '\n';
    }


    db.close();


    return a.exec();
}
