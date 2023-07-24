#include "solucao.h"

void exibirSolucao(Solucao &s){
    for(int i = 0; i < s.sequencia.size() - 1; i++)
        cout << s.sequencia[i] << " -> ";
    cout << s.sequencia.back() << endl;

    cout << "Custo da solução: " << s.valorObj << endl;
}

void calcularValorObj(Solucao &s){
    s.valorObj = 0;
    for(int i = 0; i < s.sequencia.size() - 1; i++)
        s.valorObj += matrizAdj[s.sequencia[i]][s.sequencia[i+1]];
}