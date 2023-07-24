#ifndef SOLUCAO_H
#define SOLUCAO_H
#include "data.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

extern double **matrizAdj;
extern int dimensao;

typedef struct Solucao{
    vector<int> sequencia;
    double valorObj;
};

void exibirSolucao(Solucao &s);
void calcularValorObj(Solucao &s);

#endif