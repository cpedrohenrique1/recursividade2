#ifndef RECURSIVO_H
#define RECURSIVO_H
#include <QString>

namespace Pedro{

class recursivo
{
public:
    recursivo();
    int nCubos(int n);
    QString nmNaturais(int n);
    int menorElemento(int *vetor, int tamanho);
    QString converterBinario(int valor, QString resultado = "");
    int valordeK(int x, int y);
};

}

#endif // RECURSIVO_H
