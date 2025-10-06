#include "mainwindow.h"
#include <QFileDialog>
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "gallery.h"
#include "modal.h"
#include <QStandardPaths>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //changing paths
    QString dataPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

    if(!QDir(dataPath).exists()){
        QDir().mkdir(dataPath);
    }

    string sitemapPath = dataPath.toStdString() + "/sitemap.txt";
    string categoriesPath = dataPath.toStdString() + "/categories.txt";
    string pagesPath = dataPath.toStdString() + "/pages.txt";
    string galleryPath = dataPath.toStdString() + "/gallery.txt";
    m = Maps(sitemapPath, categoriesPath, galleryPath, dataPath.toStdString());
    g = Gallery(galleryPath, dataPath.toStdString());

    //old code
    //m = Maps("../../maps/sitemap.txt", "../../maps/categories.txt", "../../maps/pages.txt");
    //g = Gallery("../../maps/gallery.txt");

    m.createPage("Home");
    m.updateMaps();

    currentPage = "Home";
    //back.push(make_pair("Home", ""));
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    string s = m.getText("Home");
    ui->TitleText->setHtml(QString::fromStdString(s));
    ui->TitleText->setReadOnly(true);
    ui->widget_10->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//switching between stacked widgets=============

void MainWindow::on_HomeButton_clicked()
{
    display("Home");
}

void MainWindow::on_CategoriesButton_clicked(){
    display("AllCategories");
}

void MainWindow::on_PagesButton_clicked()
{
    display("Sitemap");
}

//Home page=========================================
void MainWindow::on_TitleSave_clicked()
{
    QString s = ui->TitleText->toHtml();
    m.updatePage("Home", s.toStdString());
}

void MainWindow::on_TitleDiscard_clicked()
{
    string s = m.getText("Home");
    ui->TitleText->setText(QString::fromStdString(s));
}

//displaying content================================
void MainWindow::display(string name, string other){

    //back button
    if(back.empty()){
        back.push(make_pair(currentPage, other));
    }
    else if(back.top().first != currentPage){
        back.push(make_pair(currentPage, other));
    }

    currentPage = name;

    //displaying content
    //0-home 1-page 2-sitemap 3-category 4-all categories
    if (name=="Home"){
        ui->stackedWidget->setCurrentIndex(0);
        ui->TitleText->setReadOnly(true);
        ui->widget_10->hide();
    }
    else if(name=="Sitemap"){
        ui->stackedWidget->setCurrentIndex(2);
        ui->SiteList->clear();
        for(auto i = m.sitemap.begin(); i != m.sitemap.end(); i++){
            QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(i->first), ui->SiteList);
            ui->SiteList->addItem(item);
            if(!m.isPage(i->first)){
                item->setForeground(QBrush(QColor("blue")));}
        }
    }
    else if(name=="AllCategories"){
        ui->stackedWidget->setCurrentIndex(4);
        ui->AllList->clear();
        for(auto i = m.categories.begin(); i != m.categories.end(); i++){
            QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(i->first), ui->AllList);
            ui->AllList->addItem(item);
            if(!m.isPage(i->first)){
                item->setForeground(QBrush(QColor("blue")));}
        }
    }
    else if (name=="Search" && other != ""){
        ui->stackedWidget->setCurrentIndex(5);
        ui->SearchTitle->setText("Search- " + ui->SeachLine->text());
        vector<pair<string, string>> v = searchHelper(other);

        for(int i = 0; i < v.size(); i++){
            QListWidgetItem* item;
            if (v[i].second.empty()){
                item = new QListWidgetItem(QString::fromStdString(v[i].first), ui->SearchList);
            }
            else{
                item = new QListWidgetItem(QString::fromStdString(v[i].first + ": " + v[i].second), ui->SearchList);
            }
            ui->SearchList->addItem(item);
        }
         ui->SeachLine->clear();
    }
    else if (name == "Gallery" && other != ""){//relocate to displayGallery function?
        //test string
        ui->galleryTitle->setText(QString::fromStdString(other));
        vector<string> v = g.getImages(other);

        ui->stackedWidget->setCurrentIndex(6);
        ui->galleryTable->clear();
        ui->galleryTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        //formatting gallery table
        ui->galleryTable->setColumnCount(4);
        ui->galleryTable->setRowCount(v.size()/4 + 1);
        int colWidth = ui->galleryTable->columnWidth(0);
        for (int i = 0; i < v.size() + 1; i++){
            ui->galleryTable->setRowHeight(i, colWidth);
        }

        //adding images
        int count = 0;
        QImage img = QImage();
        for(int i = 0; i<v.size(); i++){
            bool loaded = img.load(QString::fromStdString(v[i]));
            if(loaded){

                //resizing image
                int w = img.width();
                int h = img.height();
                if(w>h){
                    img = img.scaledToWidth(ui->galleryTable->columnWidth(0));
                }
                else{
                    img = img.scaledToHeight(ui->galleryTable->rowHeight(0));
                }

                QTableWidgetItem *thumbnail = new QTableWidgetItem;
                thumbnail->setData(Qt::DecorationRole, QPixmap::fromImage(img));
                ui->galleryTable->setItem(count/4, count%4, thumbnail);
                count++;
            }
        }
    }
    else if (m.sitemap.find(name) != m.sitemap.end()){
        char type = m.sitemap[name][m.homePath.size() + 1];
        if(type=='c'){ //display category
            ui->stackedWidget->setCurrentIndex(3);
            ui->CatList->clear();
            ui->CatTitle->setText(QString::fromStdString(name));
            for (int i = 0; i < m.categories[name].size(); i++){
                QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(m.categories[name][i]), ui->CatList);
                ui->CatList->addItem(item);
                if(!m.isPage(m.categories[name][i])){
                    item->setForeground(QBrush(QColor("blue")));}
            }
        }
        else if (type=='p'){
            ui->stackedWidget->setCurrentIndex(1); //display page
            ui->PageTitle->setHtml(QString::fromStdString(name));
            string s = m.getText(name);
            ui->PageText->setText(QString::fromStdString(s));
            ui->widget->hide();
            ui->PageText->setReadOnly(true);
            ui->PageTitle->setReadOnly(true);
        }
    }
}
//Category page======================================

