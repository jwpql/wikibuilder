/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *HomeButton;
    QPushButton *CategoriesButton;
    QPushButton *PagesButton;
    QFrame *line;
    QLineEdit *SeachLine;
    QPushButton *SearchButton;
    QFrame *line_2;
    QListWidget *Recent;
    QFrame *line_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *LeftButton;
    QPushButton *RightButton;
    QStackedWidget *stackedWidget;
    QWidget *Title;
    QGridLayout *gridLayout_2;
    QPushButton *TitleDiscard;
    QTextEdit *TitleText;
    QPushButton *TitleSave;
    QWidget *Page;
    QGridLayout *gridLayout_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *PageTitle;
    QFrame *PageLine;
    QTextEdit *PageText;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton;
    QWidget *widget_8;
    QGridLayout *gridLayout_7;
    QPushButton *orangeBtn;
    QPushButton *purpleBtn;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QLineEdit *textSize;
    QPushButton *pinkBtn;
    QPushButton *brownBtn;
    QPushButton *blueBtn;
    QFrame *line_4;
    QPushButton *greenBtn;
    QPushButton *grayBtn;
    QFrame *line_5;
    QWidget *widget_10;
    QGridLayout *gridLayout_8;
    QPushButton *underlineBtn;
    QPushButton *boldBtn;
    QPushButton *italicBtn;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLineEdit *colorLine;
    QPushButton *redBtn;
    QPushButton *yellowBtn;
    QPushButton *blackBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *PageDiscard;
    QPushButton *PageSave;
    QWidget *Sitemap;
    QGridLayout *gridLayout_6;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *SiteTitle;
    QFrame *SiteLin;
    QListWidget *SiteList;
    QWidget *Category;
    QGridLayout *gridLayout_4;
    QWidget *CatRightBar;
    QVBoxLayout *verticalLayout_3;
    QLabel *CatLabel;
    QLineEdit *CatLineEdit;
    QLineEdit *lineEdit_2;
    QRadioButton *CatPageRadio;
    QRadioButton *CatCatRadio;
    QPushButton *CatAdd;
    QPushButton *CatDelete;
    QPushButton *CatDeleteFromWiki;
    QPlainTextEdit *CatResult;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *CatTitle;
    QFrame *CatLine;
    QListWidget *CatList;
    QWidget *AllCategories;
    QGridLayout *gridLayout_3;
    QWidget *AllRightBar;
    QVBoxLayout *verticalLayout;
    QLabel *AllLabel;
    QLineEdit *AllLineEdit;
    QPushButton *AllAdd;
    QPushButton *AllDelete;
    QPlainTextEdit *AllResult;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *AllTitle;
    QFrame *AllLine;
    QListWidget *AllList;
    QWidget *search;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *SearchTitle;
    QFrame *line_6;
    QListWidget *SearchList;
    QWidget *gallery;
    QGridLayout *gridLayout_9;
    QWidget *widget_11;
    QGridLayout *gridLayout_10;
    QFrame *line_7;
    QTableWidget *galleryTable;
    QLineEdit *galleryTitle;
    QPushButton *GalleryAddBtn;
    QPushButton *GalleryDeleteBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(510, 541);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(177, 177, 177)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"\n"
"QListWidget{\n"
"color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;}\n"
"\n"
"QLineEdit{\n"
"color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px g"
                        "ray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;\n"
