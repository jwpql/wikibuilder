/********************************************************************************
** Form generated from reading UI file 'modal.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODAL_H
#define UI_MODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modal
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QScrollArea *modalScrollArea;
    QWidget *modalScrollAreaContents;
    QVBoxLayout *verticalLayout;
    QLabel *modalLabel;
    QPushButton *pushButton;
    QPushButton *modalBackBtn;
    QPushButton *modalForwardBtn;

    void setupUi(QDialog *Modal)
    {
        if (Modal->objectName().isEmpty())
            Modal->setObjectName("Modal");
        Modal->resize(414, 374);
        Modal->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgb(177, 177, 177);\n"
"}\n"
"\n"
"QPushButton{\n"
"color:black;\n"
"background-color:rgb(177, 177, 177);\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border-left: 1px white solid;\n"
"border-top: 1px white solid;\n"
"border-right: 1px gray solid;\n"
"border-bottom: 1px gray solid;\n"
"border-style:solid;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:gray;\n"
"border-right: 1px white solid;\n"
"border-bottom: 1px white solid;\n"
"border-left: 1px black solid;\n"
"border-top: 1px black solid;\n"
"border-style:solid;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Modal);
        gridLayout->setObjectName("gridLayout");
        pushButton_2 = new QPushButton(Modal);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 5, 0, 1, 1);

        modalScrollArea = new QScrollArea(Modal);
        modalScrollArea->setObjectName("modalScrollArea");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modalScrollArea->sizePolicy().hasHeightForWidth());
        modalScrollArea->setSizePolicy(sizePolicy);
        modalScrollArea->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        modalScrollArea->setFrameShape(QFrame::Shape::NoFrame);
        modalScrollArea->setFrameShadow(QFrame::Shadow::Plain);
        modalScrollArea->setLineWidth(1);
        modalScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        modalScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        modalScrollArea->setWidgetResizable(true);
        modalScrollArea->setAlignment(Qt::AlignmentFlag::AlignCenter);
        modalScrollAreaContents = new QWidget();
        modalScrollAreaContents->setObjectName("modalScrollAreaContents");
        modalScrollAreaContents->setGeometry(QRect(0, 0, 354, 362));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modalScrollAreaContents->sizePolicy().hasHeightForWidth());
        modalScrollAreaContents->setSizePolicy(sizePolicy1);
        modalScrollAreaContents->setStyleSheet(QString::fromUtf8("background-color:rgb(177, 177, 177);"));
        verticalLayout = new QVBoxLayout(modalScrollAreaContents);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        modalLabel = new QLabel(modalScrollAreaContents);
        modalLabel->setObjectName("modalLabel");
        sizePolicy.setHeightForWidth(modalLabel->sizePolicy().hasHeightForWidth());
        modalLabel->setSizePolicy(sizePolicy);
        modalLabel->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color:blue"));
        modalLabel->setLineWidth(0);

        verticalLayout->addWidget(modalLabel);

        modalScrollArea->setWidget(modalScrollAreaContents);

        gridLayout->addWidget(modalScrollArea, 0, 2, 6, 1);

        pushButton = new QPushButton(Modal);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        modalBackBtn = new QPushButton(Modal);
        modalBackBtn->setObjectName("modalBackBtn");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(modalBackBtn->sizePolicy().hasHeightForWidth());
        modalBackBtn->setSizePolicy(sizePolicy2);
        modalBackBtn->setMinimumSize(QSize(20, 0));
        modalBackBtn->setMaximumSize(QSize(20, 16777215));

        gridLayout->addWidget(modalBackBtn, 2, 0, 1, 1);

        modalForwardBtn = new QPushButton(Modal);
        modalForwardBtn->setObjectName("modalForwardBtn");
        sizePolicy2.setHeightForWidth(modalForwardBtn->sizePolicy().hasHeightForWidth());
        modalForwardBtn->setSizePolicy(sizePolicy2);
        modalForwardBtn->setMinimumSize(QSize(20, 0));
        modalForwardBtn->setMaximumSize(QSize(20, 16777215));

        gridLayout->addWidget(modalForwardBtn, 2, 3, 1, 1);


        retranslateUi(Modal);

        QMetaObject::connectSlotsByName(Modal);
    } // setupUi

    void retranslateUi(QDialog *Modal)
    {
        Modal->setWindowTitle(QCoreApplication::translate("Modal", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Modal", ".", nullptr));
        modalLabel->setText(QCoreApplication::translate("Modal", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Modal", ".", nullptr));
        modalBackBtn->setText(QCoreApplication::translate("Modal", "<", nullptr));
        modalForwardBtn->setText(QCoreApplication::translate("Modal", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modal: public Ui_Modal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODAL_H