void MainWindow::on_CatAdd_clicked()
{
    string s = ui->CatLineEdit->text().toStdString();
    bool result;
    if (ui->CatPageRadio->isChecked()){
        result = m.addToCategory(s, currentPage);
    }
    else{
        result = m.addToCategory(s, currentPage,'c');
    }
    if(result){
        ui->CatResult->setPlainText("Successfully added");
    }
    else{
        ui->CatResult->setPlainText("Could not add- check for invalid characters");
    }
    m.updateMaps();
    display(currentPage);
}


void MainWindow::on_CatDelete_clicked()
{
    string s = ui->CatLineEdit->text().toStdString();
    m.removeFromCategory(s, currentPage);
    ui->CatResult->document()->clear();
    m.updateMaps();
    display(currentPage);
}

void MainWindow::on_CatDeleteFromWiki_clicked()
{
    string s = ui->CatLineEdit->text().toStdString();
    m.removeFromCategory(s, currentPage);
    m.removeFromWiki(s);
    g.deletePage(s);
    ui->CatResult->document()->clear();
    m.updateMaps();
    display(currentPage);
}

void MainWindow::on_CatList_itemClicked(QListWidgetItem *item)
{
    QString s = item->text();
    ui->CatLineEdit->setText(s);
    if(m.isPage(s.toStdString())){
        ui->CatPageRadio->setChecked(true);
    }
    else{
        ui->CatCatRadio->setChecked(true);
    }
}

void MainWindow::on_CatList_itemDoubleClicked(QListWidgetItem *item)
{
    display(item->text().toStdString());
}

//All Categories page==========================================
void MainWindow::on_AllList_itemClicked(QListWidgetItem *item)
{
    QString s = item->text();
    ui->AllLineEdit->setText(s);
}

