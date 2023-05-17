#ifndef ITERATIVO_H
#define ITERATIVO_H
#include <QString>
#include <cmath>

namespace Pedro{

class iterativo
{
public:
    iterativo();
    int nCubos(int n);
    QString nmNaturais(int n);
    int menorElemento(int *vetor, int tamanho);
    QString converterBinario(int valor);
    int valordeK(int x, int y);
    int multiplicacao(int N1, int N2);
};

}

#endif // ITERATIVO_H