"}\n"
"\n"
"QListWidget{\n"
"font: 9pt \"Sans Serif Collection\";\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(90, 0));
        widget_5->setMaximumSize(QSize(120, 16777215));
        widget_5->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        HomeButton = new QPushButton(widget_5);
        HomeButton->setObjectName("HomeButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(HomeButton->sizePolicy().hasHeightForWidth());
        HomeButton->setSizePolicy(sizePolicy2);
        HomeButton->setMinimumSize(QSize(70, 0));
        HomeButton->setMaximumSize(QSize(120, 16777215));
        HomeButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(HomeButton);

        CategoriesButton = new QPushButton(widget_5);
        CategoriesButton->setObjectName("CategoriesButton");
        sizePolicy2.setHeightForWidth(CategoriesButton->sizePolicy().hasHeightForWidth());
        CategoriesButton->setSizePolicy(sizePolicy2);
        CategoriesButton->setMinimumSize(QSize(70, 0));
        CategoriesButton->setMaximumSize(QSize(120, 16777215));
        CategoriesButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(CategoriesButton);

        PagesButton = new QPushButton(widget_5);
        PagesButton->setObjectName("PagesButton");
        sizePolicy2.setHeightForWidth(PagesButton->sizePolicy().hasHeightForWidth());
        PagesButton->setSizePolicy(sizePolicy2);
        PagesButton->setMinimumSize(QSize(70, 0));
        PagesButton->setMaximumSize(QSize(120, 16777215));
        PagesButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(PagesButton);

        line = new QFrame(widget_5);
        line->setObjectName("line");
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line);

        SeachLine = new QLineEdit(widget_5);
        SeachLine->setObjectName("SeachLine");
        SeachLine->setMaximumSize(QSize(120, 16777215));
        SeachLine->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(SeachLine);

        SearchButton = new QPushButton(widget_5);
        SearchButton->setObjectName("SearchButton");
        sizePolicy2.setHeightForWidth(SearchButton->sizePolicy().hasHeightForWidth());
        SearchButton->setSizePolicy(sizePolicy2);
        SearchButton->setMinimumSize(QSize(70, 0));
        SearchButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(SearchButton);

        line_2 = new QFrame(widget_5);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line_2);

        Recent = new QListWidget(widget_5);
        Recent->setObjectName("Recent");
        Recent->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Recent);

        line_3 = new QFrame(widget_5);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line_3);

        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName("widget_7");
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setObjectName("horizontalLayout");
        LeftButton = new QPushButton(widget_7);
        LeftButton->setObjectName("LeftButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(LeftButton->sizePolicy().hasHeightForWidth());
        LeftButton->setSizePolicy(sizePolicy3);
        LeftButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"background-color:rgb(177, 177, 177);\n"
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
"}"));

        horizontalLayout->addWidget(LeftButton);

        RightButton = new QPushButton(widget_7);
        RightButton->setObjectName("RightButton");
        sizePolicy3.setHeightForWidth(RightButton->sizePolicy().hasHeightForWidth());
        RightButton->setSizePolicy(sizePolicy3);
        RightButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"background-color:rgb(177, 177, 177);\n"
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
"}"));

        horizontalLayout->addWidget(RightButton);


        verticalLayout_2->addWidget(widget_7);


        gridLayout->addWidget(widget_5, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(4);
        sizePolicy4.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy4);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        Title = new QWidget();
        Title->setObjectName("Title");
        gridLayout_2 = new QGridLayout(Title);
        gridLayout_2->setObjectName("gridLayout_2");
        TitleDiscard = new QPushButton(Title);
        TitleDiscard->setObjectName("TitleDiscard");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(TitleDiscard->sizePolicy().hasHeightForWidth());
        TitleDiscard->setSizePolicy(sizePolicy5);
        TitleDiscard->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(TitleDiscard, 1, 3, 1, 2);

        TitleText = new QTextEdit(Title);
        TitleText->setObjectName("TitleText");
        TitleText->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));

        gridLayout_2->addWidget(TitleText, 0, 1, 1, 4);

        TitleSave = new QPushButton(Title);
        TitleSave->setObjectName("TitleSave");
        sizePolicy5.setHeightForWidth(TitleSave->sizePolicy().hasHeightForWidth());
        TitleSave->setSizePolicy(sizePolicy5);
        TitleSave->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(TitleSave, 1, 1, 1, 2);

        stackedWidget->addWidget(Title);
        Page = new QWidget();
        Page->setObjectName("Page");
        gridLayout_5 = new QGridLayout(Page);
        gridLayout_5->setObjectName("gridLayout_5");
        widget_2 = new QWidget(Page);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy6);
        widget_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        PageTitle = new QTextEdit(widget_2);
        PageTitle->setObjectName("PageTitle");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(PageTitle->sizePolicy().hasHeightForWidth());
        PageTitle->setSizePolicy(sizePolicy7);
        PageTitle->setMaximumSize(QSize(16777215, 60));
        PageTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:0;\n"
"font: 26pt \"Sans Serif\";"));
        PageTitle->setReadOnly(false);

        verticalLayout_4->addWidget(PageTitle);

        PageLine = new QFrame(widget_2);
        PageLine->setObjectName("PageLine");
        PageLine->setStyleSheet(QString::fromUtf8("border-bottom:0;\n"
"border-left:0;\n"
"border-right:0;"));
        PageLine->setFrameShape(QFrame::Shape::HLine);
        PageLine->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(PageLine);

        PageText = new QTextEdit(widget_2);
        PageText->setObjectName("PageText");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(6);
        sizePolicy8.setHeightForWidth(PageText->sizePolicy().hasHeightForWidth());
        PageText->setSizePolicy(sizePolicy8);
        PageText->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:0;\n"
"color:black;\n"
""));

        verticalLayout_4->addWidget(PageText);


        gridLayout_5->addWidget(widget_2, 1, 0, 4, 1);

        widget = new QWidget(Page);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy9);
        widget->setMaximumSize(QSize(120, 16777215));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
