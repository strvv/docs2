/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tabHead_2;
    QLabel *labelOrgan_2;
    QLineEdit *lineEditOrgan_2;
    QLabel *labelDolAttRuk_2;
    QLineEdit *lineEditDolAttRuk_2;
    QLabel *labelARM_2;
    QLineEdit *lineEditARM_2;
    QDateEdit *dateYear_2;
    QLabel *labelYear_2;
    QLabel *labelAttNum_2;
    QLineEdit *lineEditAttNum_2;
    QLabel *labelModel_2;
    QLineEdit *lineEditModel_2;
    QLineEdit *lineEditNumber_2;
    QLabel *labelNumber_2;
    QLabel *labelAttRuk_2;
    QLineEdit *lineEditAttRuk_2;
    QPushButton *Load;
    QPushButton *Save;
    QLabel *labelNTU_2;
    QLineEdit *lineEditNTU_2;
    QLabel *labelRoom_2;
    QLineEdit *lineEditRoom_2;
    QLabel *labelRasp_2;
    QLineEdit *lineEditRasp_2;
    QLabel *labelAddr_2;
    QLineEdit *lineEditAddr_2;
    QWidget *tabARM;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelArm;
    QPushButton *pushARMp;
    QPushButton *pushARMm;
    QTableWidget *tableARM;
    QWidget *tabPO;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPO;
    QPushButton *pushPOp;
    QPushButton *pushPOm;
    QTableWidget *tablePO;
    QWidget *tabSZI;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelSZI;
    QCheckBox *checkBoxNoise;
    QPushButton *pushSZIp;
    QPushButton *pushSZIm;
    QTableWidget *tableSZI;
    QWidget *tabVTSS;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelVTSS;
    QPushButton *pushVTSSp;
    QPushButton *pushVTSSm;
    QTableWidget *tableVTSS;
    QWidget *tabKIA;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelKIA;
    QPushButton *pushKIAp;
    QPushButton *pushKIAm;
    QTableWidget *tableKIA;
    QWidget *tabResult;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelResult;
    QPushButton *pushRESULTp;
    QPushButton *pushRESULTm;
    QTableWidget *tableResult;
    QWidget *tabCSC;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelCSC;
    QPushButton *pushCSCp;
    QPushButton *pushCSCm;
    QTableWidget *tableCSC;
    QLabel *Status;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1024, 580);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1024, 550));
        tabHead_2 = new QWidget();
        tabHead_2->setObjectName(QString::fromUtf8("tabHead_2"));
        labelOrgan_2 = new QLabel(tabHead_2);
        labelOrgan_2->setObjectName(QString::fromUtf8("labelOrgan_2"));
        labelOrgan_2->setGeometry(QRect(10, 10, 161, 16));
        lineEditOrgan_2 = new QLineEdit(tabHead_2);
        lineEditOrgan_2->setObjectName(QString::fromUtf8("lineEditOrgan_2"));
        lineEditOrgan_2->setGeometry(QRect(180, 10, 501, 20));
        labelDolAttRuk_2 = new QLabel(tabHead_2);
        labelDolAttRuk_2->setObjectName(QString::fromUtf8("labelDolAttRuk_2"));
        labelDolAttRuk_2->setGeometry(QRect(10, 40, 151, 16));
        lineEditDolAttRuk_2 = new QLineEdit(tabHead_2);
        lineEditDolAttRuk_2->setObjectName(QString::fromUtf8("lineEditDolAttRuk_2"));
        lineEditDolAttRuk_2->setGeometry(QRect(180, 40, 501, 20));
        labelARM_2 = new QLabel(tabHead_2);
        labelARM_2->setObjectName(QString::fromUtf8("labelARM_2"));
        labelARM_2->setGeometry(QRect(10, 100, 161, 16));
        lineEditARM_2 = new QLineEdit(tabHead_2);
        lineEditARM_2->setObjectName(QString::fromUtf8("lineEditARM_2"));
        lineEditARM_2->setGeometry(QRect(180, 100, 501, 20));
        dateYear_2 = new QDateEdit(tabHead_2);
        dateYear_2->setObjectName(QString::fromUtf8("dateYear_2"));
        dateYear_2->setGeometry(QRect(180, 310, 91, 22));
        labelYear_2 = new QLabel(tabHead_2);
        labelYear_2->setObjectName(QString::fromUtf8("labelYear_2"));
        labelYear_2->setGeometry(QRect(10, 310, 161, 16));
        labelAttNum_2 = new QLabel(tabHead_2);
        labelAttNum_2->setObjectName(QString::fromUtf8("labelAttNum_2"));
        labelAttNum_2->setGeometry(QRect(10, 340, 171, 16));
        lineEditAttNum_2 = new QLineEdit(tabHead_2);
        lineEditAttNum_2->setObjectName(QString::fromUtf8("lineEditAttNum_2"));
        lineEditAttNum_2->setGeometry(QRect(180, 340, 501, 20));
        labelModel_2 = new QLabel(tabHead_2);
        labelModel_2->setObjectName(QString::fromUtf8("labelModel_2"));
        labelModel_2->setGeometry(QRect(10, 130, 161, 16));
        lineEditModel_2 = new QLineEdit(tabHead_2);
        lineEditModel_2->setObjectName(QString::fromUtf8("lineEditModel_2"));
        lineEditModel_2->setGeometry(QRect(180, 130, 501, 20));
        lineEditNumber_2 = new QLineEdit(tabHead_2);
        lineEditNumber_2->setObjectName(QString::fromUtf8("lineEditNumber_2"));
        lineEditNumber_2->setGeometry(QRect(180, 160, 501, 20));
        labelNumber_2 = new QLabel(tabHead_2);
        labelNumber_2->setObjectName(QString::fromUtf8("labelNumber_2"));
        labelNumber_2->setGeometry(QRect(10, 160, 161, 16));
        labelAttRuk_2 = new QLabel(tabHead_2);
        labelAttRuk_2->setObjectName(QString::fromUtf8("labelAttRuk_2"));
        labelAttRuk_2->setGeometry(QRect(10, 70, 161, 16));
        lineEditAttRuk_2 = new QLineEdit(tabHead_2);
        lineEditAttRuk_2->setObjectName(QString::fromUtf8("lineEditAttRuk_2"));
        lineEditAttRuk_2->setGeometry(QRect(180, 70, 501, 20));
        Load = new QPushButton(tabHead_2);
        Load->setObjectName(QString::fromUtf8("Load"));
        Load->setGeometry(QRect(10, 360, 75, 23));
        Save = new QPushButton(tabHead_2);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(610, 360, 75, 23));
        labelNTU_2 = new QLabel(tabHead_2);
        labelNTU_2->setObjectName(QString::fromUtf8("labelNTU_2"));
        labelNTU_2->setGeometry(QRect(10, 190, 161, 16));
        lineEditNTU_2 = new QLineEdit(tabHead_2);
        lineEditNTU_2->setObjectName(QString::fromUtf8("lineEditNTU_2"));
        lineEditNTU_2->setGeometry(QRect(180, 190, 501, 20));
        labelRoom_2 = new QLabel(tabHead_2);
        labelRoom_2->setObjectName(QString::fromUtf8("labelRoom_2"));
        labelRoom_2->setGeometry(QRect(10, 220, 161, 16));
        lineEditRoom_2 = new QLineEdit(tabHead_2);
        lineEditRoom_2->setObjectName(QString::fromUtf8("lineEditRoom_2"));
        lineEditRoom_2->setGeometry(QRect(180, 220, 501, 20));
        labelRasp_2 = new QLabel(tabHead_2);
        labelRasp_2->setObjectName(QString::fromUtf8("labelRasp_2"));
        labelRasp_2->setGeometry(QRect(10, 250, 141, 16));
        lineEditRasp_2 = new QLineEdit(tabHead_2);
        lineEditRasp_2->setObjectName(QString::fromUtf8("lineEditRasp_2"));
        lineEditRasp_2->setGeometry(QRect(180, 250, 501, 20));
        labelAddr_2 = new QLabel(tabHead_2);
        labelAddr_2->setObjectName(QString::fromUtf8("labelAddr_2"));
        labelAddr_2->setGeometry(QRect(10, 280, 161, 16));
        lineEditAddr_2 = new QLineEdit(tabHead_2);
        lineEditAddr_2->setObjectName(QString::fromUtf8("lineEditAddr_2"));
        lineEditAddr_2->setGeometry(QRect(180, 280, 501, 20));
        tabWidget->addTab(tabHead_2, QString());
        tabARM = new QWidget();
        tabARM->setObjectName(QString::fromUtf8("tabARM"));
        verticalLayout_2 = new QVBoxLayout(tabARM);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, 0);
        labelArm = new QLabel(tabARM);
        labelArm->setObjectName(QString::fromUtf8("labelArm"));
        labelArm->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(labelArm);

        pushARMp = new QPushButton(tabARM);
        pushARMp->setObjectName(QString::fromUtf8("pushARMp"));
        pushARMp->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(pushARMp);

        pushARMm = new QPushButton(tabARM);
        pushARMm->setObjectName(QString::fromUtf8("pushARMm"));
        pushARMm->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(pushARMm);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tableARM = new QTableWidget(tabARM);
        tableARM->setObjectName(QString::fromUtf8("tableARM"));
        tableARM->horizontalHeader()->setCascadingSectionResizes(true);
        tableARM->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableARM);

        tabWidget->addTab(tabARM, QString());
        tabPO = new QWidget();
        tabPO->setObjectName(QString::fromUtf8("tabPO"));
        verticalLayout_7 = new QVBoxLayout(tabPO);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 0, 0);
        labelPO = new QLabel(tabPO);
        labelPO->setObjectName(QString::fromUtf8("labelPO"));

        horizontalLayout_5->addWidget(labelPO);

        pushPOp = new QPushButton(tabPO);
        pushPOp->setObjectName(QString::fromUtf8("pushPOp"));
        pushPOp->setMaximumSize(QSize(50, 50));

        horizontalLayout_5->addWidget(pushPOp);

        pushPOm = new QPushButton(tabPO);
        pushPOm->setObjectName(QString::fromUtf8("pushPOm"));
        pushPOm->setMaximumSize(QSize(50, 50));

        horizontalLayout_5->addWidget(pushPOm);


        verticalLayout_7->addLayout(horizontalLayout_5);

        tablePO = new QTableWidget(tabPO);
        tablePO->setObjectName(QString::fromUtf8("tablePO"));
        tablePO->horizontalHeader()->setCascadingSectionResizes(true);
        tablePO->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_7->addWidget(tablePO);

        tabWidget->addTab(tabPO, QString());
        tabSZI = new QWidget();
        tabSZI->setObjectName(QString::fromUtf8("tabSZI"));
        verticalLayout_8 = new QVBoxLayout(tabSZI);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 0, 0);
        labelSZI = new QLabel(tabSZI);
        labelSZI->setObjectName(QString::fromUtf8("labelSZI"));

        horizontalLayout_6->addWidget(labelSZI);

        checkBoxNoise = new QCheckBox(tabSZI);
        checkBoxNoise->setObjectName(QString::fromUtf8("checkBoxNoise"));

        horizontalLayout_6->addWidget(checkBoxNoise);

        pushSZIp = new QPushButton(tabSZI);
        pushSZIp->setObjectName(QString::fromUtf8("pushSZIp"));
        pushSZIp->setMaximumSize(QSize(50, 50));

        horizontalLayout_6->addWidget(pushSZIp);

        pushSZIm = new QPushButton(tabSZI);
        pushSZIm->setObjectName(QString::fromUtf8("pushSZIm"));
        pushSZIm->setMaximumSize(QSize(50, 50));

        horizontalLayout_6->addWidget(pushSZIm);


        verticalLayout_8->addLayout(horizontalLayout_6);

        tableSZI = new QTableWidget(tabSZI);
        tableSZI->setObjectName(QString::fromUtf8("tableSZI"));
        tableSZI->horizontalHeader()->setCascadingSectionResizes(true);
        tableSZI->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_8->addWidget(tableSZI);

        tabWidget->addTab(tabSZI, QString());
        tabVTSS = new QWidget();
        tabVTSS->setObjectName(QString::fromUtf8("tabVTSS"));
        verticalLayout_9 = new QVBoxLayout(tabVTSS);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, 0);
        labelVTSS = new QLabel(tabVTSS);
        labelVTSS->setObjectName(QString::fromUtf8("labelVTSS"));

        horizontalLayout_7->addWidget(labelVTSS);

        pushVTSSp = new QPushButton(tabVTSS);
        pushVTSSp->setObjectName(QString::fromUtf8("pushVTSSp"));
        pushVTSSp->setMaximumSize(QSize(50, 50));

        horizontalLayout_7->addWidget(pushVTSSp);

        pushVTSSm = new QPushButton(tabVTSS);
        pushVTSSm->setObjectName(QString::fromUtf8("pushVTSSm"));
        pushVTSSm->setMaximumSize(QSize(50, 50));

        horizontalLayout_7->addWidget(pushVTSSm);


        verticalLayout_9->addLayout(horizontalLayout_7);

        tableVTSS = new QTableWidget(tabVTSS);
        tableVTSS->setObjectName(QString::fromUtf8("tableVTSS"));
        tableVTSS->horizontalHeader()->setCascadingSectionResizes(true);
        tableVTSS->horizontalHeader()->setStretchLastSection(true);
        tableVTSS->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_9->addWidget(tableVTSS);

        tabWidget->addTab(tabVTSS, QString());
        tabKIA = new QWidget();
        tabKIA->setObjectName(QString::fromUtf8("tabKIA"));
        verticalLayout_10 = new QVBoxLayout(tabKIA);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, 0, 0);
        labelKIA = new QLabel(tabKIA);
        labelKIA->setObjectName(QString::fromUtf8("labelKIA"));

        horizontalLayout_8->addWidget(labelKIA);

        pushKIAp = new QPushButton(tabKIA);
        pushKIAp->setObjectName(QString::fromUtf8("pushKIAp"));
        pushKIAp->setMaximumSize(QSize(50, 50));

        horizontalLayout_8->addWidget(pushKIAp);

        pushKIAm = new QPushButton(tabKIA);
        pushKIAm->setObjectName(QString::fromUtf8("pushKIAm"));
        pushKIAm->setMaximumSize(QSize(50, 50));

        horizontalLayout_8->addWidget(pushKIAm);


        verticalLayout_10->addLayout(horizontalLayout_8);

        tableKIA = new QTableWidget(tabKIA);
        tableKIA->setObjectName(QString::fromUtf8("tableKIA"));

        verticalLayout_10->addWidget(tableKIA);

        tabWidget->addTab(tabKIA, QString());
        tabResult = new QWidget();
        tabResult->setObjectName(QString::fromUtf8("tabResult"));
        layoutWidget = new QWidget(tabResult);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1011, 27));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        labelResult = new QLabel(layoutWidget);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));

        horizontalLayout_10->addWidget(labelResult);

        pushRESULTp = new QPushButton(layoutWidget);
        pushRESULTp->setObjectName(QString::fromUtf8("pushRESULTp"));
        pushRESULTp->setMaximumSize(QSize(50, 50));

        horizontalLayout_10->addWidget(pushRESULTp);

        pushRESULTm = new QPushButton(layoutWidget);
        pushRESULTm->setObjectName(QString::fromUtf8("pushRESULTm"));
        pushRESULTm->setMaximumSize(QSize(50, 50));

        horizontalLayout_10->addWidget(pushRESULTm);

        tableResult = new QTableWidget(tabResult);
        tableResult->setObjectName(QString::fromUtf8("tableResult"));
        tableResult->setGeometry(QRect(0, 20, 1021, 511));
        tabWidget->addTab(tabResult, QString());
        tabCSC = new QWidget();
        tabCSC->setObjectName(QString::fromUtf8("tabCSC"));
        horizontalLayoutWidget_6 = new QWidget(tabCSC);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(0, 0, 1011, 27));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        labelCSC = new QLabel(horizontalLayoutWidget_6);
        labelCSC->setObjectName(QString::fromUtf8("labelCSC"));

        horizontalLayout_9->addWidget(labelCSC);

        pushCSCp = new QPushButton(horizontalLayoutWidget_6);
        pushCSCp->setObjectName(QString::fromUtf8("pushCSCp"));
        pushCSCp->setMaximumSize(QSize(50, 50));

        horizontalLayout_9->addWidget(pushCSCp);

        pushCSCm = new QPushButton(horizontalLayoutWidget_6);
        pushCSCm->setObjectName(QString::fromUtf8("pushCSCm"));
        pushCSCm->setMaximumSize(QSize(50, 50));

        horizontalLayout_9->addWidget(pushCSCm);

        tableCSC = new QTableWidget(tabCSC);
        tableCSC->setObjectName(QString::fromUtf8("tableCSC"));
        tableCSC->setGeometry(QRect(0, 30, 1011, 491));
        tabWidget->addTab(tabCSC, QString());
        Status = new QLabel(Dialog);
        Status->setObjectName(QString::fromUtf8("Status"));
        Status->setGeometry(QRect(10, 550, 1011, 20));

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        labelOrgan_2->setText(QApplication::translate("Dialog", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        labelDolAttRuk_2->setText(QApplication::translate("Dialog", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214, \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", 0, QApplication::UnicodeUTF8));
        labelARM_2->setText(QApplication::translate("Dialog", "\320\220\321\200\320\274", 0, QApplication::UnicodeUTF8));
        labelYear_2->setText(QApplication::translate("Dialog", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\270\321\201\320\277\321\213\321\202\320\260\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        labelAttNum_2->setText(QApplication::translate("Dialog", "\320\235\320\276\320\274\320\265\321\200 \320\260\321\202\321\202\320\265\321\201\321\202\320\260\321\206\320\270\320\276\320\275\320\275\321\213\321\205 \320\264\320\276\320\272-\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        labelModel_2->setText(QApplication::translate("Dialog", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        labelNumber_2->setText(QApplication::translate("Dialog", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        labelAttRuk_2->setText(QApplication::translate("Dialog", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214, \320\244\320\230\320\236", 0, QApplication::UnicodeUTF8));
        Load->setText(QApplication::translate("Dialog", "\320\267\320\260\320\263\321\200\321\203\320\267\320\272\320\260", 0, QApplication::UnicodeUTF8));
        Save->setText(QApplication::translate("Dialog", "\321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        labelNTU_2->setText(QApplication::translate("Dialog", "\320\237\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\320\265-\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", 0, QApplication::UnicodeUTF8));
        labelRoom_2->setText(QApplication::translate("Dialog", "\320\240\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\220\320\240\320\234, \320\277\320\276\320\274\320\265\321\211\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        labelRasp_2->setText(QApplication::translate("Dialog", "\320\240\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\320\274\320\265\321\211\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        labelAddr_2->setText(QApplication::translate("Dialog", "\320\240\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\267\320\264\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabHead_2), QApplication::translate("Dialog", "\320\236\320\261\321\211\320\270\320\265 \320\241\320\262\320\265\320\264\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        labelArm->setText(QApplication::translate("Dialog", "\320\241\320\276\321\201\321\202\320\260\320\262 \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        pushARMp->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushARMm->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabARM), QApplication::translate("Dialog", "\320\241\320\276\321\201\321\202\320\260\320\262 \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        labelPO->setText(QApplication::translate("Dialog", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\275\320\276\320\265 \320\276\320\261\320\265\321\201\320\277\320\265\321\207\320\265\320\275\320\270\320\265 \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        pushPOp->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushPOm->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPO), QApplication::translate("Dialog", "\320\237\320\236 \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        labelSZI->setText(QApplication::translate("Dialog", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\260 \320\227\320\260\321\211\320\270\321\202\321\213 \320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 (\320\241\320\227\320\230) \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        checkBoxNoise->setText(QApplication::translate("Dialog", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \321\210\321\203\320\274\320\260", 0, QApplication::UnicodeUTF8));
        pushSZIp->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushSZIm->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSZI), QApplication::translate("Dialog", "\320\241\320\227\320\230 \320\220\320\240\320\234", 0, QApplication::UnicodeUTF8));
        labelVTSS->setText(QApplication::translate("Dialog", "\320\222\321\201\320\277\320\276\320\274\320\276\320\263\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\242\320\265\321\205\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\260", 0, QApplication::UnicodeUTF8));
        pushVTSSp->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushVTSSm->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabVTSS), QApplication::translate("Dialog", "\320\222\320\242\320\241\320\241", 0, QApplication::UnicodeUTF8));
        labelKIA->setText(QApplication::translate("Dialog", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214\320\275\320\276-\320\270\320\267\320\274\320\265\321\200\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\321\203\321\200\320\260", 0, QApplication::UnicodeUTF8));
        pushKIAp->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushKIAm->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabKIA), QApplication::translate("Dialog", "\320\232\320\230\320\220", 0, QApplication::UnicodeUTF8));
        labelResult->setText(QApplication::translate("Dialog", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \320\270\321\201\320\277\321\213\321\202\320\260\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        pushRESULTp->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushRESULTm->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabResult), QApplication::translate("Dialog", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        labelCSC->setText(QApplication::translate("Dialog", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\260 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\270 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270 \320\267\320\260\321\211\320\270\321\202\321\213", 0, QApplication::UnicodeUTF8));
        pushCSCp->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushCSCm->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabCSC), QApplication::translate("Dialog", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\260 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\270 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", 0, QApplication::UnicodeUTF8));
        Status->setText(QApplication::translate("Dialog", "\320\235\320\265\321\202 \320\270\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
