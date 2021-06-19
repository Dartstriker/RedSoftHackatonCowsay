#include "scriptexecuter.h"

ScriptExecuter::ScriptExecuter()
{

}

void ScriptExecuter::ExecuteScriptByName()
{
    QString data;
    QString fileName(":/bash/bash");

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)) {
        //gg wp
    }
    else
    {
        data = file.readAll();
    }

    file.close();

    system(qPrintable(data));
}
