#include "dialog.h"
#include "ui_dialog.h"

MyDocs::MyDocs()
{
    SetDefault();
}

void MyDocs::SetDefault()
{
    Organ = QString::fromUtf8("Организация-пользователь АРМ");
    AttRuk = QString::fromUtf8("ФИО руководителя аттестационной комиссии");
    DolAttRuk = QString::fromUtf8("Должность руководителя аттестационной комиссии");
    ARM = QString::fromUtf8("№ АРМ");
    Model = QString::fromUtf8("Модель АРМ");
    Number = QString::fromUtf8("Серийный номер АРМ");
    Year = QDate::currentDate();
    AttNum = QString::fromUtf8("Номер аттестационных документов, например {11-11}[/13]");
    NTU = QString::fromUtf8("Подразделение-пользователь АРМ");
    Room = QString::fromUtf8("Помещение, где расположен АРМ");
    Rasp = QString::fromUtf8("Расположение помещения в здании");
    Addr = QString::fromUtf8("Адрес расположения здания организации.");
    Status = QString::fromUtf8("Инициализация по умолчанию.");
    Noise = false;
    bOrgan = true;
    bAttRuk = true;
    bDolAttRuk = true;
    bARM = true;
    bModel = true;
    bNumber = true;
    bYear = true;
    bAttNum = true;
    bNoise = true;
    bNTU = true;
    bRoom = true;
    bRasp = true;
    bAddr = true;
    bStatus = true;
    nStatus = 0;
    Table[0]=0;
    TableWidget[0]=NULL;
    TableName[0]="TableARM";
    Table[1]=0;
    TableWidget[1]=NULL;
    TableName[1]="TablePO";
    Table[2]=0;
    TableWidget[2]=NULL;
    TableName[2]="TableSZI";
    Table[3]=0;
    TableWidget[3]=NULL;
    TableName[3]="TableVTSS";
    Table[4]=0;
    TableWidget[4]=NULL;
    TableName[4]="TableKIA";
    Table[5]=0;
    TableWidget[5]=NULL;
    TableName[5]="TableRESULT";
    Table[6]=0;
    TableWidget[6]=NULL;
    TableName[6]="TableCSC";
    curtable = TableCount;
//    Table[7]=0;
//    TableWidget[7]=NULL;
//    TableName[7]="TableARM";
};

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    myData.TableWidget[0]=ui->tableARM;
    myData.TableWidget[1]=ui->tablePO;
    myData.TableWidget[2]=ui->tableSZI;
    myData.TableWidget[3]=ui->tableVTSS;
    myData.TableWidget[4]=ui->tableKIA;
    myData.TableWidget[5]=ui->tableResult;
    myData.TableWidget[6]=ui->tableCSC;

    fileName = QString::fromUtf8("File.name");
//    myData.TableWidget[0]=ui->tableARM;
    ui->Save->setDisabled(true);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::init()
{
    ui->checkBoxNoise->setChecked(myData.Noise);
    ui->dateYear_2->setDate(myData.Year);
    ui->lineEditAttRuk_2->setText(myData.AttRuk);
    ui->lineEditDolAttRuk_2->setText(myData.DolAttRuk);
    ui->lineEditARM_2->setText(myData.ARM);
    ui->lineEditAttNum_2->setText(myData.AttNum);
    ui->lineEditModel_2->setText(myData.Model);
    ui->lineEditNumber_2->setText(myData.Number);
    ui->lineEditOrgan_2->setText(myData.Organ);
    ui->lineEditNTU_2->setText(myData.NTU);
    ui->lineEditRoom_2->setText(myData.Room);
    ui->lineEditRasp_2->setText(myData.Rasp);
    ui->lineEditAddr_2->setText(myData.Addr);
    status();
}

void Dialog::on_Load_clicked()
{
    Load();
}

void Dialog::status(const QString string)
{
    myData.Status=string;
    if(!myData.bStatus)
        myData.Status+=QString::fromUtf8("Вызов сообщения напрямую!");
    ui->Status->setText(myData.Status);
//    ui->Status->statusTip(myData.Status);
//    qDebug(string);
    myData.bStatus=false;
}

