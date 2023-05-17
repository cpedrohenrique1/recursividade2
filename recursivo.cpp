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
    if (tamanho == 1)
    {
        return vetor[0];
    }
    int menor = menorElemento(vetor, tamanho - 1);
    if (menor < vetor[tamanho - 1])
    {
        return menor;
    }
    return vetor[tamanho - 1];
}

QString recursivo::converterBinario(int valor)
{
    if (valor == 0)
    {
        return "";
    }
    return  converterBinario(valor / 2) + QString::number(valor % 2);
}

int recursivo::valordeK(int x, int y)
{
    if (y > 0)
    {
        return x * valordeK(x, y - 1);
    }
    return 1;
}

int recursivo::multiplicacao(int N1, int N2)
{
    if (N2 > 0)
    {
        return N1 + multiplicacao(N1, N2 - 1);
    }
    if (N2 == 0)
    {
        return 0;
    }
    return -multiplicacao(N1, abs(N2));
}

}