void MainWindow::on_AllAdd_clicked()
{
    QString s = ui->AllLineEdit->text();
    bool result = m.createCategory(s.toStdString());
    if(!result){
        ui->AllResult->document()->setPlainText("Unable to add category.");
    }
    else{
        m.updateMaps();
        ui->AllResult->document()->clear();
        ui->AllList->clear();
        for(auto i = m.categories.begin(); i != m.categories.end(); i++){
            QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(i->first), ui->AllList);
            ui->AllList->addItem(item);
        }
    }
}

void MainWindow::on_AllDelete_clicked()
{
    string s = ui->AllLineEdit->text().toStdString();
    if(s=="Home"){
        ui->AllResult->document()->setPlainText("Can't delete home page.");
    }
    else if(m.isPage(s)){
        ui->AllResult->document()->setPlainText("Page is not a category.");
    }
    else{
        bool result = m.removeFromWiki(s);
        if(!result){
            ui->AllResult->document()->setPlainText("Could not delete. Category does not exist");
        }
        else{
            ui->AllResult->document()->clear();
            m.updateMaps();
        }
    }
    display("AllCategories");
}

void MainWindow::on_AllList_itemDoubleClicked(QListWidgetItem *item)
{
    QString s = item->text();
    display(s.toStdString());
}

//Pages========================================================
void MainWindow::on_PageSave_clicked()
{
    //if page has been renamed
    string title = ui->PageTitle->toPlainText().toStdString();
    if(title!=currentPage){
        bool b = m.renamePage(currentPage, title);
        if(b){
            g.galleryMap[title]=g.galleryMap[currentPage];
            g.galleryMap.erase(currentPage);
            currentPage = title;
            m.updateMaps();
        }
    }
    QString s = ui->PageText->toHtml();
    m.updatePage(currentPage, s.toStdString());
}

void MainWindow::on_PageDiscard_clicked()
{
    string s = m.getText(currentPage);
    ui->PageText->setText(QString::fromStdString(s));
}

//text formatting
void MainWindow::on_boldBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();

    if (format.font().bold()) {
        format.setFontWeight(QFont::Normal);
    } else {
        format.setFontWeight(QFont::Bold);
    }

    cursor.mergeCharFormat(format);
    ui->PageText->setTextCursor(cursor);
}

void MainWindow::on_italicBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();

    if (format.fontItalic()) {
        format.setFontItalic(false);
    } else {
        format.setFontItalic(true);
    }

    cursor.mergeCharFormat(format);
    ui->PageText->setTextCursor(cursor);
}

void MainWindow::on_underlineBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();

    if (format.fontUnderline()) {
        format.setFontUnderline(false);
    } else {
        format.setFontUnderline(true);
    }

    cursor.mergeCharFormat(format);
    ui->PageText->setTextCursor(cursor);
}



void MainWindow::on_redBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("red")));
    cursor.setCharFormat( format );
}

void MainWindow::on_orangeBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("orange")));
    cursor.setCharFormat( format );
}


void MainWindow::on_yellowBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("yellow")));
    cursor.setCharFormat( format );
}


void MainWindow::on_greenBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("green")));
    cursor.setCharFormat( format );
}


void MainWindow::on_blueBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("blue")));
    cursor.setCharFormat( format );
}


void MainWindow::on_purpleBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("purple")));
    cursor.setCharFormat( format );
}


void MainWindow::on_pinkBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("pink")));
    cursor.setCharFormat( format );
}


void MainWindow::on_brownBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("brown")));
    cursor.setCharFormat( format );
}


void MainWindow::on_blackBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("black")));
    cursor.setCharFormat( format );
}


void MainWindow::on_grayBtn_clicked()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("gray")));
    cursor.setCharFormat( format );
}

void MainWindow::on_colorLine_returnPressed()
{
    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    QString colorName = ui->colorLine->text();
    QColor color = QColor::fromString(colorName);
    format.setForeground(QBrush(color));
    cursor.setCharFormat( format );
}

void MainWindow::on_textSize_returnPressed()
{
    string s = ui->textSize->text().toStdString();
    if (s.size() > 3){
        return;
    }
    for (int i = 0; i<s.size(); i++){
        if (!isdigit(s[i])){
            return;
        }
    }

    int num = stoi(s);
    if (num < 1){
        return;
    }

    auto cursor = ui->PageText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setFontPointSize(num);
    cursor.setCharFormat( format );
}


