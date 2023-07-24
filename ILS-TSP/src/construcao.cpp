#include "construcao.h"
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

Solucao Construcao(){ 
    Solucao s;
    s.sequencia = escolher3NosAleatorios();

    vector<int> CL = nosRestantes(s);

    while(!CL.empty()){
        vector<InfoInsercao> infoCusto;
        
        infoCusto = calcularCustoInsercao(s, CL);
        sort(infoCusto.begin(), infoCusto.end(), ordernarPorCusto);
        
    
        double alpha = (double) rand() / RAND_MAX;
        int selecionado = rand() % ((int) ceil(alpha * infoCusto.size()));

        s.sequencia.insert(
        s.sequencia.begin() + infoCusto[selecionado].arestaRemovida + 1,
        infoCusto[selecionado].noInserido);

        CL.erase(remove(CL.begin(), CL.end(), infoCusto[selecionado].noInserido), CL.end());       
    }
    
    calcularValorObj(s);
    
    return s;
}


vector<int> escolher3NosAleatorios(){
    vector<int> subTourInicial = {1};
    
    for(int i = 0; i < 3; i++){
        
        int noAleatorio = rand() % (dimensao - 1) + 2;
        
        while((count(subTourInicial.begin(), subTourInicial.end(), noAleatorio) == 1)){
            int noAleatorio = rand() % (dimensao - 1) + 2;

        }
        subTourInicial.push_back(noAleatorio);
    }

    subTourInicial.push_back(1);

    return subTourInicial;
}

vector<int> nosRestantes(Solucao &s){
    vector<int> nosSobrando;
    for(int i = 1; i <= dimensao; i++){
        if(count(s.sequencia.begin(), s.sequencia.end(), i) == 0){
            nosSobrando.push_back(i);
        }
    }

    return nosSobrando;
}