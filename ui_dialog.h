/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QDebug>

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include <QApplication>
#include <QDebug>
#include <QTextStream>
#include <QFile>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label,*setRRLabel;
    QLabel *roverDistlabel;
    QLabel *roverConsoleLabels[4];
    QScrollBar *speedScrollBar,*setRoverRange;
    QPushButton *steerRight,*steerLeft,*autoManual,*goBtn;

;
 //https://stackoverflow.com/questions/2749798/qlabel-set-color-of-text-and-background
    QPalette palette_RED,palette_GREEN,palette_YELLOW;


    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));

        palette_RED.setColor(QPalette::Window, Qt::white);
        palette_RED.setColor(QPalette::WindowText, Qt::red);
        palette_GREEN.setColor(QPalette::Window, Qt::white);
        palette_GREEN.setColor(QPalette::WindowText, Qt::green);
        palette_YELLOW.setColor(QPalette::Window, Qt::lightGray);

        Dialog->resize(821, 691);
        Dialog->setPalette(palette_YELLOW);

// --------------------- QLabel Settings --------------------------------------------
        QFont font;
        font.setPointSize(12);

        label = new QLabel(Dialog);
        label->setFont(font);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(580, 120, 171, 21));
        label->setAutoFillBackground(true);
        label->setPalette(palette_RED);

        setRRLabel= new QLabel(Dialog);
        setRRLabel->setFont(font);
        setRRLabel->setObjectName(QStringLiteral("setRRLabel"));
        setRRLabel->setGeometry(QRect(580, 170, 171, 21));
        setRRLabel->setAutoFillBackground(true);
        setRRLabel->setPalette(palette_RED);


        roverDistlabel=new QLabel(Dialog); // label to chart Rover distance
        roverDistlabel->setFont(font);
        roverDistlabel->setObjectName(QStringLiteral("roverDistlabel"));
        roverDistlabel->setGeometry(QRect(20, 100, 161, 21));
        roverDistlabel->setAutoFillBackground(true);
        roverDistlabel->setPalette(palette_GREEN);

        int j =100;
        for(int i=0;i<4;i++)
        {
            roverConsoleLabels[i]=new QLabel(Dialog);
            roverConsoleLabels[i]->setGeometry(QRect(20, (j+=40), 200, 21));
            roverConsoleLabels[i]->setFont(font);
            setRRLabel->setAutoFillBackground(true);
            roverConsoleLabels[i]->setPalette(palette_GREEN);
        }

// --------------------- QLabel END --------------------------------------------



// --------------------- QPushButton Settings --------------------------------------------

        steerRight=new QPushButton("RIGHT",Dialog);
        steerRight->setGeometry(QRect(620, 240, 40, 35));

        steerLeft=new QPushButton("LEFT",Dialog);
        steerLeft->setGeometry (QRect(400, 240, 40, 35));

        autoManual=new QPushButton("MANUAL",Dialog);
        autoManual->setGeometry(QRect(400, 330, 60, 35));

        goBtn=new QPushButton("ENABLE",Dialog);
        goBtn->setGeometry(QRect(620, 330, 100, 75));

// --------------------- QPushButton END --------------------------------------------



// --------------------- QScrollBar Settings --------------------------------------------

        speedScrollBar = new QScrollBar(Dialog);
        speedScrollBar->setObjectName(QStringLiteral("speedScrollBar"));
        speedScrollBar->setGeometry(QRect(400, 100, 91, 71));
        speedScrollBar->resize(91,45);
        speedScrollBar->setOrientation(Qt::Horizontal);
        speedScrollBar->setSingleStep(25);

        setRoverRange = new QScrollBar(Dialog);
        setRoverRange->setObjectName(QStringLiteral("setRoverRange"));
        setRoverRange->setGeometry(QRect(400, 160, 120, 71));
        setRoverRange->resize(120, 50);
        setRoverRange->setOrientation(Qt::Horizontal);
        setRoverRange->setMinimum(10);
        setRoverRange->setSingleStep(1);

// --------------------- QScrollBar END --------------------------------------------



// --------------------- QSerialPort Settings --------------------------------------------
  qDebug() << "Name  :";

//        foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
//               qDebug() << "Name  :" << info.portName();
//               qDebug() << "Description  :" << info.description();
//               qDebug() << "Manufactuer :"  << info.manufacturer();
//        }












        retranslateUi(Dialog);



    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", " GEAR SHIFTER", 0));
        setRRLabel->setText(QApplication::translate("Dialog", " ROV_RANGE LIMITER", 0));
         roverDistlabel->setText(QApplication::translate("Dialog", "Distance from Rover =", 0));
         roverConsoleLabels[0]->setText(QApplication::translate("Dialog", "Distance from Rover =", 0));
         roverConsoleLabels[1]->setText(QApplication::translate("Dialog", "Distance from Obstacle =", 0));
         roverConsoleLabels[2]->setText(QApplication::translate("Dialog", "Current Gear Setting =", 0));
         roverConsoleLabels[3]->setText(QApplication::translate("Dialog", "Speed of Rover =", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
