#ifndef ITERATIVO_H
#define ITERATIVO_H
#include <QString>

namespace Pedro{

class iterativo
{
public:
    iterativo();
    int nCubos(int n);
    QString nmNaturais(int n);
    int menorElemento(int *vetor, int tamanho);
    QString converterBinario(int valor);
};

}

#endif // ITERATIVO_H
