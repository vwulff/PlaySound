#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEditDown->setText("C:\\Users\\villem\\Documents\\lyd\\Female_Scream_Horror-NeoPhyTe-138499973.wav");
    ui->lineEditUp->setText("C:\\Users\\villem\\Documents\\lyd\\Evil Yelling-SoundBible.com-1774362373.wav");
     ui->lineEditLeft->setText("C:\\Users\\villem\\Documents\\lyd\\Woop Woop-SoundBible.com-198943467.wav");
      ui->lineEditRight->setText("C:\\Users\\villem\\Documents\\lyd\\Scream_and_die.wav");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent( QKeyEvent *k )
{

    if(k->key() == Qt::Key_W){
        playSound(ui->lineEditUp->text());
    }else if(k->key() == Qt::Key_S){
        playSound(ui->lineEditDown->text());
    }else if(k->key() == Qt::Key_A){
        //qWarning() << "left";
        playSound(ui->lineEditLeft->text());
    }else if(k->key() == Qt::Key_D){
         qWarning() << "";
        playSound(ui->lineEditRight->text());
    }
}

void MainWindow::playSound(QString file){
    QMediaPlayer *pl = new QMediaPlayer();
    pl->setMedia(QUrl::fromLocalFile(file));
    pl->setVolume(100);
    pl->play();

}



void MainWindow::on_pushButton_released()
{
    ui->lineEditUp->setText(QFileDialog::getOpenFileName(this,tr("Open File")));
}

void MainWindow::on_pushButton_2_released()
{
     ui->lineEditDown->setText(QFileDialog::getOpenFileName(this,tr("Open File")));
}

void MainWindow::on_pushButton_3_released()
{
    ui->lineEditLeft->setText(QFileDialog::getOpenFileName(this,tr("Open File")));
}

void MainWindow::on_pushButton_4_released()
{
    ui->lineEditRight->setText(QFileDialog::getOpenFileName(this,tr("Open File")));
}
