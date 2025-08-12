#include "modal.h"
#include "ui_modal.h"

Modal::Modal(vector<string> v, int i, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Modal)
{
    ui->setupUi(this);
    imgs = v;
    index = i;
    ui->modalLabel->setScaledContents(true);
    displayImage(v[i]);
    resizeImage();
}

Modal::~Modal()
{
    delete ui;
}

void Modal::displayImage(string path){
    QPixmap pixmap = QString::fromStdString(path);
    ui->modalLabel->setPixmap(pixmap);

    resizeImage();
}

void Modal::resizeImage(){
    float wi = ui->modalLabel->width();
    float hi = ui->modalLabel->height();

    float ws = ui->modalScrollArea->width() - 12;
    float hs = ui->modalScrollArea->height() - 12;

    float scale;

    if(ws/hs > wi/hi){
        scale = hs/hi;
    }
    else{
        scale = ws/wi;
    }
    ui->modalLabel->resize(scale * ui->modalLabel->size());
    ui->modalScrollAreaContents->adjustSize();
}

void Modal::on_modalBackBtn_clicked()
{
    if(index == 0){
        index = imgs.size() - 1;
    }
    else{
        index --;
    }
    displayImage(imgs[index]);
    resizeImage();
}

void Modal::on_modalForwardBtn_clicked()
{
    if(index == imgs.size()-1){
        index = 0;
    }
    else{
        index ++;
    }
    displayImage(imgs[index]);
    resizeImage();
}
