#ifndef TOPLEVEL_H
#define TOPLEVEL_H

#include <QWidget>

namespace Ui {
class TopLevel;
}

class TopLevel : public QWidget
{
    Q_OBJECT

public:
    explicit TopLevel(QWidget *parent = 0);
    ~TopLevel();

private:
    Ui::TopLevel *ui;
};

#endif // TOPLEVEL_H
