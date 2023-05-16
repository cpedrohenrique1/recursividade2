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

private:
    Ui::MainWindow *ui;
    Pedro::iterativo iterativo;
    Pedro::recursivo recursivo;
};
#endif // MAINWINDOW_H
