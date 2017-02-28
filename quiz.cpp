#include "quiz.h"
#include "ui_quiz.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include "global.h"
#include <QTime>

QFile file ("questions.txt");
QVector<QString> questions;
QVector<QString> answers;
QVector<int> msElapsed;
QTime myTimer;
int i = 0;

Quiz::Quiz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quiz)
{
    ui->setupUi(this);
    ui->saveAndExitButton->setVisible(false);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;


        QTextStream in(&file);
        QString line = in.readLine();
        while (!line.isNull()) {
            questions.push_back(line);
            answers.push_back("");

            line = in.readLine();

        }

        ui->label->setText(questions[i]);
        myTimer.start();
}

Quiz::~Quiz()
{
    delete ui;
}

void Quiz::on_yesButton_clicked()
{
    if (i<questions.size()) { answers[i] = "Ano"; i++; msElapsed.push_back(myTimer.elapsed()); if (i< questions.size()) ui->label->setText(questions[i]);
        else {
            ui->label->setText("Dakujem!");
        ui->yesButton->setVisible(false);
        ui->noButton->setVisible(false);
        ui->saveAndExitButton->setVisible(true);
        }

}

}

void Quiz::on_noButton_clicked()
{
    if (i< questions.size()) {answers[i] = "Nie"; i++;  msElapsed.push_back(myTimer.elapsed()); if (i< questions.size()) ui->label->setText(questions[i]);
        else {
            ui->label->setText("Dakujem!");
        ui->yesButton->setVisible(false);
        ui->noButton->setVisible(false);
        ui->saveAndExitButton->setVisible(true);
        }

}


}

void Quiz::save()
{

    QString outFileName = QFileDialog::getSaveFileName(

                       this,
                       tr("Save File"),
                       "~/",
                       "All files (*.*);;Text File (*.txt)"
                        );
           QFile outFile(outFileName);
               outFile.open(QIODevice::WriteOnly | QIODevice::Text);
               QTextStream out(&outFile);

               out << name;
               out << "\n";
               out << surname;
               out << "\n";
               out << sexString;
               out << "\n";
               out << age;
               out << "\n";
               out << eduString;
               out << "\n";


               for (int i = 0; i<questions.size(); ++i)
               {

                   out << questions[i] << " " << answers[i] << " " << msElapsed[i] << "ms";
                   out << "\n";
    }


               outFile.close();

}

void Quiz::on_saveAndExitButton_clicked()
{
    Quiz::save();
    exit(0);
}
