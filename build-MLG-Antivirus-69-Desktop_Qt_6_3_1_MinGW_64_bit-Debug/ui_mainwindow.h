/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *logo_label;
    QPushButton *analyze_btn;
    QProgressBar *progressBar;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(827, 600);
        MainWindow->setMinimumSize(QSize(827, 600));
        MainWindow->setMaximumSize(QSize(827, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 42, 56);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        logo_label = new QLabel(centralWidget);
        logo_label->setObjectName(QString::fromUtf8("logo_label"));
        logo_label->setGeometry(QRect(200, 10, 461, 161));
        logo_label->setScaledContents(true);
        analyze_btn = new QPushButton(centralWidget);
        analyze_btn->setObjectName(QString::fromUtf8("analyze_btn"));
        analyze_btn->setGeometry(QRect(270, 240, 311, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font.setBold(true);
        analyze_btn->setFont(font);
        analyze_btn->setCursor(QCursor(Qt::PointingHandCursor));
        analyze_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 48px;\n"
"	color: #0b0e31;\n"
"	background-color: qlineargradient(spread:pad, x1:0.147, y1:0.950318, x2:0.869, y2:0.948864, stop:0 rgba(0, 140, 56, 255), stop:0.448864 rgba(0, 200, 29, 255), stop:1 rgba(17, 148, 0, 255));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.221591, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 0, 255));\n"
"}"));
        analyze_btn->setFlat(false);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(40, 450, 771, 23));
        progressBar->setStyleSheet(QString::fromUtf8("color: white"));
        progressBar->setValue(24);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 549, 821, 51));
        frame->setStyleSheet(QString::fromUtf8("background: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 331, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Print")});
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-size: 24px;\n"
"	color: white;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 20, 331, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-size: 24px;\n"
"	color: white;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MLG Antivirus", nullptr));
        logo_label->setText(QString());
        analyze_btn->setText(QCoreApplication::translate("MainWindow", "ANALYZE\n"
"NOW", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Threats Found: N/A", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Threats Deleted: N/A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
