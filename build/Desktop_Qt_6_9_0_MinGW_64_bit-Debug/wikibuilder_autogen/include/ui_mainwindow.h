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
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_12;
    QGridLayout *gridLayout_8;
    QPushButton *italicBtn_2;
    QPushButton *centerBtn_2;
    QFrame *line_9;
    QPushButton *leftBtn_2;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_3;
    QLineEdit *textSize_2;
    QPushButton *underlineBtn_2;
    QPushButton *redBtn_2;
    QPushButton *blackBtn_2;
    QPushButton *pinkBtn_2;
    QPushButton *orangeBtn_2;
    QLabel *label_4;
    QFrame *line_11;
    QLineEdit *colorLine_2;
    QPushButton *greenBtn_2;
    QPushButton *yellowBtn_2;
    QPushButton *purpleBtn_2;
    QPushButton *grayBtn_2;
    QPushButton *boldBtn_2;
    QFrame *line_10;
    QPushButton *rightBtn_2;
    QPushButton *brownBtn_2;
    QPushButton *blueBtn_2;
    QPushButton *TitleSave;
    QPushButton *TitleDiscard;
    QTextEdit *TitleText;
    QPushButton *homeEditBtn;
    QWidget *Page;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_8;
    QGridLayout *gridLayout_7;
    QPushButton *brownBtn;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QLineEdit *textSize;
    QLineEdit *colorLine;
    QPushButton *greenBtn;
    QPushButton *underlineBtn;
    QPushButton *redBtn;
    QFrame *line_8;
    QFrame *line_5;
    QLabel *label_2;
    QPushButton *yellowBtn;
    QPushButton *pinkBtn;
    QPushButton *italicBtn;
    QFrame *line_4;
    QPushButton *grayBtn;
    QPushButton *purpleBtn;
    QPushButton *orangeBtn;
    QPushButton *blackBtn;
    QPushButton *boldBtn;
    QPushButton *blueBtn;
    QPushButton *centerBtn;
    QPushButton *leftBtn;
    QPushButton *rightBtn;
    QPushButton *PageDiscard;
    QPushButton *PageSave;
    QPushButton *pushButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *PageTitle;
    QFrame *PageLine;
    QTextEdit *PageText;
    QPushButton *editPgBtn;
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
        MainWindow->resize(503, 546);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(177, 177, 177)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("Line{\n"
"border-top: 1px solid gray\n"
"}\n"
"\n"
"QPushButton{\n"
"color:black;\n"
"background-color:rgb(230, 230, 230);\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:gray;\n"
"}\n"
"\n"
"QListWidget{\n"
"color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QListView::item:selected { \n"
"background-color:rgb(221, 221, 221);\n"
" }\n"
"\n"
"QLineEdit{\n"
"color:black;\n"
"background-color:white;\n"
"font: 11pt \"Sans Serif Collection\";\n"
"border-radius:5px;\n"
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
        LeftButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(LeftButton);

        RightButton = new QPushButton(widget_7);
        RightButton->setObjectName("RightButton");
        sizePolicy3.setHeightForWidth(RightButton->sizePolicy().hasHeightForWidth());
        RightButton->setSizePolicy(sizePolicy3);
        RightButton->setStyleSheet(QString::fromUtf8(""));

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
        stackedWidget->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        Title = new QWidget();
        Title->setObjectName("Title");
        gridLayout_2 = new QGridLayout(Title);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_10 = new QWidget(Title);
        widget_10->setObjectName("widget_10");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy5);
        widget_10->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color:black;\n"