void MainWindow::on_centerBtn_clicked()
{
    ui->PageText->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_leftBtn_clicked()
{
    ui->PageText->setAlignment(Qt::AlignLeft);
}


void MainWindow::on_rightBtn_clicked()
{
    ui->PageText->setAlignment(Qt::AlignRight);
}

void MainWindow::on_editPgBtn_clicked()
{
    if(ui->widget->isHidden()){
        ui->widget->show();
        ui->PageText->setReadOnly(false);
        ui->PageTitle->setReadOnly(false);
    }
    else{
        ui->widget->hide();
        ui->PageText->setReadOnly(true);
        ui->PageTitle->setReadOnly(true);
    }
}

//Sitemap==================================================

void MainWindow::on_SiteList_itemDoubleClicked(QListWidgetItem *item)
{
    QString s = item->text();
    display(s.toStdString());
}

void MainWindow::on_SiteList_itemClicked(QListWidgetItem *item)
{
    // QString s = item->text();
    // display(s.toStdString());
}

//back/forwards===========================================
void MainWindow::on_LeftButton_clicked()
{
    if(!back.empty()){
        display(back.top().first, back.top().second);
        forward.push(back.top());
        back.pop();
    }
}


void MainWindow::on_RightButton_clicked()
{
    if(!forward.empty()){
        display(forward.top().first, forward.top().second);
        back.push(forward.top());
        forward.pop();
    }
}

vector<pair<string, string>> MainWindow::searchHelper(string searchTerm){
    vector<pair<string, string>> v;
    //check if page with that name exists
    if(m.sitemap.find(searchTerm) != m.sitemap.end()){
        v.push_back(make_pair(searchTerm, ""));
    }

    //check page contents
    int count = 0;
    for (auto i = m.sitemap.begin(); i != m.sitemap.end(); i++){
        if(count>30){
            break;
        }
        if(i->first != searchTerm){
            count++;
            string s = m.getText(i->first);
            ui->PageText->setText(QString::fromStdString(s));
            s = ui->PageText->toPlainText().toStdString();
            ui->PageText->clear();
            int pos = s.find(searchTerm);
            if(pos != std::string::npos){
                s = s.substr(pos, 20);
                if (s[s.size()-1] == '\n')
                {
                    s=s.substr(0,s.size()-1);
                }
                if (s.size()==20)
                {
                    s = "..." + s + "...";
                }
                if (s.size()!=0)
                {
                    s = "\"" + s + "\"";
                }
                v.push_back(make_pair(i->first, s));
            }
        }
    }
    return v;
}

void MainWindow::on_SearchButton_clicked() //change to use display function
{
    if(!ui->SeachLine->text().isEmpty()){
        ui->SearchList->clear();
        string searchTerm = ui->SeachLine->text().toStdString();
        display("Search", searchTerm);
    }
}


void MainWindow::on_SearchList_itemClicked(QListWidgetItem *item)
{
    string lineText = item->text().toStdString();
    string name = "";
    int i = 0;
    while(lineText[i]!=':' && i<lineText.size()){
        name = name + lineText[i];
        i++;
    }
    display(name);
}

//Gallery======================================================



void MainWindow::on_pushButton_clicked() //gallery
{
    display("Gallery", currentPage);
}

void MainWindow::on_GalleryAddBtn_clicked()
{
    string pageName = ui->galleryTitle->text().toStdString();
    QString filter = "PNG (*.png) ;; JPG (*.jpg) ;; JPEG (*.jpeg)";
    QString fileName = QFileDialog::getOpenFileName(this, "Select an image", "C://", filter);
    bool result = g.addImage(pageName, fileName.toStdString());
    if(result){
        display("Gallery", pageName);
    }
    string s = g.makeFileName("page name", fileName.toStdString());
}

void MainWindow::on_GalleryDeleteBtn_clicked()
{
    if(ui->galleryTable->selectedItems().empty()){
        QMessageBox::information(this, "..", "no item selected");
    }
    else{
        QTableWidgetItem* item = ui->galleryTable->currentItem();
        string pageName = ui->galleryTitle->text().toStdString();
        int row = item->row();
        int col = item->column();
        int index = row*4 + col;
        g.deleteImage(pageName, g.getImages(pageName)[index]);
        display("Gallery", pageName);
    }
}

void MainWindow::on_galleryTable_itemDoubleClicked(QTableWidgetItem *item)
{
    item->setSelected(false);
    if (!item->data(Qt::DecorationRole).isNull()){
        int row = item->row();
        int col = item->column();
        int index = row*4 + col;
        string pageName = ui->galleryTitle->text().toStdString();
        Modal m = Modal(g.getImages(pageName), index);
        m.setModal(true);
        m.exec();
    }
}



// void MainWindow::on_pushButton_2_clicked(){
//     //fml
// }


// void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
// {
//     //um
// }

//home page text edit

void MainWindow::on_homeEditBtn_clicked()
{
    if(ui->widget_10->isHidden()){
        ui->widget_10->show();
        ui->TitleText->setReadOnly(false);
    }
    else{
        ui->widget_10->hide();
        ui->TitleText->setReadOnly(true);
    }
}


void MainWindow::on_textSize_2_returnPressed()
{
    string s = ui->textSize_2->text().toStdString();
    if (s.size() > 3){
        return;
    }
    for (int i = 0; i<s.size(); i++){
        if (!isdigit(s[i])){
            return;
        }
    }

    int num = stoi(s);
    if (num < 1){
        return;
    }

    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setFontPointSize(num);
    cursor.setCharFormat( format );
}


void MainWindow::on_boldBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();

    if (format.font().bold()) {
        format.setFontWeight(QFont::Normal);
    } else {
        format.setFontWeight(QFont::Bold);
    }

    cursor.mergeCharFormat(format);
    ui->TitleText->setTextCursor(cursor);
}