"}"));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy10);

        verticalLayout_8->addWidget(pushButton);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8("QWidget{color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;}\n"
"\n"
"QPushButton{\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-right: 1px white solid;\n"
"border-bottom: 1px white solid;\n"
"border-style:solid;\n"
"}"));
        gridLayout_7 = new QGridLayout(widget_8);
        gridLayout_7->setObjectName("gridLayout_7");
        orangeBtn = new QPushButton(widget_8);
        orangeBtn->setObjectName("orangeBtn");
        orangeBtn->setMaximumSize(QSize(20, 20));
        orangeBtn->setStyleSheet(QString::fromUtf8("background-color:orange"));

        gridLayout_7->addWidget(orangeBtn, 4, 1, 1, 1);

        purpleBtn = new QPushButton(widget_8);
        purpleBtn->setObjectName("purpleBtn");
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(purpleBtn->sizePolicy().hasHeightForWidth());
        purpleBtn->setSizePolicy(sizePolicy11);
        purpleBtn->setMaximumSize(QSize(20, 20));
        purpleBtn->setStyleSheet(QString::fromUtf8("background-color:purple"));

        gridLayout_7->addWidget(purpleBtn, 6, 1, 1, 1);

        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName("widget_9");
        QSizePolicy sizePolicy12(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy12);
        widget_9->setStyleSheet(QString::fromUtf8("border:0px;"));
        verticalLayout_9 = new QVBoxLayout(widget_9);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label = new QLabel(widget_9);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("border:0;\n"
"font: 8pt \"Sans Serif Collection\";"));

        verticalLayout_9->addWidget(label);

        textSize = new QLineEdit(widget_9);
        textSize->setObjectName("textSize");
        sizePolicy11.setHeightForWidth(textSize->sizePolicy().hasHeightForWidth());
        textSize->setSizePolicy(sizePolicy11);
        textSize->setMinimumSize(QSize(20, 0));
        textSize->setMaximumSize(QSize(50, 20));
        textSize->setStyleSheet(QString::fromUtf8("BORDER: 1px solid gray"));
        textSize->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly|Qt::InputMethodHint::ImhFormattedNumbersOnly);

        verticalLayout_9->addWidget(textSize);


        gridLayout_7->addWidget(widget_9, 0, 0, 1, 2);

        pinkBtn = new QPushButton(widget_8);
        pinkBtn->setObjectName("pinkBtn");
        sizePolicy11.setHeightForWidth(pinkBtn->sizePolicy().hasHeightForWidth());
        pinkBtn->setSizePolicy(sizePolicy11);
        pinkBtn->setMaximumSize(QSize(20, 20));
        pinkBtn->setStyleSheet(QString::fromUtf8("background-color:pink;"));

        gridLayout_7->addWidget(pinkBtn, 7, 0, 1, 1);

        brownBtn = new QPushButton(widget_8);
        brownBtn->setObjectName("brownBtn");
        sizePolicy11.setHeightForWidth(brownBtn->sizePolicy().hasHeightForWidth());
        brownBtn->setSizePolicy(sizePolicy11);
        brownBtn->setMaximumSize(QSize(20, 20));
        brownBtn->setStyleSheet(QString::fromUtf8("background-color:brown;"));

        gridLayout_7->addWidget(brownBtn, 7, 1, 1, 1);

        blueBtn = new QPushButton(widget_8);
        blueBtn->setObjectName("blueBtn");
        sizePolicy11.setHeightForWidth(blueBtn->sizePolicy().hasHeightForWidth());
        blueBtn->setSizePolicy(sizePolicy11);
        blueBtn->setMaximumSize(QSize(20, 20));
        blueBtn->setStyleSheet(QString::fromUtf8("background-color:blue;"));

        gridLayout_7->addWidget(blueBtn, 6, 0, 1, 1);

        line_4 = new QFrame(widget_8);
        line_4->setObjectName("line_4");
        line_4->setStyleSheet(QString::fromUtf8("border-left:0;\n"
"border-right:0;\n"
"border-bottom:0;"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_7->addWidget(line_4, 3, 0, 1, 2);

        greenBtn = new QPushButton(widget_8);
        greenBtn->setObjectName("greenBtn");
        sizePolicy11.setHeightForWidth(greenBtn->sizePolicy().hasHeightForWidth());
        greenBtn->setSizePolicy(sizePolicy11);
        greenBtn->setMaximumSize(QSize(20, 20));
        greenBtn->setStyleSheet(QString::fromUtf8("background-color:green;"));

        gridLayout_7->addWidget(greenBtn, 5, 1, 1, 1);

        grayBtn = new QPushButton(widget_8);
        grayBtn->setObjectName("grayBtn");
        sizePolicy11.setHeightForWidth(grayBtn->sizePolicy().hasHeightForWidth());
        grayBtn->setSizePolicy(sizePolicy11);
        grayBtn->setMaximumSize(QSize(20, 20));
        grayBtn->setStyleSheet(QString::fromUtf8("background-color:gray;"));

        gridLayout_7->addWidget(grayBtn, 8, 1, 1, 1);

        line_5 = new QFrame(widget_8);
        line_5->setObjectName("line_5");
        line_5->setStyleSheet(QString::fromUtf8("border-left:0;\n"
"border-right:0;\n"
"border-bottom:0;"));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_7->addWidget(line_5, 1, 0, 1, 2);

        widget_10 = new QWidget(widget_8);
        widget_10->setObjectName("widget_10");
        sizePolicy12.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy12);
        widget_10->setStyleSheet(QString::fromUtf8("border:0;"));
        gridLayout_8 = new QGridLayout(widget_10);
        gridLayout_8->setObjectName("gridLayout_8");
        underlineBtn = new QPushButton(widget_10);
        underlineBtn->setObjectName("underlineBtn");
        underlineBtn->setStyleSheet(QString::fromUtf8("text-decoration:underline;"));

        gridLayout_8->addWidget(underlineBtn, 0, 2, 1, 1);

        boldBtn = new QPushButton(widget_10);
        boldBtn->setObjectName("boldBtn");
        boldBtn->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout_8->addWidget(boldBtn, 0, 0, 1, 1);

        italicBtn = new QPushButton(widget_10);
        italicBtn->setObjectName("italicBtn");
        italicBtn->setStyleSheet(QString::fromUtf8("font-style:italic;"));

        gridLayout_8->addWidget(italicBtn, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_10);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_8->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget_10);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout_8->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(widget_10);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout_8->addWidget(pushButton_4, 1, 2, 1, 1);


        gridLayout_7->addWidget(widget_10, 2, 0, 1, 2);

        label_2 = new QLabel(widget_8);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"font: 8pt \"Sans Serif Collection\";"));

        gridLayout_7->addWidget(label_2, 9, 0, 1, 2);

        colorLine = new QLineEdit(widget_8);
        colorLine->setObjectName("colorLine");
        colorLine->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif Collection\";"));

        gridLayout_7->addWidget(colorLine, 10, 0, 1, 2);

        redBtn = new QPushButton(widget_8);
        redBtn->setObjectName("redBtn");
        sizePolicy11.setHeightForWidth(redBtn->sizePolicy().hasHeightForWidth());
        redBtn->setSizePolicy(sizePolicy11);
        redBtn->setMaximumSize(QSize(20, 20));
        redBtn->setStyleSheet(QString::fromUtf8("background-color:red;"));

        gridLayout_7->addWidget(redBtn, 4, 0, 1, 1);

        yellowBtn = new QPushButton(widget_8);
        yellowBtn->setObjectName("yellowBtn");
        sizePolicy11.setHeightForWidth(yellowBtn->sizePolicy().hasHeightForWidth());
        yellowBtn->setSizePolicy(sizePolicy11);
        yellowBtn->setMaximumSize(QSize(20, 20));
        yellowBtn->setStyleSheet(QString::fromUtf8("background-color:yellow"));

        gridLayout_7->addWidget(yellowBtn, 5, 0, 1, 1);

        blackBtn = new QPushButton(widget_8);
        blackBtn->setObjectName("blackBtn");
        sizePolicy11.setHeightForWidth(blackBtn->sizePolicy().hasHeightForWidth());
        blackBtn->setSizePolicy(sizePolicy11);
        blackBtn->setMaximumSize(QSize(20, 20));
        blackBtn->setStyleSheet(QString::fromUtf8("background-color:black;"));

        gridLayout_7->addWidget(blackBtn, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 11, 0, 1, 2);


        verticalLayout_8->addWidget(widget_8);

        PageDiscard = new QPushButton(widget);
        PageDiscard->setObjectName("PageDiscard");
        sizePolicy5.setHeightForWidth(PageDiscard->sizePolicy().hasHeightForWidth());
        PageDiscard->setSizePolicy(sizePolicy5);
        PageDiscard->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_8->addWidget(PageDiscard);

        PageSave = new QPushButton(widget);
        PageSave->setObjectName("PageSave");
        QSizePolicy sizePolicy13(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy13.setHorizontalStretch(1);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(PageSave->sizePolicy().hasHeightForWidth());
        PageSave->setSizePolicy(sizePolicy13);
        PageSave->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_8->addWidget(PageSave);


        gridLayout_5->addWidget(widget, 1, 1, 4, 1);

        stackedWidget->addWidget(Page);
        Sitemap = new QWidget();
        Sitemap->setObjectName("Sitemap");
        gridLayout_6 = new QGridLayout(Sitemap);
        gridLayout_6->setObjectName("gridLayout_6");
        widget_6 = new QWidget(Sitemap);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));
        verticalLayout_7 = new QVBoxLayout(widget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        SiteTitle = new QTextEdit(widget_6);
        SiteTitle->setObjectName("SiteTitle");
        sizePolicy7.setHeightForWidth(SiteTitle->sizePolicy().hasHeightForWidth());
        SiteTitle->setSizePolicy(sizePolicy7);
        SiteTitle->setMaximumSize(QSize(16777215, 60));
        SiteTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:0;\n"
"font: 9pt \"Calibri\";"));
        SiteTitle->setReadOnly(true);

        verticalLayout_7->addWidget(SiteTitle);

        SiteLin = new QFrame(widget_6);
        SiteLin->setObjectName("SiteLin");
        QSizePolicy sizePolicy14(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(1);
        sizePolicy14.setHeightForWidth(SiteLin->sizePolicy().hasHeightForWidth());
        SiteLin->setSizePolicy(sizePolicy14);
        SiteLin->setStyleSheet(QString::fromUtf8("border-bottom:0;\n"
"border-left:0;\n"
"border-right:0;"));
        SiteLin->setFrameShape(QFrame::Shape::HLine);
        SiteLin->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_7->addWidget(SiteLin);

        SiteList = new QListWidget(widget_6);
        new QListWidgetItem(SiteList);
        SiteList->setObjectName("SiteList");
        SiteList->setStyleSheet(QString::fromUtf8("border:0;\n"
"color:black;"));

        verticalLayout_7->addWidget(SiteList);


        gridLayout_6->addWidget(widget_6, 0, 0, 1, 1);

        stackedWidget->addWidget(Sitemap);
        Category = new QWidget();
        Category->setObjectName("Category");
        QSizePolicy sizePolicy15(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(Category->sizePolicy().hasHeightForWidth());
        Category->setSizePolicy(sizePolicy15);
        Category->setMinimumSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(Category);
        gridLayout_4->setObjectName("gridLayout_4");
        CatRightBar = new QWidget(Category);
        CatRightBar->setObjectName("CatRightBar");
        QSizePolicy sizePolicy16(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy16.setHorizontalStretch(2);
        sizePolicy16.setVerticalStretch(7);
        sizePolicy16.setHeightForWidth(CatRightBar->sizePolicy().hasHeightForWidth());
        CatRightBar->setSizePolicy(sizePolicy16);
        CatRightBar->setMinimumSize(QSize(120, 0));
        CatRightBar->setMaximumSize(QSize(120, 16777215));
        CatRightBar->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
"}"));
        verticalLayout_3 = new QVBoxLayout(CatRightBar);
        verticalLayout_3->setObjectName("verticalLayout_3");
        CatLabel = new QLabel(CatRightBar);
        CatLabel->setObjectName("CatLabel");
        CatLabel->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"color:black;\n"
"font: 11pt \"Calibri\";\n"
"border:0;"));

        verticalLayout_3->addWidget(CatLabel);

        CatLineEdit = new QLineEdit(CatRightBar);
        CatLineEdit->setObjectName("CatLineEdit");
        CatLineEdit->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));

        verticalLayout_3->addWidget(CatLineEdit);

        lineEdit_2 = new QLineEdit(CatRightBar);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("border:0;"));

        verticalLayout_3->addWidget(lineEdit_2);

        CatPageRadio = new QRadioButton(CatRightBar);
        CatPageRadio->setObjectName("CatPageRadio");
        CatPageRadio->setStyleSheet(QString::fromUtf8("border:0;\n"
"font: 9pt \"Sans Serif\";"));
        CatPageRadio->setChecked(true);

        verticalLayout_3->addWidget(CatPageRadio);

        CatCatRadio = new QRadioButton(CatRightBar);
        CatCatRadio->setObjectName("CatCatRadio");
        CatCatRadio->setStyleSheet(QString::fromUtf8("border:0;\n"
"font: 9pt \"Sans Serif\";"));

        verticalLayout_3->addWidget(CatCatRadio);

        CatAdd = new QPushButton(CatRightBar);
        CatAdd->setObjectName("CatAdd");
        sizePolicy10.setHeightForWidth(CatAdd->sizePolicy().hasHeightForWidth());
        CatAdd->setSizePolicy(sizePolicy10);
        CatAdd->setMinimumSize(QSize(0, 0));
        CatAdd->setMaximumSize(QSize(16777215, 90));
        CatAdd->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(CatAdd);

        CatDelete = new QPushButton(CatRightBar);
        CatDelete->setObjectName("CatDelete");
        sizePolicy10.setHeightForWidth(CatDelete->sizePolicy().hasHeightForWidth());
        CatDelete->setSizePolicy(sizePolicy10);
        CatDelete->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(CatDelete);

        CatDeleteFromWiki = new QPushButton(CatRightBar);
        CatDeleteFromWiki->setObjectName("CatDeleteFromWiki");
        sizePolicy10.setHeightForWidth(CatDeleteFromWiki->sizePolicy().hasHeightForWidth());
        CatDeleteFromWiki->setSizePolicy(sizePolicy10);
        CatDeleteFromWiki->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(CatDeleteFromWiki);

        CatResult = new QPlainTextEdit(CatRightBar);
        CatResult->setObjectName("CatResult");
        CatResult->setStyleSheet(QString::fromUtf8("background-color:rgb(221, 221, 221);\n"
"color:black;\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));
        CatResult->setReadOnly(true);

        verticalLayout_3->addWidget(CatResult);


        gridLayout_4->addWidget(CatRightBar, 1, 2, 1, 1);

        widget_4 = new QWidget(Category);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));
        verticalLayout_6 = new QVBoxLayout(widget_4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        CatTitle = new QTextEdit(widget_4);
        CatTitle->setObjectName("CatTitle");
        sizePolicy7.setHeightForWidth(CatTitle->sizePolicy().hasHeightForWidth());
        CatTitle->setSizePolicy(sizePolicy7);
        CatTitle->setMaximumSize(QSize(16777215, 60));
        CatTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:0;\n"
"font: 26pt \"Sans Serif\";"));
        CatTitle->setReadOnly(true);

        verticalLayout_6->addWidget(CatTitle);

        CatLine = new QFrame(widget_4);
        CatLine->setObjectName("CatLine");
        sizePolicy14.setHeightForWidth(CatLine->sizePolicy().hasHeightForWidth());
        CatLine->setSizePolicy(sizePolicy14);
        CatLine->setStyleSheet(QString::fromUtf8("border-bottom:0;\n"
"border-left:0;\n"
"border-right:0;"));
        CatLine->setFrameShape(QFrame::Shape::HLine);
        CatLine->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_6->addWidget(CatLine);

        CatList = new QListWidget(widget_4);
        new QListWidgetItem(CatList);
        CatList->setObjectName("CatList");
        CatList->setStyleSheet(QString::fromUtf8("border:0;\n"
"color:black;\n"
"font: 9pt \"Sans Serif Collection\";"));

        verticalLayout_6->addWidget(CatList);


        gridLayout_4->addWidget(widget_4, 1, 1, 1, 1);

        stackedWidget->addWidget(Category);
        AllCategories = new QWidget();
        AllCategories->setObjectName("AllCategories");
        gridLayout_3 = new QGridLayout(AllCategories);
        gridLayout_3->setObjectName("gridLayout_3");
        AllRightBar = new QWidget(AllCategories);
        AllRightBar->setObjectName("AllRightBar");
        QSizePolicy sizePolicy17(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy17.setHorizontalStretch(2);
        sizePolicy17.setVerticalStretch(7);
        sizePolicy17.setHeightForWidth(AllRightBar->sizePolicy().hasHeightForWidth());
        AllRightBar->setSizePolicy(sizePolicy17);
        AllRightBar->setMaximumSize(QSize(120, 16777215));
        AllRightBar->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
"}"));
        verticalLayout = new QVBoxLayout(AllRightBar);
        verticalLayout->setObjectName("verticalLayout");
        AllLabel = new QLabel(AllRightBar);
        AllLabel->setObjectName("AllLabel");
        AllLabel->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"color:black;\n"
