#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     setWindowIcon(QIcon(":/mlg_69/res/mlg_.png"));

     QPixmap pix_logo = QPixmap(":/mlg_69/res/mlg_.png");
     int w_logo = pix_logo.width();
     int h_logo = pix_logo.height();
     ui->logo_label->setPixmap(pix_logo.scaled(w_logo, h_logo, Qt::KeepAspectRatio));

     ui->progressBar->setValue(0);
     ui->progressBar->setMaximum(100);
}

void MainWindow::update_progress()
{
    ui->progressBar->setValue(ui->progressBar->value() + 1);
}

void MainWindow::on_analyze_btn_clicked()
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update_progress()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

