#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSysInfo>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMainWindow::setFixedSize(645, 445);
}

MainWindow::~MainWindow()
{
    delete ui;

}

QString cpuinfo ()
{
    QProcess linuxcpuinfo;

    linuxcpuinfo.start("bash", QStringList() << "-c" << "cat /proc/cpuinfo | grep 'model name' | uniq");
    linuxcpuinfo.waitForFinished();
    QString linuxCpuOutput = linuxcpuinfo.readAllStandardOutput();

    linuxCpuOutput.remove(0,12);
    linuxCpuOutput.replace(0,0, "CPU Info: ");

    return linuxCpuOutput;
}

QString gpuinfo()
{
    QProcess linuxgpuinfo;

    linuxgpuinfo.start("bash", QStringList() << "-c" << "nvidia-smi -q | grep 'Product Name' | uniq");
    linuxgpuinfo.waitForFinished();
    QString linuxGpuOutput = linuxgpuinfo.readAllStandardOutput();

    linuxGpuOutput.remove(0,37);
    linuxGpuOutput.replace(0,0, "GPU Info: ");

    return linuxGpuOutput;
}

QString cpucores()
{
    QProcess linuxcpucoresinfo;

    linuxcpucoresinfo.start("bash", QStringList() << "-c" << "cat /proc/cpuinfo | grep 'cpu cores' | uniq");
    linuxcpucoresinfo.waitForFinished();
    QString linuxCpuCOutput = linuxcpucoresinfo.readAllStandardOutput();

    linuxCpuCOutput.remove(0,12);
    linuxCpuCOutput.replace(0,0, "CPU Cores: ");

    return linuxCpuCOutput;
}

QString raminfo()
{
    QProcess linuxraminfo;

    linuxraminfo.start("bash", QStringList() << "-c" << "cat /proc/meminfo | grep 'MemTotal' | uniq");
    linuxraminfo.waitForFinished();
    QString linuxRamOutput = linuxraminfo.readAllStandardOutput();

    linuxRamOutput.remove(0,17);
    linuxRamOutput.remove("kB");

    double ramsize = 0;

    ramsize = QString(linuxRamOutput).toDouble();
    linuxRamOutput = QString::number(ramsize, 'f', 2);
    ramsize = ramsize / 1000000;
    linuxRamOutput = QString::number(ramsize, 'g', 4);


    linuxRamOutput.replace(0,0, "RAM: ");
    linuxRamOutput = linuxRamOutput + " GB";

    return linuxRamOutput;
}

QString os_details(int a)
{
    QString ostype = "", oskernel = "", osarch = "";

    oskernel = QSysInfo::kernelVersion();
    ostype = QSysInfo::prettyProductName();
    osarch = QSysInfo::currentCpuArchitecture();

    switch (a)
    {
        case 1: return oskernel;
        case 2: return ostype;
        case 3: return osarch;
    }
}

void MainWindow::on_showInfo_clicked()
{
    ui->ostype->setText("OS Type: " + os_details(2));
    ui->oskernel->setText("OS Kernel: " + os_details(1));
    ui->osarch->setText("OS Architecture: " + os_details(3));
    ui->cpuinfo->setText(cpuinfo());
    ui->gpuinfo->setText(gpuinfo());
    ui->cpucores->setText(cpucores());
    ui->raminfo->setText(raminfo());
}
