#include "navigator.h"
#include "ui_navigator.h"
#include "qdebug.h"

Navigator::Navigator(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Navigator)
{
    ui->setupUi(this);


    buttons<<this->ui->BTNEvent<<this->ui->BTNSetting<<this->ui->BTNMaintaince<<this->ui->BTNByPass<<this->ui->BTNArriveB
            <<this->ui->BTNLeaveB<<this->ui->BTNSkipback<<this->ui->BTNSkipforward<<this->ui->BTNSpare2<<this->ui->BTNHome;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(pressed()), this, SLOT(NBpressEvent()));
    }
}

Navigator::~Navigator()
{
    delete ui;
}

void Navigator::NBpressEvent()
{
    QString BTNname = ((QPushButton *)this->sender())->objectName();

    if(BTNname == "BTNEvent")
    {
        changePage(uVehicleFaultEventPage);
    }else if(BTNname == "BTNSetting")
    {
        changePage(uVehiclePasswordPage);
    }else if(BTNname == "BTNMaintaince")
    {
        changePage(uVehicleMaintainPage);

    }else if(BTNname == "BTNByPass")
    {
        changePage(uVehicleByPassPage);
    }else if(BTNname == "BTNLeaveB")
    {

    }else if(BTNname == "BTNSkipback")
    {

    }else if(BTNname == "BTNSkipforward")
    {


    }else if(BTNname == "BTNHome")
    {
        changePage(uVehicleTrainArea);
    }else
    {

    }
    this->ui->BTNHome->setStyleSheet("border-image: url(:/images/image/Home.png);");
}

void Navigator::refreshAllButtons()
{
    foreach(QPushButton* button,buttons)
    {
        button->setStyleSheet(NButtonUP);
    }
}
