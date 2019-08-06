/********************************************************************************
** Form generated from reading UI file 'dialogcadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCADASTRO_H
#define UI_DIALOGCADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialogCadastro
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxSexo;
    QFormLayout *formLayout;
    QRadioButton *radioButtonMasculilno;
    QRadioButton *radioButtonFeminino;
    QCheckBox *checkBoxEmail;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUF;
    QComboBox *comboBoxUF;
    QGroupBox *groupBoxEstadoCivl;
    QFormLayout *formLayout_2;
    QRadioButton *radioButtonSolteiro;
    QRadioButton *radioButtonCasado;
    QRadioButton *radioButtonDivorciado;
    QRadioButton *radioButtonViuvo;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancelar;

    void setupUi(QDialog *dialogCadastro)
    {
        if (dialogCadastro->objectName().isEmpty())
            dialogCadastro->setObjectName(QStringLiteral("dialogCadastro"));
        dialogCadastro->resize(400, 300);
        verticalLayout_5 = new QVBoxLayout(dialogCadastro);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNome = new QLabel(dialogCadastro);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        horizontalLayout->addWidget(labelNome);

        lineEditNome = new QLineEdit(dialogCadastro);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));

        horizontalLayout->addWidget(lineEditNome);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxSexo = new QGroupBox(dialogCadastro);
        groupBoxSexo->setObjectName(QStringLiteral("groupBoxSexo"));
        formLayout = new QFormLayout(groupBoxSexo);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        radioButtonMasculilno = new QRadioButton(groupBoxSexo);
        radioButtonMasculilno->setObjectName(QStringLiteral("radioButtonMasculilno"));

        formLayout->setWidget(0, QFormLayout::LabelRole, radioButtonMasculilno);

        radioButtonFeminino = new QRadioButton(groupBoxSexo);
        radioButtonFeminino->setObjectName(QStringLiteral("radioButtonFeminino"));

        formLayout->setWidget(1, QFormLayout::LabelRole, radioButtonFeminino);


        verticalLayout->addWidget(groupBoxSexo);

        checkBoxEmail = new QCheckBox(dialogCadastro);
        checkBoxEmail->setObjectName(QStringLiteral("checkBoxEmail"));

        verticalLayout->addWidget(checkBoxEmail);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelUF = new QLabel(dialogCadastro);
        labelUF->setObjectName(QStringLiteral("labelUF"));

        horizontalLayout_2->addWidget(labelUF);

        comboBoxUF = new QComboBox(dialogCadastro);
        comboBoxUF->setObjectName(QStringLiteral("comboBoxUF"));
        comboBoxUF->setEditable(false);

        horizontalLayout_2->addWidget(comboBoxUF);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        groupBoxEstadoCivl = new QGroupBox(dialogCadastro);
        groupBoxEstadoCivl->setObjectName(QStringLiteral("groupBoxEstadoCivl"));
        formLayout_2 = new QFormLayout(groupBoxEstadoCivl);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        radioButtonSolteiro = new QRadioButton(groupBoxEstadoCivl);
        radioButtonSolteiro->setObjectName(QStringLiteral("radioButtonSolteiro"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, radioButtonSolteiro);

        radioButtonCasado = new QRadioButton(groupBoxEstadoCivl);
        radioButtonCasado->setObjectName(QStringLiteral("radioButtonCasado"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, radioButtonCasado);

        radioButtonDivorciado = new QRadioButton(groupBoxEstadoCivl);
        radioButtonDivorciado->setObjectName(QStringLiteral("radioButtonDivorciado"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, radioButtonDivorciado);

        radioButtonViuvo = new QRadioButton(groupBoxEstadoCivl);
        radioButtonViuvo->setObjectName(QStringLiteral("radioButtonViuvo"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, radioButtonViuvo);


        horizontalLayout_3->addWidget(groupBoxEstadoCivl);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonOK = new QPushButton(dialogCadastro);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        pushButtonOK->setEnabled(false);

        horizontalLayout_4->addWidget(pushButtonOK);

        pushButtonCancelar = new QPushButton(dialogCadastro);
        pushButtonCancelar->setObjectName(QStringLiteral("pushButtonCancelar"));

        horizontalLayout_4->addWidget(pushButtonCancelar);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_4);

#ifndef QT_NO_SHORTCUT
        labelNome->setBuddy(lineEditNome);
        labelUF->setBuddy(comboBoxUF);
#endif // QT_NO_SHORTCUT

        retranslateUi(dialogCadastro);
        QObject::connect(pushButtonCancelar, SIGNAL(clicked()), dialogCadastro, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogCadastro);
    } // setupUi

    void retranslateUi(QDialog *dialogCadastro)
    {
        dialogCadastro->setWindowTitle(QApplication::translate("dialogCadastro", "Cadastro", 0));
        labelNome->setText(QApplication::translate("dialogCadastro", "Nome:", 0));
        groupBoxSexo->setTitle(QApplication::translate("dialogCadastro", "Sexo:", 0));
        radioButtonMasculilno->setText(QApplication::translate("dialogCadastro", "Masculino", 0));
        radioButtonFeminino->setText(QApplication::translate("dialogCadastro", "Feminino", 0));
        checkBoxEmail->setText(QApplication::translate("dialogCadastro", "receber e-mail", 0));
        labelUF->setText(QApplication::translate("dialogCadastro", "UF:", 0));
        groupBoxEstadoCivl->setTitle(QApplication::translate("dialogCadastro", "Estado Civil:", 0));
        radioButtonSolteiro->setText(QApplication::translate("dialogCadastro", "Solteiro", 0));
        radioButtonCasado->setText(QApplication::translate("dialogCadastro", "Casado", 0));
        radioButtonDivorciado->setText(QApplication::translate("dialogCadastro", "Divorciado", 0));
        radioButtonViuvo->setText(QApplication::translate("dialogCadastro", "Viuvo", 0));
        pushButtonOK->setText(QApplication::translate("dialogCadastro", "&OK", 0));
        pushButtonCancelar->setText(QApplication::translate("dialogCadastro", "&Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogCadastro: public Ui_dialogCadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCADASTRO_H
