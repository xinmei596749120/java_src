#include "logthread.h"
#include <Qfile>
#include "ui_mainwindow.h"
#include <QStringList>


QProcess pro;

logthread::logthread(QObject *parent) : QObject(parent)
{
    PrintFlag = false;
    status = false;
    log_adb =  adb_find();




}

logthread::~logthread()
{

}

void logthread::LogProcessRound(QString cmd,QString filename)
{

     QStringList templist;
     qDebug()<<"apppathcmd :"+cmd+"kkk:"+filename;


     cmd  = cmd+" > "+filename+"\n";

    //   cmd  = cmd+" > D:\\log.txt\n";
     qDebug()<<"1cmd:"+cmd;
     QByteArray ba = cmd.toLatin1(); // must
     char*  ch;
     ch = ba.data();

     pLogProcess = new QProcess();
     pidlist.clear();
     QString ret =   log_adb.SendCmd("adb shell ps | grep logcat",1);

     pidlist = ret.split("root");
     int index;

     for(int i=0;i<pidlist.size();i++)
     {
         QString  temp = pidlist.at(i).trimmed().simplified();
         index  =  temp.indexOf(" ");
         temp = temp.left(index).trimmed();
         templist<<temp;
        // pidlist.at(i) =temp;
         qDebug()<<"111:"+ temp;
     }
     pidlist.clear();
     pidlist =  templist;

     emit GetPidSingal();




     //QProcess p(0);
     pLogProcess->start("cmd");
 //    qDebug()<<"start cmd";
     pLogProcess->waitForStarted();
     pLogProcess->write(ch);
  //   pLogProcess->write("md d:\\test1631\n");
     pLogProcess->closeWriteChannel();
     pLogProcess->waitForFinished(-1);





     qDebug()<<"1234232546578";

      //while(1){

      //   QThread::sleep(1000);
      //}
// qDebug()<<QString::fromLocal8Bit(p.readAllStandardOutput());


//    ppp.start("Cmd");

//     ppp.start(path, QStringList() << "logcat" << "-d" << ">"<<"D:\\log.txt");

//     qDebug()<<"start capture log";
//     ppp.waitForFinished();

//      while (ppp.canReadLine()) {
//          qDebug() << ppp.readLine().trimmed();
//      }



}


void logthread::PrintLogCat(QString pid,QString cmd2,QString filename)
{



    QString cmd;


    QString apppath = log_adb.GetAPPPath();




        cmd = apppath+"adb.exe shell \"";
        if(cmd2.isEmpty())
        {
            cmd = apppath+"adb.exe shell \"logcat -v time";
            qDebug()<<"框为空:  "+cmd;
        }
        else{
            qDebug()<<"框的值:  "+cmd2;
            cmd = cmd  + cmd2;
            qDebug()<<"框不为空:  "+cmd;
        }

        if(!pid.isEmpty())
        {
            cmd = cmd+" | grep "+pid;

        }

        cmd = cmd+"\" ";

        LogProcessRound(cmd,filename);




//        qDebug()<<"最终cmd:  "+cmd;
//        qDebug()<<"cmd111:  "+cmd;




//        QByteArray temp = cmd.toLatin1(); // must



//        cmd1 = temp.data();
//        WinExec(cmd1,SW_HIDE);
//        QThread::msleep(2000);
//        cmd = "adb pull /sdcard/"+name1 +" " +filename;
//        while(!status)
//        {
//            qDebug()<<"导出cmd:  "+cmd;
//            pull_log.SendCmd(cmd,1);
//            qDebug()<<"导出成功";
//            QThread::msleep(3000);
//        }

//        emit LogPrintSingal("保存成功");


}

void logthread::StopLogSlot()
{
    qDebug()<<"stop111 log";

    pLogProcess->write("ctrl+c\n");


    pLogProcess->finished(1);
    pLogProcess->close();

   // LogProcess.kill();

   // LogProcess.terminate();
}
