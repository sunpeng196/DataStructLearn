#include "qtclouddemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtCloudDemo w;
	w.show();
	return a.exec();
}
