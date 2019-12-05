#include <WindowManager.h>
#include <MainMenu.h>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UI::WindowManager w;
	w.show();
	w.ShowMainMenu();
	return a.exec();
}
