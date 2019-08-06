#include "window.h"

#include <QPushButton>
#include <QApplication>
#include <QProgressBar>
#include <QSlider>
#include <string.h>
#include <iostream>
using namespace std;

Window::Window(QWidget *parent) : QWidget(parent)
{
    // Set size of the window
    setFixedSize(400, 200);

    // Create and position the button
    m_button = new QPushButton("Exit", this);
    m_button->setGeometry(10, 10, 100, 30);

    // NEW: Do the connection
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT(quit()));

    // Create a progress bar
    // with the range between 0 and 100, and a starting value of 0
    progressBar = new QProgressBar(this);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry (10, 50, 180, 30);

    // Create a horizontal slider
    // with the range between 0 and 100, and starting value of 0
    slider = new QSlider(this);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 70, 180, 30);

    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

    // Create and position the button
    checked_button = new QPushButton("Hello World", this);
    checked_button->setGeometry(150, 10, 100, 30);
    checked_button->setCheckable(true);

    // Set the counter to 0
    m_counter = 0;

    connect(checked_button, SIGNAL(clicked(bool)), this, SLOT(slotButtonClicked(bool)));
    connect(this, SIGNAL(counterReached()), QApplication::instance(), SLOT(quit()));

    buttonInfo = new QPushButton("Info", this);
    buttonInfo->setGeometry(250, 10, 80, 30);

    connect(buttonInfo, SIGNAL(clicked()), this, SLOT(aboutQT()));
}

void Window::aboutQT()
{

    QApplication::aboutQt();

}

void Window::slotButtonClicked(bool checked)
{
    if(checked) {
        checked_button->setText("Checked");
    } else {
        checked_button->setText("Hello World");
    }

    m_counter++;
    if(m_counter == 10) {
        emit counterReached();
    }
}


Window::~Window()
{

}

