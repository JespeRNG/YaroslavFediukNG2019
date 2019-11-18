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

void MainWindow::on_showInfo_clicked()
{
    QString ostype = "", oskernel = "", osarch = "";

    oskernel = QSysInfo::kernelVersion();
    ostype = QSysInfo::prettyProductName();
    osarch = QSysInfo::currentCpuArchitecture();

    //CPU
    QProcess linuxcpuinfo;

    linuxcpuinfo.start("bash", QStringList() << "-c" << "cat /proc/cpuinfo | grep 'model name' | uniq");
    linuxcpuinfo.waitForFinished();
    QString linuxCpuOutput = linuxcpuinfo.readAllStandardOutput();

    linuxCpuOutput.remove(0,12);
    linuxCpuOutput.replace(0,0, "CPU Info: ");
    //CPU

    //CPU CORES
    QProcess linuxcpucoresinfo;

    linuxcpucoresinfo.start("bash", QStringList() << "-c" << "cat /proc/cpuinfo | grep 'cpu cores' | uniq");
    linuxcpucoresinfo.waitForFinished();
    QString linuxCpuCOutput = linuxcpucoresinfo.readAllStandardOutput();

    linuxCpuCOutput.remove(0,12);
    linuxCpuCOutput.replace(0,0, "CPU Cores: ");
    //CPU CORES

    //GPU
    QProcess linuxgpuinfo;

    linuxgpuinfo.start("bash", QStringList() << "-c" << "nvidia-smi -q | grep 'Product Name' | uniq");
    linuxgpuinfo.waitForFinished();
    QString linuxGpuOutput = linuxgpuinfo.readAllStandardOutput();

    linuxGpuOutput.remove(0,37);
    linuxGpuOutput.replace(0,0, "GPU Info: ");
    //GPU

    //RAM
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
    //RAM

    ui->ostype->setText("OS Type: " + ostype);
    ui->oskernel->setText("OS Kernel: " + oskernel);
    ui->osarch->setText("CPU Achitecture: " + osarch);
    ui->cpuinfo->setText(linuxCpuOutput);
    ui->gpuinfo->setText(linuxGpuOutput);
    ui->cpucores->setText(linuxCpuCOutput);
    ui->raminfo->setText(linuxRamOutput);
}
