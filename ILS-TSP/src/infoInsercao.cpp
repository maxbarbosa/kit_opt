#include "infoInsercao.h"

vector<InfoInsercao> calcularCustoInsercao(Solucao &s, vector<int> &CL){
    InfoInsercao insInfo = {0, 0, 0};
    vector<InfoInsercao> custoInsercao;

    int l = 0;
    for(int a = 0, b = 1; l < s.sequencia.size() - 1; a++, b++){
        int i = s.sequencia[a];
        int j = s.sequencia[b];
        
        for(auto k : CL){
            insInfo.noInserido = k;
            insInfo.arestaRemovida = a;
            insInfo.custo = matrizAdj[i][k] + matrizAdj[j][k] - matrizAdj[i][j];

            custoInsercao.push_back(insInfo);
        }
        l++;
    }

    return custoInsercao;
}

bool ordernarPorCusto(InfoInsercao &a, InfoInsercao &b){
    if(a.custo < b.custo){
        return true;
    }
    return false;
}