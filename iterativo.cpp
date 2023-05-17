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
    int menor = vetor[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] < menor)
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
    if (N1 == 0 || N2 == 0)
    {
        return 0;
    }
    if ((N1 < 0) != (N2 < 0))
    {
        int aux = abs(N1);
        N1 = abs(N1);
        for (int i = abs(N2) - 1; i > 0; i--)
        {
            N1 += aux;
        }
        return -N1;
    }
    int aux = abs(N1);
    N1 = abs(N1);
    for (int i = abs(N2) - 1; i > 0; i--)
    {
        N1 += aux;
    }
    return N1;
}

}