"background-color:rgb(206, 206, 206);\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"color:black;\n"
"background-color:#e6e6e6;\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:gray;\n"
"}"));
        verticalLayout_12 = new QVBoxLayout(widget_10);
        verticalLayout_12->setObjectName("verticalLayout_12");
        widget_12 = new QWidget(widget_10);
        widget_12->setObjectName("widget_12");
        widget_12->setStyleSheet(QString::fromUtf8(""));
        gridLayout_8 = new QGridLayout(widget_12);
        gridLayout_8->setObjectName("gridLayout_8");
        italicBtn_2 = new QPushButton(widget_12);
        italicBtn_2->setObjectName("italicBtn_2");
        italicBtn_2->setStyleSheet(QString::fromUtf8("font-style:italic;"));

        gridLayout_8->addWidget(italicBtn_2, 4, 1, 1, 1);

        centerBtn_2 = new QPushButton(widget_12);
        centerBtn_2->setObjectName("centerBtn_2");

        gridLayout_8->addWidget(centerBtn_2, 5, 1, 1, 1);

        line_9 = new QFrame(widget_12);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_8->addWidget(line_9, 16, 0, 1, 2);

        leftBtn_2 = new QPushButton(widget_12);
        leftBtn_2->setObjectName("leftBtn_2");

        gridLayout_8->addWidget(leftBtn_2, 6, 0, 1, 1);

        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName("widget_13");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_13->sizePolicy().hasHeightForWidth());
        widget_13->setSizePolicy(sizePolicy6);
        widget_13->setStyleSheet(QString::fromUtf8("border:0px;"));
        verticalLayout_11 = new QVBoxLayout(widget_13);
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_3 = new QLabel(widget_13);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setStyleSheet(QString::fromUtf8("border:0;\n"
"font: 8pt \"Sans Serif Collection\";"));

        verticalLayout_11->addWidget(label_3);

        textSize_2 = new QLineEdit(widget_13);
        textSize_2->setObjectName("textSize_2");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(textSize_2->sizePolicy().hasHeightForWidth());
        textSize_2->setSizePolicy(sizePolicy7);
        textSize_2->setMinimumSize(QSize(20, 0));
        textSize_2->setMaximumSize(QSize(50, 20));
        textSize_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        textSize_2->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly|Qt::InputMethodHint::ImhFormattedNumbersOnly);

        verticalLayout_11->addWidget(textSize_2);


        gridLayout_8->addWidget(widget_13, 0, 0, 1, 2);

        underlineBtn_2 = new QPushButton(widget_12);
        underlineBtn_2->setObjectName("underlineBtn_2");
        underlineBtn_2->setStyleSheet(QString::fromUtf8("text-decoration:underline;"));

        gridLayout_8->addWidget(underlineBtn_2, 5, 0, 1, 1);

        redBtn_2 = new QPushButton(widget_12);
        redBtn_2->setObjectName("redBtn_2");
        sizePolicy7.setHeightForWidth(redBtn_2->sizePolicy().hasHeightForWidth());
        redBtn_2->setSizePolicy(sizePolicy7);
        redBtn_2->setMaximumSize(QSize(20, 20));
        redBtn_2->setStyleSheet(QString::fromUtf8("background-color:red;"));

        gridLayout_8->addWidget(redBtn_2, 8, 0, 1, 1);

        blackBtn_2 = new QPushButton(widget_12);
        blackBtn_2->setObjectName("blackBtn_2");
        sizePolicy7.setHeightForWidth(blackBtn_2->sizePolicy().hasHeightForWidth());
        blackBtn_2->setSizePolicy(sizePolicy7);
        blackBtn_2->setMaximumSize(QSize(20, 20));
        blackBtn_2->setStyleSheet(QString::fromUtf8("background-color:black;"));

        gridLayout_8->addWidget(blackBtn_2, 12, 0, 1, 1);

        pinkBtn_2 = new QPushButton(widget_12);
        pinkBtn_2->setObjectName("pinkBtn_2");
        sizePolicy7.setHeightForWidth(pinkBtn_2->sizePolicy().hasHeightForWidth());
        pinkBtn_2->setSizePolicy(sizePolicy7);
        pinkBtn_2->setMaximumSize(QSize(20, 20));
        pinkBtn_2->setStyleSheet(QString::fromUtf8("background-color:pink;"));

        gridLayout_8->addWidget(pinkBtn_2, 11, 0, 1, 1);

        orangeBtn_2 = new QPushButton(widget_12);
        orangeBtn_2->setObjectName("orangeBtn_2");
        orangeBtn_2->setMaximumSize(QSize(20, 20));
        orangeBtn_2->setStyleSheet(QString::fromUtf8("background-color:orange"));

        gridLayout_8->addWidget(orangeBtn_2, 8, 1, 1, 1);

        label_4 = new QLabel(widget_12);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setStyleSheet(QString::fromUtf8("border:0;\n"
"font: 8pt \"Sans Serif Collection\";"));

        gridLayout_8->addWidget(label_4, 13, 0, 1, 2);

        line_11 = new QFrame(widget_12);
        line_11->setObjectName("line_11");
        line_11->setStyleSheet(QString::fromUtf8("border-left:0;\n"
"border-right:0;\n"
"border-bottom:0;"));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_8->addWidget(line_11, 7, 0, 1, 2);

        colorLine_2 = new QLineEdit(widget_12);
        colorLine_2->setObjectName("colorLine_2");
        colorLine_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif Collection\";\n"
