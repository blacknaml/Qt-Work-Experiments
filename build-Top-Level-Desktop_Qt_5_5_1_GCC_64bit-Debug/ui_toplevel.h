/********************************************************************************
** Form generated from reading UI file 'toplevel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPLEVEL_H
#define UI_TOPLEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopLevel
{
public:

    void setupUi(QWidget *TopLevel)
    {
        if (TopLevel->objectName().isEmpty())
            TopLevel->setObjectName(QStringLiteral("TopLevel"));
        TopLevel->resize(400, 300);

        retranslateUi(TopLevel);

        QMetaObject::connectSlotsByName(TopLevel);
    } // setupUi

    void retranslateUi(QWidget *TopLevel)
    {
        TopLevel->setWindowTitle(QApplication::translate("TopLevel", "TopLevel", 0));
    } // retranslateUi

};

namespace Ui {
    class TopLevel: public Ui_TopLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPLEVEL_H
