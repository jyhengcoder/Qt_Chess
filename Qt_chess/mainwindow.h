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

public slots:


private slots:
    void on_actionOpen_triggered();

    void on_actionAbout_triggered();

    void on_actionSave_triggered();

    void on_actionStart_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