"background-color:white;"));

        gridLayout_8->addWidget(colorLine_2, 14, 0, 1, 2);

        greenBtn_2 = new QPushButton(widget_12);
        greenBtn_2->setObjectName("greenBtn_2");
        sizePolicy7.setHeightForWidth(greenBtn_2->sizePolicy().hasHeightForWidth());
        greenBtn_2->setSizePolicy(sizePolicy7);
        greenBtn_2->setMaximumSize(QSize(20, 20));
        greenBtn_2->setStyleSheet(QString::fromUtf8("background-color:green;"));

        gridLayout_8->addWidget(greenBtn_2, 9, 1, 1, 1);

        yellowBtn_2 = new QPushButton(widget_12);
        yellowBtn_2->setObjectName("yellowBtn_2");
        sizePolicy7.setHeightForWidth(yellowBtn_2->sizePolicy().hasHeightForWidth());
        yellowBtn_2->setSizePolicy(sizePolicy7);
        yellowBtn_2->setMaximumSize(QSize(20, 20));
        yellowBtn_2->setStyleSheet(QString::fromUtf8("background-color:yellow"));

        gridLayout_8->addWidget(yellowBtn_2, 9, 0, 1, 1);

        purpleBtn_2 = new QPushButton(widget_12);
        purpleBtn_2->setObjectName("purpleBtn_2");
        sizePolicy7.setHeightForWidth(purpleBtn_2->sizePolicy().hasHeightForWidth());
        purpleBtn_2->setSizePolicy(sizePolicy7);
        purpleBtn_2->setMaximumSize(QSize(20, 20));
        purpleBtn_2->setStyleSheet(QString::fromUtf8("background-color:purple"));

        gridLayout_8->addWidget(purpleBtn_2, 10, 1, 1, 1);

        grayBtn_2 = new QPushButton(widget_12);
        grayBtn_2->setObjectName("grayBtn_2");
        sizePolicy7.setHeightForWidth(grayBtn_2->sizePolicy().hasHeightForWidth());
        grayBtn_2->setSizePolicy(sizePolicy7);
        grayBtn_2->setMaximumSize(QSize(20, 20));
        grayBtn_2->setStyleSheet(QString::fromUtf8("background-color:gray;"));

        gridLayout_8->addWidget(grayBtn_2, 12, 1, 1, 1);

        boldBtn_2 = new QPushButton(widget_12);
        boldBtn_2->setObjectName("boldBtn_2");
        boldBtn_2->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout_8->addWidget(boldBtn_2, 4, 0, 1, 1);

        line_10 = new QFrame(widget_12);
        line_10->setObjectName("line_10");
        line_10->setStyleSheet(QString::fromUtf8("border-left:0;\n"
"border-right:0;\n"
"border-bottom:0;"));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_8->addWidget(line_10, 1, 0, 1, 2);

        rightBtn_2 = new QPushButton(widget_12);
        rightBtn_2->setObjectName("rightBtn_2");

        gridLayout_8->addWidget(rightBtn_2, 6, 1, 1, 1);

        brownBtn_2 = new QPushButton(widget_12);
        brownBtn_2->setObjectName("brownBtn_2");
        sizePolicy7.setHeightForWidth(brownBtn_2->sizePolicy().hasHeightForWidth());
        brownBtn_2->setSizePolicy(sizePolicy7);
        brownBtn_2->setMaximumSize(QSize(20, 20));
        brownBtn_2->setStyleSheet(QString::fromUtf8("background-color:brown;"));

        gridLayout_8->addWidget(brownBtn_2, 11, 1, 1, 1);

        blueBtn_2 = new QPushButton(widget_12);
        blueBtn_2->setObjectName("blueBtn_2");
        sizePolicy7.setHeightForWidth(blueBtn_2->sizePolicy().hasHeightForWidth());
        blueBtn_2->setSizePolicy(sizePolicy7);
        blueBtn_2->setMaximumSize(QSize(20, 20));
        blueBtn_2->setStyleSheet(QString::fromUtf8("background-color:blue;"));

        gridLayout_8->addWidget(blueBtn_2, 10, 0, 1, 1);


        verticalLayout_12->addWidget(widget_12);

        TitleSave = new QPushButton(widget_10);
        TitleSave->setObjectName("TitleSave");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(TitleSave->sizePolicy().hasHeightForWidth());
        TitleSave->setSizePolicy(sizePolicy8);
        TitleSave->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(TitleSave);

        TitleDiscard = new QPushButton(widget_10);
        TitleDiscard->setObjectName("TitleDiscard");
        sizePolicy8.setHeightForWidth(TitleDiscard->sizePolicy().hasHeightForWidth());
        TitleDiscard->setSizePolicy(sizePolicy8);
        TitleDiscard->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(TitleDiscard);


        gridLayout_2->addWidget(widget_10, 1, 4, 1, 1);

        TitleText = new QTextEdit(Title);
        TitleText->setObjectName("TitleText");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(TitleText->sizePolicy().hasHeightForWidth());
        TitleText->setSizePolicy(sizePolicy9);
        TitleText->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"border-radius:5px;\n"