void MainWindow::on_italicBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();

    if (format.fontItalic()) {
        format.setFontItalic(false);
    } else {
        format.setFontItalic(true);
    }

    cursor.mergeCharFormat(format);
    ui->TitleText->setTextCursor(cursor);
}


void MainWindow::on_underlineBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();

    if (format.fontUnderline()) {
        format.setFontUnderline(false);
    } else {
        format.setFontUnderline(true);
    }

    cursor.mergeCharFormat(format);
    ui->TitleText->setTextCursor(cursor);
}


void MainWindow::on_centerBtn_2_clicked()
{
    ui->TitleText->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_leftBtn_2_clicked()
{
    ui->TitleText->setAlignment(Qt::AlignLeft);
}


void MainWindow::on_rightBtn_2_clicked()
{
    ui->TitleText->setAlignment(Qt::AlignRight);
}


void MainWindow::on_redBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("red")));
    cursor.setCharFormat( format );
}


void MainWindow::on_orangeBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("orange")));
    cursor.setCharFormat( format );
}


void MainWindow::on_yellowBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("yellow")));
    cursor.setCharFormat( format );
}


void MainWindow::on_greenBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("green")));
    cursor.setCharFormat( format );
}


void MainWindow::on_blueBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("blue")));
    cursor.setCharFormat( format );
}


void MainWindow::on_purpleBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("purple")));
    cursor.setCharFormat( format );
}


void MainWindow::on_pinkBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("pink")));
    cursor.setCharFormat( format );
}


void MainWindow::on_brownBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("brown")));
    cursor.setCharFormat( format );
}


void MainWindow::on_blackBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("black")));
    cursor.setCharFormat( format );
}


void MainWindow::on_grayBtn_2_clicked()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setForeground(QBrush(QColor("gray")));
    cursor.setCharFormat( format );
}


void MainWindow::on_colorLine_2_returnPressed()
{
    auto cursor = ui->TitleText->textCursor();
    QTextCharFormat format = cursor.charFormat();
    QString colorName = ui->colorLine_2->text();
    QColor color = QColor::fromString(colorName);
    format.setForeground(QBrush(color));
    cursor.setCharFormat( format );
}