void Dialog::status(const uint nstatus)
{
    myData.nStatus=nstatus;
    myData.bStatus=true;
    switch(nstatus)
    {
    case 0:
        status(QString::fromUtf8("Все нормально."));
        break;
    case 1:
        status(QString::fromUtf8("Загружаем файл."));
        break;
    case 2:
        status(QString::fromUtf8("Выгружаем файл."));
        break;
    case 3:
        status(QString::fromUtf8("Не определено имя файла."));
        break;
    case 4:
        status(QString::fromUtf8("Не открывается файл."));
        break;
    case 5:
        status(QString::fromUtf8("Разбор входящего файла."));
        break;
    case 6:
        status(QString::fromUtf8("Ввод данных в поля ввода."));
        break;
    case 7:
        status(QString::fromUtf8("Вывод данных из полей ввода."));
        break;
    case 8:
        status(QString::fromUtf8("Ввод данных в поля самого документа."));
        break;
    case 9:
        status(QString::fromUtf8("Ввод имени файла."));
        break;
    case 10:
        status(QString::fromUtf8("Ввод имени файла."));
        break;
    case 155:
        status(QString::fromUtf8("."));
        break;
    default:
        QString text=QString::fromUtf8("неопределено. ошибка №") + QString(nstatus);
        status(text);
        break;
    }
}

void Dialog::Load()
{
    //сначала загружаем файл, позже парсим его, заполняем поля myDocs, инициализируем поля в диалоге.
    status(1);
    fileName =
             QFileDialog::getOpenFileName(this, tr("Open File"),
                                          "",
                                          tr("ODT Files (*.odt)"));
    if (fileName.isEmpty()){
        status(3);
         return;
     }
#ifdef odt
    QuaZip zip("test.odt");
    zip.open(QuaZip::mdUnzip);
    zip.setCurrentFile("content.xml");
    QuaZipFile file(&zip);
    int method;
//  file.open(QIODevice::ReadOnly, &method, NULL, true);

     if (!file.open(QFile::ReadOnly, &method, NULL, true)) {
#else
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly)) {
#endif
        status(4);
         QMessageBox::warning(this, tr("Data File"),
                              tr("Cannot read file %1:\n%2.")
                              .arg(fileName)
                              .arg(file.errorString()));
         return;
     }
     if(domDoc.setContent(&file)) {
         status(5);
         QDomElement root= domDoc.documentElement();
         for(int i=0;i<TableCount;i++)
             myData.Table[i]=0;
         traverseNode(root,0);
     }
     file.close();
#ifdef odt
     zip.close();
#endif
     status(6);
     init();
     ui->Save->setDisabled(false);
}
int Dialog::selectAttribute(const QString name)
{
    if(name=="ARM")return 1;
    else if(name=="Organ")return 2;
    else if(name=="AttRuk")return 3;
    else if(name=="DolAttRuk")return 4;
    else if(name=="Model")return 5;
    else if(name=="Number")return 6;
    else if(name=="AttNum")return 7;
    else if(name=="NTU")return 8;
    else if(name=="Room")return 9;
    else if(name=="Rasp")return 10;
    else if(name=="Addr")return 11;
    else if(name=="Year")return 12;
    else if(name=="Noise")return 13;
    else if(name=="table:table")return 21;
//    else if(name=="table:table-column")return 22;
    else if(name=="table:table-row")return 23;
//    else if(name=="table:table-cell")return 24;
    else if(name=="table:table-header-rows")return 25;
/*    else if(name=="Organ")return 14;
    else if(name=="Organ")return 15;
    else if(name=="Organ")return 16;
    else if(name=="Organ")return 17;
    else if(name=="Organ")return 18;
    else if(name=="Organ")return 19;
    else if(name=="Organ")return 20;
    else if(name=="Organ")return 21;*/
    else return 0;
}

