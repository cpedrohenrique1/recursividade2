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
    QString converterBinario(int valor);
    int valordeK(int x, int y);
    int multiplicacao(int N1, int N2);
};

}

#endif // RECURSIVO_H
