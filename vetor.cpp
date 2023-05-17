#include "vetor.h"

vetor::vetor():
    tamanho(0),
    vet(0)
{}

vetor::~vetor()
{
    delete [] vet;
}
