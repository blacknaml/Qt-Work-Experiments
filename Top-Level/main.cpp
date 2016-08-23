#include "toplevel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TopLevel window;
    window.resize(620, 240);
    window.show();
    window.setWindowTitle(
                QApplication::translate("toplevel", "Top-level Widget"));

    return app.exec();
}
