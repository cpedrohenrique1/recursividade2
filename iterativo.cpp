#include "iterativo.h"

namespace Pedro{

iterativo::iterativo()
{}

int iterativo::nCubos(int n)
{
    int valor = 0;
    for (int i = 1; i <= n; i++)
    {
        valor += pow(i, 3);
    }
    return valor;
}

QString iterativo::nmNaturais(int n)
{
    QString resultado = "";
    for (int i = n; i >= 0; i--)
    {
        if (i == 0)
        {
            resultado += QString::number(i);
        }
        else
        {
            resultado += QString::number(i) + ", ";
        }
    }
    return resultado;
}

int iterativo::menorElemento(int *vetor, int tamanho)
{
    if (tamanho == 0)
    {
        throw QString("Vetor esta vazio");
    }
    if (tamanho == 1)
    {
        return vetor[0];
    }
    int menor = vetor[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (menor > vetor[i])
        {
            menor = vetor[i];
        }
    }
    return menor;
}

QString iterativo::converterBinario(int valor)
{
    QString bin = "";
    while (valor > 0)
    {
        bin += QString::number(valor % 2);
        valor /= 2;
    }
    QString saida = "";
    for (int i = bin.size()-1; i >= 0; i--)
    {
        saida += bin[i];
    }
    return saida;
}

int iterativo::valordeK(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    int aux = x;
    for (int i = y; i > 1; i--)
    {
        aux *= x;
    }
    return aux;
}

int iterativo::multiplicacao(int N1, int N2)
{
    int aux = N1;
    if (N1 == 0 || N2 == 0)
    {
        return 0;
    }
    if (!(N1 < 0) != !(N2 < 0))
    {
        for (int i = N2 - 1; i > 0; i--)
        {
            N1 += aux;
        }
        return N1;
    }
    for (int i = N2 - 1; i > 0; i--)
    {
        N1 += aux;
    }
    return N1;
}

}