void MyDocs::SelectTable(const QString name)
{
//    if(name==TableName[0])curtable=0;
//    else if(name==TableName[1])curtable=1;
//    else if(name==TableName[2])curtable=2;
//    else if(name==TableName[3])curtable=3;
//    else if(name==TableName[4])curtable=4;
//    else if(name==TableName[5])curtable=5;
//    else if(name==TableName[6])curtable=6;
//    else curtable=TableCount;
    for(
        curtable=0;
        curtable<TableCount&&
        name!=TableName[curtable];
        curtable++)
        ;
}
bool MyDocs::EnableTable()
{
    if (curtable!=TableCount)
        if(Table[curtable] & 1)return TRUE;
    return FALSE;
}
void Dialog::traverseNode(const QDomNode& node, int rec)
{
    QTableWidgetItem *item = 0;
    QDomNodeList domNodeList = node.childNodes();
    if(node.toElement().isElement())
    {
        if(node.toElement().tagName()!="text:variable-decl")
    {
//            обработка переменных
        switch(selectAttribute(node.toElement().attribute("text:name"))){
        case 1:if(myData.bARM)
            {
                myData.bARM=false;
                myData.ARM=node.toElement().text();
            }
            break;
        case 2:if(myData.bOrgan)
            {
                myData.bOrgan=false;
                myData.Organ=node.toElement().text();
            }
            break;
        case 3:if(myData.bAttRuk)
            {
                myData.bAttRuk=false;
                myData.AttRuk=node.toElement().text();
            }
            break;
        case 4:if(myData.bDolAttRuk)
            {
                myData.bDolAttRuk=false;
                myData.DolAttRuk=node.toElement().text();
            }
            break;
        case 5:if(myData.bModel)
            {
                myData.bModel=false;
                myData.Model=node.toElement().text();
            }
            break;
        case 6:if(myData.bNumber)
            {
                myData.bNumber=false;
                myData.Number=node.toElement().text();
            }
            break;
        case 7:if(myData.bAttNum)
            {
                myData.bAttNum=false;
                myData.AttNum=node.toElement().text();
            }
            break;
        case 8:if(myData.bNTU)
            {
                myData.bNTU=false;
                myData.NTU=node.toElement().text();
            }
            break;
        case 9:if(myData.bRoom)
            {
                myData.bRoom=false;
                myData.Room=node.toElement().text();
            }
            break;
        case 10:if(myData.bRasp)
            {
                myData.bRasp=false;
                myData.Rasp=node.toElement().text();
            }
            break;
        case 11:if(myData.bAddr)
            {
                myData.bAddr=false;
                myData.Addr=node.toElement().text();
            }
            break;
        case 12:if(myData.bYear)
            {
                myData.bYear=false;
                myData.Year=QDate::fromString(node.toElement().text(), "dd.MM.yyyy");
            }
            break;
        case 13:if(myData.bNoise)
            {
                myData.bNoise=false;
                if(node.toElement().attribute("office:boolean-value")!="true")
                {
                    myData.Noise=false;
                } else myData.Noise=true;
            }
            break;
        default:
            status(node.toElement().attribute("text:name"));
            break;
        }
//обработка таблиц.
        switch(selectAttribute(node.toElement().tagName()))
            {
            case 21://выбор имени таблицы
            myData.SelectTable(node.toElement().attribute("table:name"));
//            qDebug("+%-d level, Tag:%s, Attr:%s",rec,qPrintable(node.toElement().tagName()),qPrintable(node.toElement().attribute("table:name")));
                if(myData.Table[myData.curtable]==0)//таблица не обрабатывалась
                {
    //обрабатываем таблицу
                    myData.Table[myData.curtable]=1;
                    IsHeader=0;
                    myData.TableWidget[myData.curtable]->clear();
                    myData.TableWidget[myData.curtable]->setColumnCount(0);
                    myData.TableWidget[myData.curtable]->setRowCount(0);
                    QDomNodeList domNodeList = node.childNodes();
                    for(int i=0;domNodeList.count()>i;i++)
                    {
                        traverseNode(domNodeList.item(i),rec+1);
                    }
    //отработана таблица
                    myData.Table[myData.curtable]=2;//таблица прошла обработку
                }
                myData.SelectTable("NoTable");
                break;
            /*case 22://выбор колонки
                if(myData.TableARM&1&&myData.TableARM<3)
                {
                    qDebug("+%-d level, Tag:%s, Attr:%s",rec,qPrintable(node.toElement().tagName()),qPrintable(node.toElement().attribute("table:number-columns-repeated")));
                    QString col_num=node.toElement().attribute("table:number-columns-repeated");
                    if(ui->tableWidgetARM->columnCount()<1)
                        ui->tableWidgetARM->setColumnCount(col_num.toInt());
                }
                break;*/
            case 23://выбор строки
                if(myData.EnableTable())
                {
                    if(!IsHeader)//это не заголовок
                    {
//                        qDebug("+%-d level, Tag:%s, Attr:%s",rec,qPrintable(node.toElement().tagName()),qPrintable(node.toElement().attribute("table:table-row")));
                        int row = myData.TableWidget[myData.curtable]->rowCount();
    //                  if(row<10){
                            myData.TableWidget[myData.curtable]->setRowCount(row + 1);
    //                        data.resize(row+1,ui->tableWidgetARM->columnCount());
                        for(int i=0;domNodeList.count()>i;i++)
                        {
                            if(myData.TableWidget[myData.curtable]->columnCount()<=i){
                                myData.TableWidget[myData.curtable]->setColumnCount(i+1);
    //                            data.resize(row+1,ui->tableWidgetARM->columnCount());
                            }
//                            qDebug("+%-d level, Row:%3d, Attr:%s",rec,row,qPrintable(domNodeList.item(i).toElement().text()));
    //                        data[row][i]=domNodeList.item(i).toElement().text();
                            //                    item->setData(Qt::DisplayRole, fileName);
    /*                        item->setFlags(
                                    item[i].flags() |\
                                    Qt::ItemIsEditable | Qt::ItemIsSelectable |\
                                    Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled);
    */
                            /*item = model->Item(i);
                            if(!item)
                            {
                                item=model->createItem();
                                ui->tableWidgetARM->setHorizontalHeaderItem(i,item);
                            }
                            item->setText(domNodeList.item(i).toElement().text());
    */
                            item = new QTableWidgetItem (domNodeList.item(i).toElement().text());
                            myData.TableWidget[myData.curtable]->setItem(row, i, item);
                        }
    //                }
                    }else//это заголовок
                    {
//                        qDebug("+%-d level, Tag:%s, Attr:%s",rec,qPrintable(node.toElement().tagName()),qPrintable(node.toElement().attribute("table:table-header-rows")));
                        myData.TableWidget[myData.curtable]->horizontalHeader()->setDefaultSectionSize(50);
    //                    ui->tableWidgetARM->verticalHeader()->hide();
                        QStringList labels;
                        for(int i=0;domNodeList.count()>i;i++){
                            if(myData.TableWidget[myData.curtable]->columnCount()<=i)
                                myData.TableWidget[myData.curtable]->setColumnCount(i+1);
//                            qDebug("+%-d level, Tag:%s, Attr:%s",rec,qPrintable(node.toElement().tagName()),qPrintable(domNodeList.item(i).toElement().text()));
    /*
     *                         item = model->horizontalHeaderItem(i);
                            if(!item)
                            {
                                item=model->createItem();
                                ui->tableWidgetARM->setHorizontalHeaderItem(i,item);
                            }
                            item->setText(domNodeList.item(i).toElement().text());
    */
                            labels << domNodeList.item(i).toElement().text();
                            //                            QString TextCell=domNodeList.item(i).toElement().text();
                            myData.TableWidget[myData.curtable]->horizontalHeader()->setResizeMode(i, QHeaderView::Interactive);
                        }
                        //! [22] //! [23]
                        myData.TableWidget[myData.curtable]->setHorizontalHeaderLabels(labels);
                        //!установка заголовка произошла
                    }
                }
                break;
            /*case 24://выбор ячейки
                if(myData.TableARM&1)
                {
                    qDebug("+%-d level, Tag:%s, Attr:%s",rec,qPrintable(node.toElement().tagName()),qPrintable(node.toElement().attribute("table:table-cell")));
                    QMessageBox::warning(this, tr("Parse Node"),
                                         tr("Find cell not from row: %1 , tag: %1\nText:%2.")
                                         .arg(node.toElement().tagName())
                                         .arg(node.toElement().text()));
                }
                break;*/
            case 25://загрузка заголовка.
                if(myData.EnableTable())
                {
    //                ui->tableWidgetARM->horizontalHeader()->setDefaultSectionSize(90);
    //                ui->tableWidgetARM->verticalHeader()->hide();
                    IsHeader=1;
                    for(int i=0;domNodeList.count()>i;i++)
                    {
                        traverseNode(domNodeList.item(i),rec+1);
                    }
                    IsHeader=0;
                    //! [22] //! [23]
                    //!установка заголовка произошла
                }
                break;
            default:
                status(node.toElement().tagName());
                break;
            }
        }
    }
    for(int i=0;domNodeList.count()>i;i++)
    {
        traverseNode(domNodeList.item(i),rec+1);
    }
}
void Dialog::SetText(const QDomNode& node, const QString Value)
{
    QDomNodeList domNodeList = node.childNodes();
    for(int i=0;domNodeList.count()>i;i++)
    {
        if(domNodeList.item(i).isText())
        {
            domNodeList.item(i).setNodeValue(Value);
        }
    }
}
void Dialog::SetText2(const QDomNode& node, const QString Value, int rec)
{
    QDomNodeList domNodeList = node.childNodes();
    int textNotFound = 1; // еще текст не найден
//    qDebug("%d lvl, %s = %s - %s",rec,qPrintable(node.toElement().tagName()),qPrintable(node.toElement().text()),qPrintable(Value));
    if (!node.isNull()&&node.toElement().text()!=Value) {
        for(int i=0;domNodeList.count()>i&&textNotFound;i++)
        {
            if(domNodeList.item(i).isText())
            {
                domNodeList.item(i).setNodeValue(Value);
                textNotFound = 0;
            }
            else
                SetText2(domNodeList.item(i),Value, rec+1);
        }
    }
/*    QDomNodeList domNodeList = node.childNodes();
    int i,j;
    int count=domNodeList.count();
    for(i=0;domNodeList.count()>i;i++)
    {
        QDomNode TestNode = domNodeList.item(i);
        QDomNamedNodeMap attr = TestNode.attributes();
        QStringList attributes;
        for (j = 0; j < attr.count(); ++j) {
                         QDomNode attribute = attr.item(j);
                         attributes << attribute.nodeName() + "=\""
                                       +attribute.nodeValue() + "\"";
        }
        QString tag=TestNode.nodeName();
        QString NodeValue = TestNode.nodeValue();
        int type = (int)TestNode.nodeType();
        QDomElement ElementNode = TestNode.toElement();
        QString eValue = ElementNode.nodeValue();
        int etype = (int)ElementNode.nodeType();
        QDomText TextNode = TestNode.toText();
        if(domNodeList.item(i).isText())
        {
            QDomText oldText=domNodeList.item(i).toText();
            QDomText newTitleText = domDoc.createTextNode(Value);
            oldText.parentNode().insertAfter(newTitleText, oldText);
//            domNodeList.item(i).setNodeValue(Value);
        }
    }
*/
}
//void Dialog::SetText1(const QDomElement& element, const QString Value)
//{
//        QDomElement oldElement=element;
//         if (!element.isNull()&&element.text()!=Value) {
////             qDebug("%s => %s = %s",qPrintable(element.tagName()),qPrintable(element.text()),Value);
////                QDomElement newTitleElement = domDoc.createElement(element.tagName());
////                QDomText newTitleText = domDoc.createTextNode(Value);
////                newTitleElement.appendChild(newTitleText);
////                oldElement.parentNode().replaceChild(newTitleElement, oldElement);
//        }
//}
void Dialog::SetNode(QDomNode& node)
{
    QString text;
    if(node.toElement().isElement() && node.toElement().tagName() != "text:variable-decl")
    {
        switch(selectAttribute(node.toElement().attribute("text:name"))){
        case 1:SetText(node,myData.ARM);
            break;
        case 2:SetText(node,myData.Organ);
            break;
        case 3:SetText(node,myData.AttRuk);
            break;
        case 4:SetText(node,myData.DolAttRuk);
            break;
        case 5:SetText(node,myData.Model);
            break;
        case 6:SetText(node,myData.Number);
            break;
        case 7:SetText(node,myData.AttNum);
            break;
        case 8:SetText(node,myData.NTU);
            break;
        case 9:SetText(node,myData.Room);
            break;
        case 10:SetText(node,myData.Rasp);
            break;
        case 11:SetText(node,myData.Addr);
            break;
        case 12:SetText(node,myData.Year.toString("dd.MM.yyyy"));
            break;
        case 13:if(myData.Noise)
            {
                node.toElement().setAttribute("office:boolean-value","true");
                node.toElement().setAttribute("text:formula","ooow:TRUE");
                SetText(node,QString::fromUtf8("ИСТИНА"));
            } else {
                node.toElement().setAttribute("office:boolean-value","false");
                node.toElement().setAttribute("text:formula","ooow:FALSE");
                SetText(node,QString::fromUtf8("ЛОЖЬ"));
            }
            break;
        default:
            text="Unknown variable" + node.toElement().attribute("text:name");
            status(text);
            break;
        }
    }
    switch(selectAttribute(node.toElement().tagName()))
        {
        case 21://выбор имени таблицы
        myData.SelectTable(node.toElement().attribute("table:name"));
//        qDebug("+%-d level, Tag:%s, Attr:%s",rec,qPrintable(node.toElement().tagName()),qPrintable(node.toElement().attribute("table:name")));
//обрабатываем таблицу
        if(myData.curtable!=TableCount){
                myData.Table[myData.curtable]+=1;
//                Table1=1;
                IsHeader=0;
                int col=myData.TableWidget[myData.curtable]->columnCount();
                int row=myData.TableWidget[myData.curtable]->rowCount();
                int rowdoc=0;
                int i,j,k;
                QDomNodeList domNodeList = node.childNodes();
                for(i=0;domNodeList.count()>i;i++)
                {
                    if(domNodeList.item(i).toElement().tagName()=="table:table-row")
                        rowdoc+=1;
                }
                 if(rowdoc>row)//удаление лишних строк
                 {
                     rowdoc-=row;
                     for(i=domNodeList.count();rowdoc>0&&i>0;i--)
                     {
                         if(domNodeList.item(i-1).toElement().tagName()=="table:table-row")
                         {
//                             qDebug("+%s%-d level, Tag:%s, Attr:%s",qPrintable(otstup),rec,qPrintable(domNodeList.item(i-1).toElement().tagName()),qPrintable(domNodeList.item(i-1).toElement().text()));
                             domNodeList.item(i-1).parentNode().removeChild(domNodeList.item(i-1));
                             rowdoc--;
//                             QDomNode node1 = domNodeList.item(i-1);
//                             RemoveNode(node1,0);
//                             node.removeChild(domNodeList.item(i-1).toElement());
//                             qDebug("+%sError of delete Node, Tag:%s",qPrintable(otstup),qPrintable(node.toElement().tagName()));
                         }
                     }
                 }else if(rowdoc<row)//добавление строк
                 {
                     row-=rowdoc;
                     for(i=0;i<row;i++)
                     {
                         QDomElement domElement = domDoc.createElement("table:table-row");
                         domElement.setAttribute("table:style-name",myData.TableName[myData.curtable]+".1");
                         QDomNode appChild = node.appendChild(domElement);
                         if(appChild.isNull())//ошибка добавления строки
                             status("ошибка добавления строки");
                             //                             qDebug("+%sError of add Node as row, Tag:%s,%d",qPrintable(otstup),qPrintable(node.toElement().tagName()),i);
                         else
                         {
                             for(j=0;j<col;j++)//добавление столбцов
                             {
                                 QDomElement domElement = domDoc.createElement("table:table-cell");
                                 domElement.setAttribute("table:style-name",myData.TableName[myData.curtable]+myData.TableStyle[j]);
                                 QDomText domText = domDoc.createTextNode("text:p");
                                 domText.setNodeValue("=123=");
                                 QDomNode appChildCell = appChild.appendChild(domElement);
                                 if(appChildCell.isNull())//ошибка добавления строки
                                     status("ошибка добавления ячейки");
//                                     qDebug("+%sError of add Node as cell, Tag:%s,%d,%d",qPrintable(otstup),qPrintable(appChild.toElement().tagName()),i,j);
                                 QDomNode appChildCell2 = appChildCell.appendChild(domText);
                                 if(appChildCell2.isNull())//ошибка добавления строки
                                     status("ошибка добавления текста в ячейку");
//                                     qDebug("+%sError of add Node as cell, Tag:%s,%d,%d",qPrintable(otstup),qPrintable(appChild.toElement().tagName()),i,j);
                             }
                         }
                     }
                 }
                 for(i=0,row=0;domNodeList.count()>i;i++)
                {
                     if(domNodeList.item(i).toElement().tagName()=="table:table-row")
                     {
                         QDomNodeList domNodeList1 = domNodeList.item(i).childNodes();
                         //изменение состава таблицы в документе соответствии с таблицев приложения
                         for(j=0,k=0;j<col&&k<domNodeList1.count();k++)//изменение содержимого таблицы
                         {
                             if(domNodeList1.item(k).toElement().tagName()=="table:table-cell")
                             {
                                 QTableWidgetItem *item = myData.TableWidget[myData.curtable]->item(row,j);
//                                 qDebug("%s=%s=%s",otstup,qPrintable(item->text()),qPrintable(domNodeList1.item(k).toElement().text()));
//                                 node.childNodes().at(i).childNodes().at(k).toElement().setNodeValue(item->text());
//                                 otstup=node.childNodes().at(i).childNodes().at(k).nodeName();
//                                 int type=node.childNodes().at(i).childNodes().at(k).nodeType();
//                                 otstup=node.childNodes().at(i).childNodes().at(k).nodeValue();
//                                 domNodeList1.item(k).childNodes().item(0).setNodeValue(item->text());
/*****************************************************************
                                 SetText1(domNodeList1.item(k).toElement(),item->text());
*/
                                 SetText2(domNodeList1.item(k),item->text(),0);
//                                 qDebug("row: %d col:%d,%s=%s",row,j,qPrintable(item->text()),qPrintable(domNodeList1.item(k).toElement().text()));
                                 j++;
                             }
//                             else
//                                 qDebug("row:%d,item:%d,%s",row,k,qPrintable(domNodeList1.item(k).toElement().tagName()));
                         }
                         row++;
                     }
                }
        }
//отработана таблица
            myData.SelectTable("NoTable");
            break;
    }
    QDomNodeList domNodeList = node.childNodes();
    for(int i=0;domNodeList.count()>i;i++)
    {
        QDomNode node1=domNodeList.item(i);
        SetNode(node1);
//        SetNode(domNodeList.item(i));
    }
}
void Dialog::on_Save_clicked()
{
    Save();
}
void Dialog::Save()
{
    status(7);
    myData.ARM=ui->lineEditARM_2->text();
    myData.Organ=ui->lineEditOrgan_2->text();
    myData.AttRuk=ui->lineEditAttRuk_2->text();
    myData.DolAttRuk=ui->lineEditDolAttRuk_2->text();
    myData.Model=ui->lineEditModel_2->text();
    myData.Number=ui->lineEditNumber_2->text();
    myData.AttNum=ui->lineEditAttNum_2->text();
    myData.NTU=ui->lineEditNTU_2->text();
    myData.Room=ui->lineEditRoom_2->text();
    myData.Rasp=ui->lineEditRasp_2->text();
    myData.Addr=ui->lineEditAddr_2->text();
/*    myData.AttNum=ui->lineEditAttNum_2->text();
    myData.AttNum=ui->lineEditAttNum_2->text();
    myData.AttNum=ui->lineEditAttNum_2->text();
    myData.AttNum=ui->lineEditAttNum_2->text();
    myData.AttNum=ui->lineEditAttNum_2->text();
    myData.AttNum=ui->lineEditAttNum_2->text();
    myData.AttNum=ui->lineEditAttNum_2->text();*/
    myData.Year=ui->dateYear_2->date();
    myData.Noise= ui->checkBoxNoise->checkState() != 0;
    // сначала правим dom дерево из полей myDocs, позже просто выгружаем его.
    status(8);
    QDomElement root= domDoc.documentElement();
    SetNode(root);
    status(9);
    QString fileName =
             QFileDialog::getSaveFileName(this, tr("Save Bookmark File"),
                                          QDir::currentPath(),
                                          tr("XML Files (*.xml)"));
    if (fileName.isEmpty()){
        status(3);
        return;
    }

     QFile file(fileName);
     if (!file.open(QFile::WriteOnly | QFile::Text)) {
         status(4);
         QMessageBox::warning(this, tr("XML,ODT"),
                              tr("Cannot write file %1:\n%2.")
                              .arg(fileName)
                              .arg(file.errorString()));
         return;
     }
     const int IndentSize = 2;
     QTextStream out(&file);
     domDoc.save(out, IndentSize);
//     root.save(&filestream,IndentSize);
     status();
}

