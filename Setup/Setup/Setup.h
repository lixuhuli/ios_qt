#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Setup.h"

class Setup : public QMainWindow
{
    Q_OBJECT

public:
    Setup(QWidget *parent = Q_NULLPTR);

private:
    Ui::SetupClass ui;
};
