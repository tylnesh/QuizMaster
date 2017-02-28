#ifndef QUIZ_H
#define QUIZ_H

#include <QDialog>

namespace Ui {
class Quiz;
}

class Quiz : public QDialog
{
    Q_OBJECT

public:
    explicit Quiz(QWidget *parent = 0);
    ~Quiz();

private slots:
    void on_yesButton_clicked();

    void on_noButton_clicked();

    void on_saveAndExitButton_clicked();

private:
    Ui::Quiz *ui;
    void save();

};

#endif // QUIZ_H