void Dialog::on_pushARMp_clicked()
{
    int row = ui->tableARM->rowCount();
    ui->tableARM->setRowCount(row + 1);
    int col=ui->tableARM->columnCount();
    for(;col>0;col--)
    {
        QTableWidgetItem *item = new QTableWidgetItem ("*");
        ui->tableARM->setItem(row, col-1, item);
    }
}

void Dialog::on_pushARMm_clicked()
{
    int row = ui->tableARM->rowCount();
    if(row>1)ui->tableARM->setRowCount(row - 1);
}

void Dialog::on_pushPOp_clicked()
{
    int row = ui->tablePO->rowCount();
    ui->tablePO->setRowCount(row + 1);
    int col=ui->tablePO->columnCount();
    for(;col>0;col--)
    {
        QTableWidgetItem *item = new QTableWidgetItem ("*");
        ui->tablePO->setItem(row, col-1, item);
    }
}

void Dialog::on_pushPOm_clicked()
{
    int row = ui->tablePO->rowCount();
    if(row>1)ui->tablePO->setRowCount(row - 1);
}

void Dialog::on_pushSZIp_clicked()
{
    int row = ui->tableSZI->rowCount();
    ui->tableSZI->setRowCount(row + 1);
    int col=ui->tableSZI->columnCount();
    for(;col>0;col--)
    {
        QTableWidgetItem *item = new QTableWidgetItem ("*");
        ui->tableSZI->setItem(row, col-1, item);
    }
}

