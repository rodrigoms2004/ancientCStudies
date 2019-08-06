/********************************************************************************
** Form generated from reading UI file 'webform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBFORM_H
#define UI_WEBFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebForm
{
public:
    QHBoxLayout *horizontalLayout;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *WebForm)
    {
        if (WebForm->objectName().isEmpty())
            WebForm->setObjectName(QStringLiteral("WebForm"));
        WebForm->resize(382, 191);
        horizontalLayout = new QHBoxLayout(WebForm);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        calendarWidget = new QCalendarWidget(WebForm);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        horizontalLayout->addWidget(calendarWidget);


        retranslateUi(WebForm);

        QMetaObject::connectSlotsByName(WebForm);
    } // setupUi

    void retranslateUi(QWidget *WebForm)
    {
        WebForm->setWindowTitle(QApplication::translate("WebForm", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class WebForm: public Ui_WebForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBFORM_H
