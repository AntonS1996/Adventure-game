#include "shopwindow.h"
#include "ui_shopwindow.h"
#include <QMessageBox>

ShopWindow::ShopWindow(Hero* h, QWidget *parent)
   : hero(h), QDialog(parent),
    ui(new Ui::ShopWindow)
{
    ui->setupUi(this);
    ShowMoneyInShop();
    model.addItem(make_shared<Food>("Сэндвич", "Прибавка к здоровью 5", 5, 30, "food"));
    model.addItem(make_shared<Food>("Кола", "Прибавка к здоровью 20", 20, 20, "food"));
    model.addItem(make_shared<Food>("Фрукт", "Прибавка к здоровью 15", 15, 15, "food"));
    ui->ShopView->setModel(&model);

}

ShopWindow::~ShopWindow()
{
    delete ui;
}


void ShopWindow::ShowMoneyInShop()
{
    ui->MoneyInShop->setText(QString::number(hero->money)+" мон.");
}

void ShopWindow::on_closeButton_clicked()
{
    accept();
}


QVariant ShopModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
        return inventoryShop[index.row()]->name;
    if(role == Qt::ToolTipRole)
        return inventoryShop[index.row()]->description;
    return QVariant();

}


int ShopModel::rowCount(const QModelIndex &parent) const
{
    return inventoryShop.size();
}

void ShopModel::addItem(shared_ptr<Item> items)
{
    inventoryShop.append(items);
}

void ShopWindow::on_BuyButton_clicked()
{
    QModelIndex currentIndex = ui->ShopView->currentIndex();
    if(!currentIndex.isValid())
     { return;}
    int currentRow = currentIndex.row();
    model.buyItem(currentRow,*hero);
    ShowMoneyInShop();
}

void ShopModel::buyItem(int index, Hero &hero)
{
    if (hero.checkMoney(this->inventoryShop[index]->cost))
    {
        hero.setMoney(-(this->inventoryShop[index]->cost));
        beginResetModel();
        hero.addItem(this->inventoryShop[index]);
        this->inventoryShop.removeAt(index);
        endResetModel();
    }
    else
    {
        QMessageBox msg;
        msg.setText("Слишком дорого");
        msg.exec();
    }
}

