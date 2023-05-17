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
        return 0;
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

QString recursivo::converterBinario(int valor, QString resultado)
{
    if (valor > 0)
    {
        return resultado+= converterBinario(valor - 1, resultado = QString::number(valor % 2));
    }
    return "";
}

int recursivo::valordeK(int x, int y)
{
    if (y > 0)
    {
        return x * valordeK(x, y - 1);
    }
    return 1;
}

}
