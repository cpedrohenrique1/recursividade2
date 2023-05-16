#include "iterativo.h"

namespace Pedro{

iterativo::iterativo(){

}

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
        if (i == n)
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

int iterativo::menorElemento(int n)
{
    return 2;

}

}
