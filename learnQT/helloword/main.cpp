#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label("hello,world");
    label.show();

    return a.exec();
}
