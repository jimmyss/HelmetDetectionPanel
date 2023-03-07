#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include <QCamera>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
	class Camera;
}

class Camera : public QWidget
{
	Q_OBJECT

public:
	explicit Camera(QWidget* parent = nullptr);
	~Camera();

private slots:
	void on_photoButton_clicked();

	void on_backButton_clicked();

private:
	Ui::Camera* ui;
};
#endif //CAMERA_H

