#include "mainexe.h"
#include "ui_mainexe.h"

mainexe::mainexe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainexe)
{
    ui->setupUi(this);
    this->setWindowTitle("家谱管理系统");
}

mainexe::~mainexe()
{
    delete ui;
}
