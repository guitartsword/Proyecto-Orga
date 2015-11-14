#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>
#include <vector>
#include <string>

using std::stringstream;
using std::vector;
using std::string;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    clicks = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //HEADER DE LAS COLUMNAS
    /*QStringList headerLabel();
    QString header;
    header = "Nombre";
    headerLabel.push_back(header);
    header = "Apellido";
    headerLabel.push_back(header);
    header = "Direccion";
    headerLabel.push_back(header);
    header = "Telefono";
    headerLabel.push_back(header);
    */
    ui->tableWidget->setRowCount(10);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setItem(0, 1, new QTableWidgetItem("Hello"));
    //Los titulos de las columnas
    //ui->tableWidget->setHorizontalHeaderLabels(headerLabel);

    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("Nombre"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Apellido"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Edad"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Direccion"));


    ui->pushButton->setText("Tabla Creada");
}

void MainWindow::on_bu_addRow_clicked()
{
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
}

void MainWindow::on_bu_removeRow_clicked()
{
    QModelIndexList selected = ui->tableWidget->selectionModel()->selectedIndexes();
    if(!selected.isEmpty())
        ui->tableWidget->removeRow(ui->tableWidget->currentRow());

}

void MainWindow::on_bu_addColumn_clicked()
{
    ui->tableWidget->setColumnCount(ui->tableWidget->columnCount() + 1);
}

void MainWindow::on_bu_removeColumn_clicked()
{
    QModelIndexList selected = ui->tableWidget->selectionModel()->selectedIndexes();
    if(!selected.isEmpty())
        ui->tableWidget->removeColumn(ui->tableWidget->currentColumn());
}
