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
QString recursivo::nmNaturais(int n, QString resultado)
{
    if (n >= 0)
    {
        resultado += QString::number(n) + ", ";
        return nmNaturais(n - 1, resultado);
    }
    return resultado;
}

}
