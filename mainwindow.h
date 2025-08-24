#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <stack>
#include <QPixmap>
#include "maps.h"
#include "gallery.h"
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Maps m;
    Gallery g;
    string currentPage;
    stack<pair<string, string>> back;
    stack<pair<string, string>> forward;

    void display(string name, string other = "");

private slots:
    void on_CatAdd_clicked();

    void on_CatDelete_clicked();

    void on_HomeButton_clicked();

    void on_CategoriesButton_clicked();

    void on_TitleSave_clicked();

    void on_TitleDiscard_clicked();

    void on_PagesButton_clicked();

    void on_CatList_itemDoubleClicked(QListWidgetItem *item);

    void on_AllList_itemClicked(QListWidgetItem *item);

    void on_AllAdd_clicked();

    void on_AllList_itemDoubleClicked(QListWidgetItem *item);

    void on_PageSave_clicked();

    void on_SiteList_itemClicked(QListWidgetItem *item);

    void on_SiteList_itemDoubleClicked(QListWidgetItem *item);

    void on_PageDiscard_clicked();

    void on_AllDelete_clicked();

    void on_CatList_itemClicked(QListWidgetItem *item);

    void on_CatDeleteFromWiki_clicked();

    void on_LeftButton_clicked();

    void on_RightButton_clicked();

    void on_redBtn_clicked();

    //void on_pushButton_2_clicked();

    void on_boldBtn_clicked();

    void on_italicBtn_clicked();

    void on_underlineBtn_clicked();

    void on_orangeBtn_clicked();

    void on_yellowBtn_clicked();

    void on_greenBtn_clicked();

    void on_blackBtn_clicked();

    void on_blueBtn_clicked();

    void on_purpleBtn_clicked();

    void on_pinkBtn_clicked();

    void on_brownBtn_clicked();

    void on_grayBtn_clicked();

    void on_textSize_returnPressed();

    void on_pushButton_clicked();

    //void on_listWidget_itemClicked(QListWidgetItem *item);

    vector<pair<string, string>> searchHelper(string searchTerm);

    void on_SearchButton_clicked();

    void on_SearchList_itemClicked(QListWidgetItem *item);

    void on_colorLine_returnPressed();

    void on_GalleryAddBtn_clicked();

    void on_GalleryDeleteBtn_clicked();

    void on_galleryTable_itemDoubleClicked(QTableWidgetItem *item);

    void on_editPgBtn_clicked();

    void on_centerBtn_clicked();

    void on_leftBtn_clicked();

    void on_rightBtn_clicked();

    void on_homeEditBtn_clicked();

    void on_textSize_2_returnPressed();

    void on_boldBtn_2_clicked();

    void on_italicBtn_2_clicked();

    void on_underlineBtn_2_clicked();

    void on_centerBtn_2_clicked();

    void on_leftBtn_2_clicked();

    void on_rightBtn_2_clicked();

    void on_redBtn_2_clicked();

    void on_orangeBtn_2_clicked();

    void on_yellowBtn_2_clicked();

    void on_greenBtn_2_clicked();

    void on_blueBtn_2_clicked();

    void on_purpleBtn_2_clicked();

    void on_pinkBtn_2_clicked();

    void on_brownBtn_2_clicked();

    void on_blackBtn_2_clicked();

    void on_grayBtn_2_clicked();

    void on_colorLine_2_returnPressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
