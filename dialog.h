#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDate>
#include <QDomDocument>
#include <QtCore>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>
#include <QTableWidget>
#include <QTableWidgetItem>

#define TableCount 7
namespace Ui {
    class Dialog;
}

class MyDocs {
public:
    QString Organ;
    QString AttRuk;
    QString DolAttRuk;
    QString ARM;
    QString Model;
    QString Number;
    QDate Year;
    QString AttNum;
    QString NTU;
    QString Room;
    QString Rasp;
    QString Addr;
    QString Status;
    bool Noise;
    bool bOrgan;
    bool bAttRuk;
    bool bDolAttRuk;
    bool bARM;
    bool bModel;
    bool bNumber;
    bool bYear;
    bool bAttNum;
    bool bNoise;
    bool bNTU;
    bool bRoom;
    bool bRasp;
    bool bAddr;
    bool bStatus;
    int  nStatus;
    char Table[TableCount+1];
    QTableWidget *TableWidget[TableCount+1];
    QString TableName[TableCount+1];
    int curtable;
    //registerField(pushButtonLoad);
    //registerField(pushButtonSave);
    //registerField(tableWidget);
    //registerField(tableWidgetPO);
    //registerField(tableWidgetSZI);
    //registerField(tableWidgetVTSS);
    //registerField(tableWidgetMCA);
    MyDocs();
    void SelectTable(const QString);
    bool EnableTable();
    void SetDefault();
    QString TableStyle[10]={".A1",".B1",".C1",".D1",".E1",".F1",".G1",".H1",".I1",".J1"};
};

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void init();
    ~Dialog();
    void status(const QString );
    void status(const uint = 0);
    char IsHeader;
    QString fileName;

private:
    MyDocs myData;
    QDomDocument domDoc;
    Ui::Dialog *ui;
    int selectAttribute(const QString);
    void SetNode(QDomNode& );
    void SetText(const QDomNode& , const QString );
    void SetText2(const QDomNode& , const QString , int );
//    void SetText1(const QDomElement& , const QString );

private slots:
    void on_Load_clicked();
    void on_Save_clicked();
    void Load();
    void Save();
    void traverseNode(const QDomNode& ,int);
    void on_pushARMp_clicked();
    void on_pushARMm_clicked();
    void on_pushPOp_clicked();
    void on_pushPOm_clicked();
    void on_pushSZIp_clicked();
    void on_pushSZIm_clicked();
    void on_pushVTSSp_clicked();
    void on_pushVTSSm_clicked();
    void on_pushKIAp_clicked();
    void on_pushKIAm_clicked();
    void on_pushCSCp_clicked();
    void on_pushCSCm_clicked();
    void on_pushRESULTp_clicked();
    void on_pushRESULTm_clicked();
};

#endif // DIALOG_H
