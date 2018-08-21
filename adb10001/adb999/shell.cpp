#include "shell.h"

shell::shell(QObject *parent) : QObject(parent)
{

}

shell::~shell()
{

}

void shell::Sysshell()
{
      system("adb shell");
}

