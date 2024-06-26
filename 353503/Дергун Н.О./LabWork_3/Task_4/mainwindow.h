#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "hanoitower.h"

const int MAX_PARTS_NUM = 25; // because of RAM

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString solution_;
    HanoiTower tower;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

public slots:
    void slotUpdateResult();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
