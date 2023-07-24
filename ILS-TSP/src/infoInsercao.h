#ifndef INFOINSERCAO_H
#define INFOINSERCAO_H
#include "solucao.h"

typedef struct InfoInsercao{
    int noInserido;
    int arestaRemovida;
    double custo;

};

vector<InfoInsercao> calcularCustoInsercao(Solucao &s, vector<int> &CL);
bool ordernarPorCusto(InfoInsercao &a, InfoInsercao &b);

#endif