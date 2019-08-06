/********************************************************************************
** Form generated from reading UI file 'digitalclock.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALCLOCK_H
#define UI_DIGITALCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "digitalclockclass.h"

QT_BEGIN_NAMESPACE

class Ui_digitalClock
{
public:
    QVBoxLayout *verticalLayout;
    DigitalClockClass *lcdNumber;

    void setupUi(QWidget *digitalClock)
    {
        if (digitalClock->objectName().isEmpty())
            digitalClock->setObjectName(QStringLiteral("digitalClock"));
        digitalClock->resize(313, 158);
        verticalLayout = new QVBoxLayout(digitalClock);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lcdNumber = new DigitalClockClass(digitalClock);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);


        retranslateUi(digitalClock);

        QMetaObject::connectSlotsByName(digitalClock);
    } // setupUi

    void retranslateUi(QWidget *digitalClock)
    {
        digitalClock->setWindowTitle(QApplication::translate("digitalClock", "digitalClock", 0));
    } // retranslateUi

};

namespace Ui {
    class digitalClock: public Ui_digitalClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALCLOCK_H
