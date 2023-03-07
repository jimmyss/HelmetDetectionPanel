#include "camera.h"
#include "ui_camera.h"
#include "work.h"

Camera::Camera(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Camera)
{
	ui->setupUi(this);
}

Camera::~Camera()
{
	delete ui;
}

void Camera::on_backButton_clicked()
{
	this->close();
	Work* work = new Work;
	work->show();
}

void Camera::on_photoButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("choose image"), "", tr("Images(*.png *.bmp *.jpg *.tif *.gif);;AllFiles(*.*)"));
    if (filename.isEmpty())
    {
        return;
    }
    else
    {
        QImage img;
        if (!(img.load(filename))) //¼ÓÔØÍ¼Ïñ
        {
            QMessageBox::information(this, tr("fail to open the picture"), tr("fail to open the picture!"));
            return;
        }
        ui->pictureLabel->setPixmap(QPixmap::fromImage(img.scaled(ui->pictureLabel->size())));
    }
}