"font: 11pt \"Calibri\";\n"
"border:0;"));

        verticalLayout->addWidget(AllLabel);

        AllLineEdit = new QLineEdit(AllRightBar);
        AllLineEdit->setObjectName("AllLineEdit");
        AllLineEdit->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));

        verticalLayout->addWidget(AllLineEdit);

        AllAdd = new QPushButton(AllRightBar);
        AllAdd->setObjectName("AllAdd");
        AllAdd->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(AllAdd);

        AllDelete = new QPushButton(AllRightBar);
        AllDelete->setObjectName("AllDelete");
        AllDelete->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(AllDelete);

        AllResult = new QPlainTextEdit(AllRightBar);
        AllResult->setObjectName("AllResult");
        AllResult->setStyleSheet(QString::fromUtf8("background-color:rgb(221, 221, 221);\n"
"color:black;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));
        AllResult->setReadOnly(true);

        verticalLayout->addWidget(AllResult);


        gridLayout_3->addWidget(AllRightBar, 1, 2, 1, 1);

        widget_3 = new QWidget(AllCategories);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        AllTitle = new QTextEdit(widget_3);
        AllTitle->setObjectName("AllTitle");
        sizePolicy7.setHeightForWidth(AllTitle->sizePolicy().hasHeightForWidth());
        AllTitle->setSizePolicy(sizePolicy7);
        AllTitle->setMaximumSize(QSize(16777215, 60));
        AllTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:0;\n"
"font: 26pt \"Sans serif\";"));
        AllTitle->setReadOnly(true);

        verticalLayout_5->addWidget(AllTitle);

        AllLine = new QFrame(widget_3);
        AllLine->setObjectName("AllLine");
        sizePolicy14.setHeightForWidth(AllLine->sizePolicy().hasHeightForWidth());
        AllLine->setSizePolicy(sizePolicy14);
        AllLine->setStyleSheet(QString::fromUtf8("border-bottom:0;\n"
"border-left:0;\n"
"border-right:0;"));
        AllLine->setFrameShape(QFrame::Shape::HLine);
        AllLine->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(AllLine);

        AllList = new QListWidget(widget_3);
        new QListWidgetItem(AllList);
        AllList->setObjectName("AllList");
        AllList->setStyleSheet(QString::fromUtf8("border:0;\n"
"color:black;\n"
"font: 9pt \"Sans Serif Collection\";"));

        verticalLayout_5->addWidget(AllList);


        gridLayout_3->addWidget(widget_3, 1, 1, 1, 1);

        stackedWidget->addWidget(AllCategories);
        search = new QWidget();
        search->setObjectName("search");
        search->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout_10 = new QVBoxLayout(search);
        verticalLayout_10->setObjectName("verticalLayout_10");
        SearchTitle = new QLineEdit(search);
        SearchTitle->setObjectName("SearchTitle");
        SearchTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:0;\n"
