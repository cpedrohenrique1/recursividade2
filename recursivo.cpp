#include "recursivo.h"

namespace Pedro{

recursivo::recursivo()
{

}

int recursivo::nCubos(int n)
{
    if (n > 0)
    {
        return std::pow(n,3) + nCubos(n - 1);
    }
    return 0;
}
QString recursivo::nmNaturais(int n)
{
    QString resultado = "";
    if (n >= 0)
    {
        resultado += QString::number(n) + ", ";
        return resultado+= nmNaturais(n - 1);
    }
    return "";
}

int recursivo::menorElemento(int *vetor, int tamanho)
{
    if (tamanho == 0)
    {
        throw QString("Vetor esta vazio");
    }
    if (tamanho == 1)
    {
        return vetor[0];
    }
    int menor = menorElemento(vetor, tamanho - 1);
    if (menor > vetor[tamanho - 1])
    {
        menor = vetor[tamanho - 1];
    }
    return menor;
}

}
