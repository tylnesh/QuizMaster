#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include "quiz.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList sexList=(QStringList()<<"Neviem"<<"Muz"<<"Zena");
    ui->sexComboBox->addItems(sexList);

    QStringList eduList=(QStringList()<<"Ziadne"<<"Zakladne"<<"Stredne"<<"Vysokoskolske I. stupen"<<"Vysokoskolske II. stupen");
    ui->educationComboBox->addItems(eduList);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{

    int sex = ui->sexComboBox->currentIndex();
    int education = ui->educationComboBox->currentIndex();


    switch (sex)
    {
    case 0: sexString = "Neviem"; break;
    case 1: sexString = "Muz"; break;
    default: sexString = "Zena"; break;
    }

    switch (education)
    {
    case 0: eduString = "Ziadne"; break;
    case 1: eduString = "Zakladne"; break;
    case 2: eduString = "Stredne"; break;
    case 3: eduString = "Vysokoskolske I. stupen"; break;
    default: eduString = "Vysokoskolske II. stupen"; break;
    }

    name = ui->nameTextEdit->toPlainText();
    surname = ui->surnameTextEdit->toPlainText();
    age = ui->ageTextEdit->toPlainText();

    Quiz q;
    q.exec();
    exit(0);

    //ui->valuesLabel->setText(name + " " + surname + " " + age + " " + sexString + " " + eduString);
}
