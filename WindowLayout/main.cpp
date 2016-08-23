#include "widget.h"
#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget window;
    QLabel *label = new QLabel(QApplication::translate("windowlayout", "Name:"));
    QLineEdit *lineedit = new QLineEdit();

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(label);
    layout->addWidget(lineedit);
    window.setLayout(layout);
    window.setWindowTitle(QApplication::translate("windowlayout", "Window Layout"));
    window.show();

    return app.exec();
}
