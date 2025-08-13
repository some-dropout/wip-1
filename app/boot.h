#ifndef BOOT_H
#define BOOT_H

#include <qmainwindow.h>

QT_BEGIN_NAMESPACE

namespace Ui
{
  class Boot;
}

QT_END_NAMESPACE

class Boot
  : public QMainWindow
{
  Q_OBJECT

public:
  explicit
  Boot (QWidget *parent = nullptr);

  virtual
  ~Boot ();

private:
  Ui::Boot *ui;
};

#endif  /* BOOT_H */
