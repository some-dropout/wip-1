#include <ui_boot.h>

#include "boot.h"

Boot::Boot (QWidget *parent)
  : QMainWindow (parent)
  , ui (new Ui::Boot)
{
  ui->setupUi (this);
}

Boot::~Boot ()
{
  delete ui;
}
