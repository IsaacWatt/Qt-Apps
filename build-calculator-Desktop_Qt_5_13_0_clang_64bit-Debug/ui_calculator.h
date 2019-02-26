/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *button8;
    QPushButton *button7;
    QPushButton *button1;
    QPushButton *memadd;
    QPushButton *button9;
    QPushButton *divide;
    QPushButton *button4;
    QPushButton *clear;
    QPushButton *button5;
    QPushButton *button2;
    QPushButton *button0;
    QPushButton *button6;
    QPushButton *multiply;
    QPushButton *memclear;
    QPushButton *button3;
    QPushButton *add;
    QPushButton *memget;
    QPushButton *changesign;
    QPushButton *subtract;
    QPushButton *equals;
    QLineEdit *Display;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(400, 300);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);
        button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button8, 1, 1, 1, 1);

        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);
        button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button7, 1, 0, 1, 1);

        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button1, 3, 0, 1, 1);

        memadd = new QPushButton(centralWidget);
        memadd->setObjectName(QString::fromUtf8("memadd"));
        sizePolicy.setHeightForWidth(memadd->sizePolicy().hasHeightForWidth());
        memadd->setSizePolicy(sizePolicy);
        memadd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(memadd, 1, 4, 1, 1);

        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);
        button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button9, 1, 2, 1, 1);

        divide = new QPushButton(centralWidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        sizePolicy.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy);
        divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(divide, 1, 3, 1, 1);

        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button4, 2, 0, 1, 1);

        clear = new QPushButton(centralWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(clear, 4, 0, 1, 1);

        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);
        button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button5, 2, 1, 1, 1);

        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button2, 3, 1, 1, 1);

        button0 = new QPushButton(centralWidget);
        button0->setObjectName(QString::fromUtf8("button0"));
        sizePolicy.setHeightForWidth(button0->sizePolicy().hasHeightForWidth());
        button0->setSizePolicy(sizePolicy);
        button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button0, 4, 1, 1, 1);

        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);
        button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button6, 2, 2, 1, 1);

        multiply = new QPushButton(centralWidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        sizePolicy.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(multiply, 2, 3, 1, 1);

        memclear = new QPushButton(centralWidget);
        memclear->setObjectName(QString::fromUtf8("memclear"));
        sizePolicy.setHeightForWidth(memclear->sizePolicy().hasHeightForWidth());
        memclear->setSizePolicy(sizePolicy);
        memclear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(memclear, 2, 4, 1, 1);

        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(button3, 3, 2, 1, 1);

        add = new QPushButton(centralWidget);
        add->setObjectName(QString::fromUtf8("add"));
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(add, 3, 3, 1, 1);

        memget = new QPushButton(centralWidget);
        memget->setObjectName(QString::fromUtf8("memget"));
        sizePolicy.setHeightForWidth(memget->sizePolicy().hasHeightForWidth());
        memget->setSizePolicy(sizePolicy);
        memget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(memget, 3, 4, 1, 1);

        changesign = new QPushButton(centralWidget);
        changesign->setObjectName(QString::fromUtf8("changesign"));
        sizePolicy.setHeightForWidth(changesign->sizePolicy().hasHeightForWidth());
        changesign->setSizePolicy(sizePolicy);
        changesign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(changesign, 4, 2, 1, 1);

        subtract = new QPushButton(centralWidget);
        subtract->setObjectName(QString::fromUtf8("subtract"));
        sizePolicy.setHeightForWidth(subtract->sizePolicy().hasHeightForWidth());
        subtract->setSizePolicy(sizePolicy);
        subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(subtract, 4, 3, 1, 1);

        equals = new QPushButton(centralWidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        sizePolicy.setHeightForWidth(equals->sizePolicy().hasHeightForWidth());
        equals->setSizePolicy(sizePolicy);
        equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9; \n"
"	border: 1px solid gray ; \n"
"	padding: 5px; \n"
"}"));

        gridLayout->addWidget(equals, 4, 4, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;  \n"
"	border: 1px solid gray ; \n"
"	color: #ffffff\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        memadd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        memclear->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        memget->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        changesign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
