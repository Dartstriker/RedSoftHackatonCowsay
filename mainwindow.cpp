#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    if (item->text() == "test1") ui->stackedWidget->setCurrentIndex(0);
    else if (item->text() == "test2") ui->stackedWidget->setCurrentIndex(1);
}

