#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->exitButton,
            SIGNAL(clicked(bool)),
            this,
            SLOT(exit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exit()
{
    std::exit(0);
}
