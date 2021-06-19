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
    static const std::map<QString, size_t> menuAssocs = {
        {"test1", 0},
        {"test2", 1}
    };

    ui->stackedWidget->setCurrentIndex(menuAssocs.at(item->text()));
}