"padding:5px;"));

        gridLayout_2->addWidget(TitleText, 0, 1, 2, 3);

        homeEditBtn = new QPushButton(Title);
        homeEditBtn->setObjectName("homeEditBtn");
        sizePolicy7.setHeightForWidth(homeEditBtn->sizePolicy().hasHeightForWidth());
        homeEditBtn->setSizePolicy(sizePolicy7);
        homeEditBtn->setStyleSheet(QString::fromUtf8("padding-left:30px;\n"
"padding-right:30px;"));

        gridLayout_2->addWidget(homeEditBtn, 0, 4, 1, 1);

        stackedWidget->addWidget(Title);
        Page = new QWidget();
        Page->setObjectName("Page");
        gridLayout_5 = new QGridLayout(Page);
        gridLayout_5->setObjectName("gridLayout_5");
        widget = new QWidget(Page);
        widget->setObjectName("widget");
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        widget->setMaximumSize(QSize(120, 16777215));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color:black;\n"
"background-color:rgb(206, 206, 206);\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"color:black;\n"
"background-color:#e6e6e6;\n"
"font: 9pt \"Sans Serif Collection\";\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:gray;\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        widget_8 = new QWidget(widget);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8(""));
        gridLayout_7 = new QGridLayout(widget_8);
        gridLayout_7->setObjectName("gridLayout_7");
        brownBtn = new QPushButton(widget_8);
        brownBtn->setObjectName("brownBtn");
        sizePolicy7.setHeightForWidth(brownBtn->sizePolicy().hasHeightForWidth());
        brownBtn->setSizePolicy(sizePolicy7);
        brownBtn->setMaximumSize(QSize(20, 20));
        brownBtn->setStyleSheet(QString::fromUtf8("background-color:brown;"));

        gridLayout_7->addWidget(brownBtn, 11, 1, 1, 1);

        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName("widget_9");
        sizePolicy6.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy6);
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
        sizePolicy7.setHeightForWidth(textSize->sizePolicy().hasHeightForWidth());
        textSize->setSizePolicy(sizePolicy7);
        textSize->setMinimumSize(QSize(20, 0));
        textSize->setMaximumSize(QSize(50, 20));
        textSize->setStyleSheet(QString::fromUtf8("background-color:white;"));
        textSize->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly|Qt::InputMethodHint::ImhFormattedNumbersOnly);

        verticalLayout_9->addWidget(textSize);


        gridLayout_7->addWidget(widget_9, 0, 0, 1, 2);

        colorLine = new QLineEdit(widget_8);
        colorLine->setObjectName("colorLine");
        colorLine->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif Collection\";\n"
