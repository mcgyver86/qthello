/* qt5-test.cpp */
#include <QApplication>
#include <QLabel>
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hallo Qt Noscreen\n");
        QApplication app(argc, argv);
        QLabel label("Hello, World!");

        label.resize(400, 200);
        label.show();

	printf("app is running\n");

        return app.exec();
}
