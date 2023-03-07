#include "signup.h"
#include "ui_signup.h"
#include "principal.h"

Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_clicked()
{
    this->close();
    principal *p = new principal;
    p->show();
}