"background-color:white;"));

        gridLayout_7->addWidget(colorLine, 14, 0, 1, 2);

        greenBtn = new QPushButton(widget_8);
        greenBtn->setObjectName("greenBtn");
        sizePolicy7.setHeightForWidth(greenBtn->sizePolicy().hasHeightForWidth());
        greenBtn->setSizePolicy(sizePolicy7);
        greenBtn->setMaximumSize(QSize(20, 20));
        greenBtn->setStyleSheet(QString::fromUtf8("background-color:green;"));

        gridLayout_7->addWidget(greenBtn, 9, 1, 1, 1);

        underlineBtn = new QPushButton(widget_8);
        underlineBtn->setObjectName("underlineBtn");
        underlineBtn->setStyleSheet(QString::fromUtf8("text-decoration:underline;"));

        gridLayout_7->addWidget(underlineBtn, 5, 0, 1, 1);

        redBtn = new QPushButton(widget_8);
        redBtn->setObjectName("redBtn");
        sizePolicy7.setHeightForWidth(redBtn->sizePolicy().hasHeightForWidth());
        redBtn->setSizePolicy(sizePolicy7);
        redBtn->setMaximumSize(QSize(20, 20));
        redBtn->setStyleSheet(QString::fromUtf8("background-color:red;"));

        gridLayout_7->addWidget(redBtn, 8, 0, 1, 1);

        line_8 = new QFrame(widget_8);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_7->addWidget(line_8, 15, 0, 1, 2);

        line_5 = new QFrame(widget_8);
        line_5->setObjectName("line_5");
        line_5->setStyleSheet(QString::fromUtf8("border-left:0;\n"
"border-right:0;\n"
"border-bottom:0;"));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_7->addWidget(line_5, 1, 0, 1, 2);

        label_2 = new QLabel(widget_8);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"font: 8pt \"Sans Serif Collection\";"));

        gridLayout_7->addWidget(label_2, 13, 0, 1, 2);

        yellowBtn = new QPushButton(widget_8);
        yellowBtn->setObjectName("yellowBtn");
        sizePolicy7.setHeightForWidth(yellowBtn->sizePolicy().hasHeightForWidth());
        yellowBtn->setSizePolicy(sizePolicy7);
        yellowBtn->setMaximumSize(QSize(20, 20));
        yellowBtn->setStyleSheet(QString::fromUtf8("background-color:yellow"));

        gridLayout_7->addWidget(yellowBtn, 9, 0, 1, 1);

        pinkBtn = new QPushButton(widget_8);
        pinkBtn->setObjectName("pinkBtn");
        sizePolicy7.setHeightForWidth(pinkBtn->sizePolicy().hasHeightForWidth());
        pinkBtn->setSizePolicy(sizePolicy7);
        pinkBtn->setMaximumSize(QSize(20, 20));
        pinkBtn->setStyleSheet(QString::fromUtf8("background-color:pink;"));

        gridLayout_7->addWidget(pinkBtn, 11, 0, 1, 1);

        italicBtn = new QPushButton(widget_8);
        italicBtn->setObjectName("italicBtn");
        italicBtn->setStyleSheet(QString::fromUtf8("font-style:italic;"));

        gridLayout_7->addWidget(italicBtn, 4, 1, 1, 1);

        line_4 = new QFrame(widget_8);
        line_4->setObjectName("line_4");
        line_4->setStyleSheet(QString::fromUtf8("border-left:0;\n"
"border-right:0;\n"
"border-bottom:0;"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_7->addWidget(line_4, 7, 0, 1, 2);

        grayBtn = new QPushButton(widget_8);
        grayBtn->setObjectName("grayBtn");
        sizePolicy7.setHeightForWidth(grayBtn->sizePolicy().hasHeightForWidth());
        grayBtn->setSizePolicy(sizePolicy7);
        grayBtn->setMaximumSize(QSize(20, 20));
        grayBtn->setStyleSheet(QString::fromUtf8("background-color:gray;"));

        gridLayout_7->addWidget(grayBtn, 12, 1, 1, 1);

        purpleBtn = new QPushButton(widget_8);
        purpleBtn->setObjectName("purpleBtn");
        sizePolicy7.setHeightForWidth(purpleBtn->sizePolicy().hasHeightForWidth());
        purpleBtn->setSizePolicy(sizePolicy7);
        purpleBtn->setMaximumSize(QSize(20, 20));
        purpleBtn->setStyleSheet(QString::fromUtf8("background-color:purple"));

        gridLayout_7->addWidget(purpleBtn, 10, 1, 1, 1);

        orangeBtn = new QPushButton(widget_8);
        orangeBtn->setObjectName("orangeBtn");
        orangeBtn->setMaximumSize(QSize(20, 20));
        orangeBtn->setStyleSheet(QString::fromUtf8("background-color:orange"));

        gridLayout_7->addWidget(orangeBtn, 8, 1, 1, 1);

        blackBtn = new QPushButton(widget_8);
        blackBtn->setObjectName("blackBtn");
        sizePolicy7.setHeightForWidth(blackBtn->sizePolicy().hasHeightForWidth());
        blackBtn->setSizePolicy(sizePolicy7);
        blackBtn->setMaximumSize(QSize(20, 20));
        blackBtn->setStyleSheet(QString::fromUtf8("background-color:black;"));

        gridLayout_7->addWidget(blackBtn, 12, 0, 1, 1);

        boldBtn = new QPushButton(widget_8);
        boldBtn->setObjectName("boldBtn");
        boldBtn->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout_7->addWidget(boldBtn, 4, 0, 1, 1);

        blueBtn = new QPushButton(widget_8);
        blueBtn->setObjectName("blueBtn");
        sizePolicy7.setHeightForWidth(blueBtn->sizePolicy().hasHeightForWidth());
        blueBtn->setSizePolicy(sizePolicy7);
        blueBtn->setMaximumSize(QSize(20, 20));
        blueBtn->setStyleSheet(QString::fromUtf8("background-color:blue;"));

        gridLayout_7->addWidget(blueBtn, 10, 0, 1, 1);

        centerBtn = new QPushButton(widget_8);
        centerBtn->setObjectName("centerBtn");

        gridLayout_7->addWidget(centerBtn, 5, 1, 1, 1);

        leftBtn = new QPushButton(widget_8);
        leftBtn->setObjectName("leftBtn");

        gridLayout_7->addWidget(leftBtn, 6, 0, 1, 1);

        rightBtn = new QPushButton(widget_8);
        rightBtn->setObjectName("rightBtn");

        gridLayout_7->addWidget(rightBtn, 6, 1, 1, 1);


        verticalLayout_8->addWidget(widget_8);

        PageDiscard = new QPushButton(widget);
        PageDiscard->setObjectName("PageDiscard");
        sizePolicy8.setHeightForWidth(PageDiscard->sizePolicy().hasHeightForWidth());
        PageDiscard->setSizePolicy(sizePolicy8);
        PageDiscard->setStyleSheet(QString::fromUtf8("padding:2px;"));

        verticalLayout_8->addWidget(PageDiscard);

        PageSave = new QPushButton(widget);
        PageSave->setObjectName("PageSave");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(PageSave->sizePolicy().hasHeightForWidth());
        PageSave->setSizePolicy(sizePolicy10);
        PageSave->setStyleSheet(QString::fromUtf8("padding:2px;"));

        verticalLayout_8->addWidget(PageSave);


        gridLayout_5->addWidget(widget, 2, 1, 4, 1);

        pushButton = new QPushButton(Page);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy11);
        pushButton->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"padding-right:5px;"));

        gridLayout_5->addWidget(pushButton, 0, 1, 1, 1);

        widget_2 = new QWidget(Page);
        widget_2->setObjectName("widget_2");
        sizePolicy9.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy9);
        widget_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
