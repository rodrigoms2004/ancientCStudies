/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_form2
{
public:
    QHBoxLayout *horizontalLayout;
    QWebView *webView;

    void setupUi(QDialog *form2)
    {
        if (form2->objectName().isEmpty())
            form2->setObjectName(QStringLiteral("form2"));
        form2->resize(400, 300);
        horizontalLayout = new QHBoxLayout(form2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        webView = new QWebView(form2);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("http://agit.com.br/")));

        horizontalLayout->addWidget(webView);


        retranslateUi(form2);

        QMetaObject::connectSlotsByName(form2);
    } // setupUi

    void retranslateUi(QDialog *form2)
    {
        form2->setWindowTitle(QApplication::translate("form2", "WebBrowser", 0));
    } // retranslateUi

};

namespace Ui {
    class form2: public Ui_form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
