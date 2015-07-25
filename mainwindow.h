#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QKeyEvent>
#include <QFileDialog>

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


    void playSound(QString file);

    void on_pushButton_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();

    void on_pushButton_4_released();

private:
    Ui::MainWindow *ui;
    virtual void keyPressEvent(QKeyEvent * event);
};

#endif // MAINWINDOW_H