""));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        PageTitle = new QTextEdit(widget_2);
        PageTitle->setObjectName("PageTitle");
        QSizePolicy sizePolicy12(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(1);
        sizePolicy12.setHeightForWidth(PageTitle->sizePolicy().hasHeightForWidth());
        PageTitle->setSizePolicy(sizePolicy12);
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
        PageText->setEnabled(true);
        QSizePolicy sizePolicy13(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(6);
        sizePolicy13.setHeightForWidth(PageText->sizePolicy().hasHeightForWidth());
        PageText->setSizePolicy(sizePolicy13);
        PageText->setStyleSheet(QString::fromUtf8("color:black;\n"
"border:0;\n"
"color:black;\n"
""));

        verticalLayout_4->addWidget(PageText);


        gridLayout_5->addWidget(widget_2, 0, 0, 6, 1);

        editPgBtn = new QPushButton(Page);
        editPgBtn->setObjectName("editPgBtn");

        gridLayout_5->addWidget(editPgBtn, 1, 1, 1, 1);

        stackedWidget->addWidget(Page);
        Sitemap = new QWidget();
        Sitemap->setObjectName("Sitemap");
        gridLayout_6 = new QGridLayout(Sitemap);
        gridLayout_6->setObjectName("gridLayout_6");
        widget_6 = new QWidget(Sitemap);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
""));
        verticalLayout_7 = new QVBoxLayout(widget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        SiteTitle = new QTextEdit(widget_6);
        SiteTitle->setObjectName("SiteTitle");
        sizePolicy12.setHeightForWidth(SiteTitle->sizePolicy().hasHeightForWidth());
        SiteTitle->setSizePolicy(sizePolicy12);
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
        QSizePolicy sizePolicy16(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy16.setHorizontalStretch(2);
        sizePolicy16.setVerticalStretch(7);
        sizePolicy16.setHeightForWidth(CatRightBar->sizePolicy().hasHeightForWidth());
        CatRightBar->setSizePolicy(sizePolicy16);
        CatRightBar->setMinimumSize(QSize(120, 0));
        CatRightBar->setMaximumSize(QSize(200, 16777215));
        CatRightBar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgb(206, 206, 206);\n"
"color:black;\n"
"}\n"
"QPushButton{\n"
"background-color:#e6e6e6;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:gray;\n"
"}\n"
"\n"
"QPlainTextEdit{\n"
"background-color:#e6e6e6;\n"
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
""));

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
        sizePolicy11.setHeightForWidth(CatAdd->sizePolicy().hasHeightForWidth());
        CatAdd->setSizePolicy(sizePolicy11);
        CatAdd->setMinimumSize(QSize(0, 0));
        CatAdd->setMaximumSize(QSize(16777215, 90));
        CatAdd->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(CatAdd);

        CatDelete = new QPushButton(CatRightBar);
        CatDelete->setObjectName("CatDelete");
        sizePolicy11.setHeightForWidth(CatDelete->sizePolicy().hasHeightForWidth());
        CatDelete->setSizePolicy(sizePolicy11);
        CatDelete->setStyleSheet(QString::fromUtf8("padding-left:3px;\n"
"padding-right:3px;"));

        verticalLayout_3->addWidget(CatDelete);

        CatDeleteFromWiki = new QPushButton(CatRightBar);
        CatDeleteFromWiki->setObjectName("CatDeleteFromWiki");
        sizePolicy11.setHeightForWidth(CatDeleteFromWiki->sizePolicy().hasHeightForWidth());
        CatDeleteFromWiki->setSizePolicy(sizePolicy11);
        CatDeleteFromWiki->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(CatDeleteFromWiki);

        CatResult = new QPlainTextEdit(CatRightBar);
        CatResult->setObjectName("CatResult");
        CatResult->setStyleSheet(QString::fromUtf8(""));
        CatResult->setReadOnly(true);

        verticalLayout_3->addWidget(CatResult);


        gridLayout_4->addWidget(CatRightBar, 1, 2, 1, 1);

        widget_4 = new QWidget(Category);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        verticalLayout_6 = new QVBoxLayout(widget_4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        CatTitle = new QTextEdit(widget_4);
        CatTitle->setObjectName("CatTitle");
        sizePolicy12.setHeightForWidth(CatTitle->sizePolicy().hasHeightForWidth());
        CatTitle->setSizePolicy(sizePolicy12);
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
        CatList->setStyleSheet(QString::fromUtf8(""));

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
        AllRightBar->setStyleSheet(QString::fromUtf8("QWidget{background-color:rgb(206, 206, 206);\n"
"border-radius:5px;}\n"
"\n"
"QPushButton{\n"
"background-color: #e6e6e6;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:gray;\n"
"}\n"
"\n"
"QPlainTextEdit{\n"
"background-color:#e6e6e6;\n"
"color:black;\n"
"border-radius:5px;\n"
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
        AllLineEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:white;"));

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
        AllResult->setStyleSheet(QString::fromUtf8(""));
        AllResult->setReadOnly(true);

        verticalLayout->addWidget(AllResult);


        gridLayout_3->addWidget(AllRightBar, 1, 2, 1, 1);

        widget_3 = new QWidget(AllCategories);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:5px;"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        AllTitle = new QTextEdit(widget_3);
        AllTitle->setObjectName("AllTitle");
        sizePolicy12.setHeightForWidth(AllTitle->sizePolicy().hasHeightForWidth());
        AllTitle->setSizePolicy(sizePolicy12);
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
        AllLine->setStyleSheet(QString::fromUtf8(""));
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
        search->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:5px;"));
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
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"color:black;\n"
"background-color:#e6e6e6;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:gray;\n"
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
        menubar->setGeometry(QRect(0, 0, 503, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


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
        italicBtn_2->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        centerBtn_2->setText(QCoreApplication::translate("MainWindow", "\342\230\260", nullptr));
        leftBtn_2->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Text size:", nullptr));
        underlineBtn_2->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        redBtn_2->setText(QString());
        blackBtn_2->setText(QString());
        pinkBtn_2->setText(QString());
        orangeBtn_2->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Custom color:", nullptr));
        colorLine_2->setText(QCoreApplication::translate("MainWindow", "#ffffff", nullptr));
        greenBtn_2->setText(QString());
        yellowBtn_2->setText(QString());
        purpleBtn_2->setText(QString());
        grayBtn_2->setText(QString());
        boldBtn_2->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        rightBtn_2->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        brownBtn_2->setText(QString());
        blueBtn_2->setText(QString());
        TitleSave->setText(QCoreApplication::translate("MainWindow", "Save Changes", nullptr));
        TitleDiscard->setText(QCoreApplication::translate("MainWindow", "Discard changes", nullptr));
        TitleText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Calibri'; font-size:11pt;\">Placeholder text</span></p></body></html>", nullptr));
        homeEditBtn->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        brownBtn->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Text size:", nullptr));
        colorLine->setText(QCoreApplication::translate("MainWindow", "#ffffff", nullptr));
        greenBtn->setText(QString());
        underlineBtn->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        redBtn->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Custom color:", nullptr));
        yellowBtn->setText(QString());
        pinkBtn->setText(QString());
        italicBtn->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        grayBtn->setText(QString());
        purpleBtn->setText(QString());
        orangeBtn->setText(QString());
        blackBtn->setText(QString());
        boldBtn->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        blueBtn->setText(QString());
        centerBtn->setText(QCoreApplication::translate("MainWindow", "\342\230\260", nullptr));
        leftBtn->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        rightBtn->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        PageDiscard->setText(QCoreApplication::translate("MainWindow", "Discard changes", nullptr));
        PageSave->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Gallery >", nullptr));
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
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;b&gt;testing testing &lt;/b&gt;</p></body></html>", nullptr));
        editPgBtn->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
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
        CatResult->setPlainText(QString());
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
