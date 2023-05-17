#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMessageBox>
#include <iterativo.h>
#include <recursivo.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_nCubosIterativo_clicked();

    void on_pushButton_nCubosRecursivo_clicked();

    void on_pushButton_NaturaisIterativo_clicked();

    void on_pushButton_NaturaisRecursivo_clicked();

    void on_pushButton_menorElementoIterativo_clicked();

    void on_pushButton_menorElementoRecursivo_clicked();

    void on_pushButton_converterBinarioIterativo_clicked();

    void on_pushButton_converterBinarioRecursivo_clicked();

    void on_pushButton_valordeKIterativo_clicked();

    void on_pushButton_valordeKRecursivo_clicked();

    void on_pushButton_multiplicacaoIterativo_clicked();

    void on_pushButton_multiplicacaoRecursivo_clicked();

private:
    Ui::MainWindow *ui;
    Pedro::iterativo iterativo;
    Pedro::recursivo recursivo;
};
#endif // MAINWINDOW_H
