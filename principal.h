#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QWidget>

namespace Ui {
class principal;
}

class principal : public QWidget
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = nullptr);
    ~principal();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
