#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <windows.h>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    bool nativeEvent(const QByteArray &eventType,
                     void *message, long *result);

private:
    Ui::MainWindow *ui;

    UINT queryCancelAutoPlay;

    void handleDeviceInsert(int driveNum);
    void handleDeviceRemove(int driveNum);
};

#endif // MAINWINDOW_H
