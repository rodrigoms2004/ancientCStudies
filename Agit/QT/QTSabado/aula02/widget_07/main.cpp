#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QDateTimeEdit>
#include <QGridLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Cria um "Widget" que será a janela principal
    QWidget *mainWindow = new QWidget( 0 ); // zero
                                // o widget não tem parent

    mainWindow->setWindowTitle(QObject::tr("Widget 7"));


    QPushButton *btnAbout = new QPushButton(QObject::tr("About QT"),0);
    QPushButton *btnQuit = new QPushButton(QObject::tr("Quit"),0);

    // signal e slots para os botões
    QObject::connect( btnAbout, SIGNAL( clicked() ),
                      &app, SLOT( aboutQt() ) );
    QObject::connect( btnQuit, SIGNAL( clicked() ),
                      &app, SLOT( quit() ) );

    // cria as labels
    QLabel *labelAbout = new QLabel(QObject::tr("O botão ao lado exibirá um diálogo \n com informações sobre QT."), 0);
    QLabel *labelQuit = new QLabel(QObject::tr("O botão ao lado encerrará esta aplicação."), 0);


    // Adiciona QDateTimeEdit
    QDateTimeEdit *pDateEdit1 = new QDateTimeEdit(QDate::currentDate());
    QDateTimeEdit *pDateEdit2 = new QDateTimeEdit(QDate::currentDate());
    QDateTimeEdit *pDateEdit3 = new QDateTimeEdit(QDate::currentDate());
    QDateTimeEdit *pDateEdit4 = new QDateTimeEdit(QDate::currentDate());
    QDateTimeEdit *pDateEdit5 = new QDateTimeEdit(QDate::currentDate());

    // somente para leitura
    pDateEdit1->setReadOnly(true);
    pDateEdit2->setReadOnly(true);
    pDateEdit3->setReadOnly(true);
    pDateEdit4->setReadOnly(true);
    pDateEdit5->setReadOnly(true);


    // cria o layout
    QGridLayout *glayMain = new QGridLayout;
    glayMain->addWidget(btnAbout, 0, 0);    // linha, coluna
    glayMain->addWidget(labelAbout, 0, 1);
    glayMain->addWidget(btnQuit, 1, 0);
    glayMain->addWidget(labelQuit, 1, 1);

    // define o valor de stretch para cada coluna
    //glayMain->setColumnStretch(0, 1);
    //glayMain->setColumnStretch(1, 3); // pode ocupar o triplo

    // usando argumento columnSpan para o Widget ocupar alinha toda
    glayMain->addWidget(pDateEdit1, 2, 0, 1, 2);    // linha, coluna, rowSpan, columnSpan

    // alinhamento horizontal
    glayMain->addWidget(pDateEdit2, 3, 0, 1, 2, Qt::AlignHCenter);

    // alinhamento a direita
    glayMain->addWidget(pDateEdit3, 4, 0, 1, 2, Qt::AlignRight);

    // alinhamento a esquerda
    glayMain->addWidget(pDateEdit4, 5, 0, 1, 2, Qt::AlignLeft);

    // podemos obter o mesmo efeito do último exemplo("AlignLeft")
    // simplesmente inserindo o "DateEdit"
    // na coluna zero da sua linha:
    glayMain->addWidget(pDateEdit5, 6, 0); // linha, coluna

    mainWindow->setLayout(glayMain);

    mainWindow->show();

    app.exec();
    return 0;
}
