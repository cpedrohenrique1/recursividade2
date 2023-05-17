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


void MainWindow::on_pushButton_nCubosRecursivo_clicked()
{
    try{
        ui->textEdit_output->setText(QString::number(recursivo.nCubos(ui->lineEdit_input->text().toInt())));
    }
    catch (...)
    {
        QMessageBox::critical(this,"Erro", "Erro");
    }
}


void MainWindow::on_pushButton_NaturaisIterativo_clicked()
{
    try{
        ui->textEdit_output->setText(iterativo.nmNaturais(ui->lineEdit_input->text().toInt()));
    }
    catch (...)
    {
        QMessageBox::critical(this,"Erro", "Erro");
    }
}

void MainWindow::on_pushButton_NaturaisRecursivo_clicked()
{
    try{
        ui->textEdit_output->setText(recursivo.nmNaturais(ui->lineEdit_input->text().toInt())); 
    }
    catch (...)
    {
        QMessageBox::critical(this,"Erro", "Erro");
    }
}


void MainWindow::on_pushButton_menorElementoIterativo_clicked()
{
    try{
        //ui->textEdit_output->setText(QString::number(iterativo.menorElemento()));
    }
    catch (...)
    {
        QMessageBox::critical(this,"Erro", "Erro");
    }
}


void MainWindow::on_pushButton_menorElementoRecursivo_clicked()
{
    try{
        //ui->textEdit_output->setText(QString::number(recursivo.menorElemento(vetor,tamanho)));
    }
    catch (...){
        QMessageBox::critical(this,"Erro", "Erro");
    }
}


void MainWindow::on_pushButton_converterBinarioIterativo_clicked()
{
    try
    {
        ui->textEdit_output->setText(iterativo.converterBinario(ui->lineEdit_input->text().toInt()));
    }
    catch(...)
    {
        QMessageBox::critical(this,"Erro", "Erro");
    }
    
}


void MainWindow::on_pushButton_converterBinarioRecursivo_clicked()
{
    try
    {
        //ui->textEdit_output->setText(recursivo.converterBinario(ui->lineEdit_input->text().toInt()));
    }
    catch(...)
    {
        QMessageBox::critical(this,"Erro", "Erro");
    }
    
}

