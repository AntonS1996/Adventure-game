#ifndef SHOPWINDOW_H
#define SHOPWINDOW_H

#include <QDialog>
#include <mainwindow.h>
#include <QObject>
#include <QAbstractListModel>

using namespace std;

class ShopModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit ShopModel(QObject *parent = 0) : QAbstractListModel(parent){

    }
    QList<shared_ptr<Item>> inventoryShop;
    QList<shared_ptr<Item>> getItems() {return inventoryShop;}
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    void addItem(shared_ptr<Item>);
    void buyItem(int index, Hero &hero);
};


namespace Ui {
class ShopWindow;
}

class ShopWindow : public QDialog
{
    Q_OBJECT

public:
    Hero* hero;
    explicit ShopWindow(Hero* h,QWidget *parent = 0);
    void ShowMoneyInShop();
    ~ShopWindow();

private:
    Ui::ShopWindow *ui;
    ShopModel model;

private slots:
    void on_closeButton_clicked();

    void on_BuyButton_clicked();


};

#endif // SHOPWINDOW_H
