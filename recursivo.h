#ifndef RECURSIVO_H
#define RECURSIVO_H
#include <QString>

namespace Pedro{

class recursivo
{
public:
    recursivo();
    int nCubos(int n);
    QString nmNaturais(int n, QString resultado = "");
};

}

#endif // RECURSIVO_H