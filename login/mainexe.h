#ifndef MAINEXE_H
#define MAINEXE_H

#include <QWidget>

namespace Ui {
class mainexe;
}

class mainexe : public QWidget
{
    Q_OBJECT

public:
    explicit mainexe(QWidget *parent = nullptr);
    ~mainexe();

private:
    Ui::mainexe *ui;
};

#endif // MAINEXE_H
