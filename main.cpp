#include "mainwindow.h"
#include <QApplication>
#include <interactiveview.h>
#include <qgraphicsscene.h>
#include<QGraphicsRectItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    QGraphicsScene scene;
//    QGraphicsRectItem *item = new QGraphicsRectItem(0,0,100,100);
//    scene.addItem (item);

//   InteractiveView view;
//    view.setScene (&scene);
//   view.resize (500,600);
//   view.show ();
    return a.exec();
}
