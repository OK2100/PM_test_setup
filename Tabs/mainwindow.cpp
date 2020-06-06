#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



//    ui->treeView ->addItem("CFD threshold 3mV");
//    ui->treeView->addItem("ADC zero level");
//    ui->treeView->addItem("ADC delay");
//    ui->treeView->addItem("TDC calibration");
//    ui->treeView->addItem("Gate");
//    ui->treeView->addItem("CFD setup");
//    ui->treeView->addItem("Setup saving");
//    ui->treeView->addItem("Visual control");
//    ui->treeView->addItem("ADC MSB control");



//    ui->lbl_1_1->setStyleSheet("QLabel { background-color : lightgreen; }");
//    ui->lbl_1_2->setStyleSheet("QLabel { background-color : yellow; }");
//    ui->lbl_1_3->setStyleSheet("QLabel { background-color : red; }");

//    ui->listWidget->setWordWrap(1);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_treeWidget_itemCollapsed(QTreeWidgetItem *item)
{
    qDebug() << item->text(0);
}

void MainWindow::on_treeWidget_itemExpanded(QTreeWidgetItem *item)
{
//    qDebug() << item->text(0);
//    qDebug() << ui->treeWidget->indexOfTopLevelItem(item);
}

void MainWindow::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    qDebug() << ui->treeWidget->indexOfTopLevelItem(item);
    ui->stackedWidget->setCurrentIndex(ui->treeWidget->indexOfTopLevelItem(item));
}
