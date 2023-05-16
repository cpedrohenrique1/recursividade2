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


void MainWindow::on_pushButton_nCubosIterativo_clicked()
{
    try{

        ui->textEdit_output->setText(QString::number(iterativo.nCubos(ui->lineEdit_input->text().toInt())));
    }
    catch(...){
        QMessageBox::critical(this,"Erro", "Erro");
    }
}

