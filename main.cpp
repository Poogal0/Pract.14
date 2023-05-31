#define CONFIG_WIDTH "widthWindow"
#define CONFIG_HEIGHT "heightWindow"
#include <QtWidgets>
int main (int argc , char *argv[]){
	QApplication app (argc , argv);
	QMainWindow mainWin;
	mainWin.show();
	return app.exec();
}
