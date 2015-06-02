#ifndef QTCLOUDDEMO_H
#define QTCLOUDDEMO_H

#include <QtWidgets/QMainWindow>
#include "ui_qtclouddemo.h"

class QtCloudDemo : public QMainWindow
{
	Q_OBJECT

public:
	QtCloudDemo(QWidget *parent = 0);
	~QtCloudDemo();

private:
	Ui::QtCloudDemoClass ui;
};

#endif // QTCLOUDDEMO_H