void Dialog::on_pushSZIm_clicked()
{
    int row = ui->tableSZI->rowCount();
    if(row>1)ui->tableSZI->setRowCount(row - 1);
}

void Dialog::on_pushVTSSp_clicked()
{
    int row = ui->tableVTSS->rowCount();
    ui->tableVTSS->setRowCount(row + 1);
    int col=ui->tableVTSS->columnCount();
    for(;col>0;col--)
    {
        QTableWidgetItem *item = new QTableWidgetItem ("*");
        ui->tableVTSS->setItem(row, col-1, item);
    }
}

void Dialog::on_pushVTSSm_clicked()
{
    int row = ui->tableVTSS->rowCount();
    if(row>1)ui->tableVTSS->setRowCount(row - 1);
}

void Dialog::on_pushKIAp_clicked()
{
    int row = ui->tableKIA->rowCount();
     ui->tableKIA->setRowCount(row + 1);
     int col=ui->tableKIA->columnCount();
     for(;col>0;col--)
     {
         QTableWidgetItem *item = new QTableWidgetItem ("*");
         ui->tableKIA->setItem(row, col-1, item);
     }
}

void Dialog::on_pushKIAm_clicked()
{
    int row = ui->tableKIA->rowCount();
    if(row>1)ui->tableKIA->setRowCount(row - 1);
}

void Dialog::on_pushCSCp_clicked()
{
    int row = ui->tableCSC->rowCount();
     ui->tableCSC->setRowCount(row + 1);
     int col=ui->tableCSC->columnCount();
     for(;col>0;col--)
     {
         QTableWidgetItem *item = new QTableWidgetItem ("*");
         ui->tableCSC->setItem(row, col-1, item);
     }
}

void Dialog::on_pushCSCm_clicked()
{
    int row = ui->tableCSC->rowCount();
    if(row>1)ui->tableCSC->setRowCount(row - 1);
}

void Dialog::on_pushRESULTp_clicked()
{
    int row = ui->tableResult->rowCount();
     ui->tableResult->setRowCount(row + 1);
     int col=ui->tableResult->columnCount();
     for(;col>0;col--)
     {
         QTableWidgetItem *item = new QTableWidgetItem ("*");
         ui->tableResult->setItem(row, col-1, item);
     }
}

void Dialog::on_pushRESULTm_clicked()
{
    int row = ui->tableResult->rowCount();
    if(row>1)ui->tableResult->setRowCount(row - 1);
}
