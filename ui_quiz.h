/********************************************************************************
** Form generated from reading UI file 'quiz.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZ_H
#define UI_QUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Quiz
{
public:
    QLabel *label;
    QPushButton *yesButton;
    QPushButton *noButton;
    QPushButton *saveAndExitButton;

    void setupUi(QDialog *Quiz)
    {
        if (Quiz->objectName().isEmpty())
            Quiz->setObjectName(QStringLiteral("Quiz"));
        Quiz->resize(1280, 800);
        label = new QLabel(Quiz);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(98, 120, 1061, 32));
        label->setAlignment(Qt::AlignCenter);
        yesButton = new QPushButton(Quiz);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(140, 500, 172, 40));
        noButton = new QPushButton(Quiz);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(970, 510, 172, 40));
        saveAndExitButton = new QPushButton(Quiz);
        saveAndExitButton->setObjectName(QStringLiteral("saveAndExitButton"));
        saveAndExitButton->setGeometry(QRect(490, 330, 251, 171));

        retranslateUi(Quiz);

        QMetaObject::connectSlotsByName(Quiz);
    } // setupUi

    void retranslateUi(QDialog *Quiz)
    {
        Quiz->setWindowTitle(QApplication::translate("Quiz", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Quiz", "Otazky", Q_NULLPTR));
        yesButton->setText(QApplication::translate("Quiz", "Ano", Q_NULLPTR));
        noButton->setText(QApplication::translate("Quiz", "Nie", Q_NULLPTR));
        saveAndExitButton->setText(QApplication::translate("Quiz", "Ulozit odpovede a ukoncit kviz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Quiz: public Ui_Quiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZ_H
