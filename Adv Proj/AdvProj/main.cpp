#include "mainwindow.h"
#include <QApplication>
#include <QInputDialog>
#include <QLineEdit>
#include <QString>
#include <ctime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // srand(time(0));

    QString tmp;
    tmp = QInputDialog::getText(NULL, "Начало игры", "Введите имя вашего героя", QLineEdit::Normal, "Антон");
    QList<shared_ptr<Item>> empl;
    Game game(tmp, empl);
    MainWindow w(&game);
    w.show();

    return a.exec();
}
