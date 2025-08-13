#include <qapplication.h>

#include "boot.h"

int
main (int argc, char *argv[])
{
  QApplication app (argc, argv);
  Boot boot;

  boot.setWindowTitle ("021X 0211L 02H0X 02F0X 1.2.11   R");
  boot.show ();

  return app.exec ();
}
