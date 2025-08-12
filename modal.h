#ifndef MODAL_H
#define MODAL_H

#include <QDialog>
#include <vector>
using namespace std;

namespace Ui {
class Modal;
}

class Modal : public QDialog
{
    Q_OBJECT
    vector<string> imgs;
    int index;

public:
    explicit Modal(vector<string> v = {}, int i = 0, QWidget *parent = nullptr);

    ~Modal();

private slots:
    void displayImage(string path);

    void resizeImage();

    void on_modalBackBtn_clicked();

    void on_modalForwardBtn_clicked();

private:
    Ui::Modal *ui;
};

#endif // MODAL_H