"font: 26pt \"Sans serif\";"));

        verticalLayout_10->addWidget(SearchTitle);

        line_6 = new QFrame(search);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_10->addWidget(line_6);

        SearchList = new QListWidget(search);
        new QListWidgetItem(SearchList);
        new QListWidgetItem(SearchList);
        SearchList->setObjectName("SearchList");
        SearchList->setStyleSheet(QString::fromUtf8("border:0;"));

        verticalLayout_10->addWidget(SearchList);

        stackedWidget->addWidget(search);
        gallery = new QWidget();
        gallery->setObjectName("gallery");
        gallery->setStyleSheet(QString::fromUtf8(""));
        gridLayout_9 = new QGridLayout(gallery);
        gridLayout_9->setObjectName("gridLayout_9");
        widget_11 = new QWidget(gallery);
        widget_11->setObjectName("widget_11");
        widget_11->setStyleSheet(QString::fromUtf8("QWidget{color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-right: 1px rgb(177, 177, 177) solid;\n"
"border-bottom: 1px rgb(177, 177, 177) solid;\n"
"border-left: 1px gray solid;\n"
"border-top: 1px gray solid;\n"
"border-style:solid;\n"
"}\n"
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
"}"));
        gridLayout_10 = new QGridLayout(widget_11);
        gridLayout_10->setObjectName("gridLayout_10");
        line_7 = new QFrame(widget_11);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_10->addWidget(line_7, 1, 1, 1, 2);

        galleryTable = new QTableWidget(widget_11);
        if (galleryTable->columnCount() < 4)
            galleryTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        galleryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        galleryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        galleryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        galleryTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (galleryTable->rowCount() < 2)
            galleryTable->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        galleryTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        galleryTable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        galleryTable->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        galleryTable->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        galleryTable->setItem(0, 3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        galleryTable->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        galleryTable->setItem(1, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        galleryTable->setItem(1, 3, __qtablewidgetitem11);
        galleryTable->setObjectName("galleryTable");
        galleryTable->setEnabled(true);
        galleryTable->setStyleSheet(QString::fromUtf8(""));
        galleryTable->setLineWidth(1);
        galleryTable->setEditTriggers(QAbstractItemView::EditTrigger::DoubleClicked);
        galleryTable->setAlternatingRowColors(false);
        galleryTable->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerItem);
        galleryTable->setShowGrid(false);
        galleryTable->setCornerButtonEnabled(false);
        galleryTable->setColumnCount(4);
        galleryTable->horizontalHeader()->setVisible(false);
        galleryTable->horizontalHeader()->setCascadingSectionResizes(false);
        galleryTable->horizontalHeader()->setStretchLastSection(false);
        galleryTable->verticalHeader()->setVisible(false);

        gridLayout_10->addWidget(galleryTable, 2, 1, 1, 2);

        galleryTitle = new QLineEdit(widget_11);
        galleryTitle->setObjectName("galleryTitle");
        galleryTitle->setEnabled(false);
        galleryTitle->setStyleSheet(QString::fromUtf8("QWidget{color:black;\n"
"border:0;\n"
"font: 26pt \"Sans serif\";\n"
"}\n"
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
"}"));

        gridLayout_10->addWidget(galleryTitle, 0, 1, 1, 2);

        GalleryAddBtn = new QPushButton(widget_11);
        GalleryAddBtn->setObjectName("GalleryAddBtn");

        gridLayout_10->addWidget(GalleryAddBtn, 3, 1, 1, 1);

        GalleryDeleteBtn = new QPushButton(widget_11);
        GalleryDeleteBtn->setObjectName("GalleryDeleteBtn");

        gridLayout_10->addWidget(GalleryDeleteBtn, 3, 2, 1, 1);


        gridLayout_9->addWidget(widget_11, 0, 0, 1, 1);

        stackedWidget->addWidget(gallery);

        gridLayout->addWidget(stackedWidget, 1, 1, 5, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 510, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HomeButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        CategoriesButton->setText(QCoreApplication::translate("MainWindow", "Categories", nullptr));
        PagesButton->setText(QCoreApplication::translate("MainWindow", "Sitemap", nullptr));
        SearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        LeftButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        RightButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        TitleDiscard->setText(QCoreApplication::translate("MainWindow", "Discard changes", nullptr));
        TitleText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Calibri';\">Placeholder text</span></p></body></html>", nullptr));
        TitleSave->setText(QCoreApplication::translate("MainWindow", "Save Changes", nullptr));
        PageTitle->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Page Title</p></body></html>", nullptr));
        PageText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">&lt;b&gt;testing testing &lt;/b&gt;</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Gallery >", nullptr));
        orangeBtn->setText(QString());
        purpleBtn->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Text size:", nullptr));
        pinkBtn->setText(QString());
        brownBtn->setText(QString());
        blueBtn->setText(QString());
        greenBtn->setText(QString());
        grayBtn->setText(QString());
        underlineBtn->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        boldBtn->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        italicBtn->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Custom color:", nullptr));
        colorLine->setText(QCoreApplication::translate("MainWindow", "#ffffff", nullptr));
        redBtn->setText(QString());
        yellowBtn->setText(QString());
        blackBtn->setText(QString());
        PageDiscard->setText(QCoreApplication::translate("MainWindow", "Discard changes", nullptr));
        PageSave->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
        SiteTitle->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:26pt;\">Sitemap</span></p></body></html>", nullptr));

        const bool __sortingEnabled = SiteList->isSortingEnabled();
        SiteList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = SiteList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Error", nullptr));
        SiteList->setSortingEnabled(__sortingEnabled);

        CatLabel->setText(QCoreApplication::translate("MainWindow", "Name of entry:", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "Entry is a:", nullptr));
        CatPageRadio->setText(QCoreApplication::translate("MainWindow", "Page", nullptr));
        CatCatRadio->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        CatAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        CatDelete->setText(QCoreApplication::translate("MainWindow", "Delete from category", nullptr));
        CatDeleteFromWiki->setText(QCoreApplication::translate("MainWindow", "Delete from wiki", nullptr));
        CatResult->setPlainText(QCoreApplication::translate("MainWindow", "Testing testing testing", nullptr));
        CatTitle->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Category</p></body></html>", nullptr));

        const bool __sortingEnabled1 = CatList->isSortingEnabled();
        CatList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem1 = CatList->item(0);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Category not found", nullptr));
        CatList->setSortingEnabled(__sortingEnabled1);

        AllLabel->setText(QCoreApplication::translate("MainWindow", "Name of category:", nullptr));
        AllAdd->setText(QCoreApplication::translate("MainWindow", "Add category", nullptr));
        AllDelete->setText(QCoreApplication::translate("MainWindow", "Delete category", nullptr));
        AllResult->setPlainText(QString());
        AllTitle->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans serif'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">All Categories</p></body></html>", nullptr));

        const bool __sortingEnabled2 = AllList->isSortingEnabled();
        AllList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem2 = AllList->item(0);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Category not found", nullptr));
        AllList->setSortingEnabled(__sortingEnabled2);

        SearchTitle->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));

        const bool __sortingEnabled3 = SearchList->isSortingEnabled();
        SearchList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = SearchList->item(0);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = SearchList->item(1);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "test2", nullptr));
        SearchList->setSortingEnabled(__sortingEnabled3);

        QTableWidgetItem *___qtablewidgetitem = galleryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = galleryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = galleryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = galleryTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = galleryTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = galleryTable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));

        const bool __sortingEnabled4 = galleryTable->isSortingEnabled();
        galleryTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = galleryTable->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = galleryTable->item(0, 2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = galleryTable->item(0, 3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = galleryTable->item(1, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = galleryTable->item(1, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = galleryTable->item(1, 3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        galleryTable->setSortingEnabled(__sortingEnabled4);

        galleryTitle->setText(QCoreApplication::translate("MainWindow", "Gallery", nullptr));
        GalleryAddBtn->setText(QCoreApplication::translate("MainWindow", "Add Image", nullptr));
        GalleryDeleteBtn->setText(QCoreApplication::translate("MainWindow", "Delete Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
