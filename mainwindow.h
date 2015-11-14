#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_bu_addRow_clicked();

    void on_bu_removeRow_clicked();

    void on_bu_addColumn_clicked();

    void on_bu_removeColumn_clicked();

private:
    Ui::MainWindow *ui;
    int clicks;
};

#endif // MAINWINDOW_H
