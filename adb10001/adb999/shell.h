#ifndef SHELL_H
#define SHELL_H




#include  <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

#include <QObject>

class shell : public QObject
{
    Q_OBJECT
public:
    explicit shell(QObject *parent = 0);
    ~shell();

signals:

public slots:


 void   Sysshell(void);
};

#endif // SHELL_H
