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
    QString saida = "";
    while (valor > 0)
    {
        saida += QString::number(valor % 2);
        valor /= 2;
    }
    for (int i = saida.size() - 1; i >= 0; i--)
    {
        saida += saida[i];
    }
    return saida;
}

}
