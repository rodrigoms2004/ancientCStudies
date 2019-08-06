#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QDateTimeEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Cria um "Widget" que será a janela principal
    QWidget *mainWindow = new QWidget( 0 ); // zero
                                // o widget não tem parent

    mainWindow->setWindowTitle(QObject::tr("Widget 5-6"));

    // botões sem pais
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

    // cria dois layouts horizontais para os botões e labels
    QHBoxLayout *h_layout_About = new QHBoxLayout;
    QHBoxLayout *h_layout_Quit = new QHBoxLayout;

    // Cria um layout horizontal para cada QDateTimeEdit
    QHBoxLayout *h_qDate1 = new QHBoxLayout();
    QHBoxLayout *h_qDate2 = new QHBoxLayout();
    QHBoxLayout *h_qDate3 = new QHBoxLayout();
    QHBoxLayout *h_qDate4 = new QHBoxLayout();
    QHBoxLayout *h_qDate5 = new QHBoxLayout();

    // Associa layout a QDateTimeEdit
    //h_qDate1->addStretch();
    h_qDate1->addWidget(pDateEdit1);

    h_qDate2->addStretch();
    h_qDate2->addWidget(pDateEdit2);
    h_qDate2->addStretch();

    h_qDate3->addStretch();
    h_qDate3->addWidget(pDateEdit3);

    h_qDate4->addWidget(pDateEdit4);
    h_qDate4->addStretch();

    h_qDate5->addWidget(pDateEdit5);
    h_qDate5->addStretch();

    // Associa layout horizontal aos botões e labels
    h_layout_About->addWidget(btnAbout, 1);     // 1/4
    h_layout_About->addWidget(labelAbout, 3);   // 3/4
    h_layout_Quit->addWidget(btnQuit, 1);       // 1/4
    h_layout_Quit->addWidget(labelQuit, 3);     // 3/4

    // cria layout vertical
    QVBoxLayout *v_layout = new QVBoxLayout;



    // transforma os dois layouts horizontais em filhos de v_layout
    v_layout->addLayout(h_layout_About);
    v_layout->addLayout(h_layout_Quit);
    v_layout->addLayout(h_qDate1);
    v_layout->addLayout(h_qDate2);
    v_layout->addLayout(h_qDate3);
    v_layout->addLayout(h_qDate4);
    v_layout->addLayout(h_qDate5);



    // define v_layout como filho de mainWindow
    mainWindow->setLayout(v_layout);


    mainWindow->show(); // exibe a janela principal

    app.exec(); // entra no "event loop"

    return 0;

}



