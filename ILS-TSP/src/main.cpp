#include "data.h"
#include "solucao.h"
#include "construcao.h"

double **matrizAdj; // matriz de adjacência
int dimensao; // quantidade total de vértices

int main(int argc, char** argv) {
    srand(time(NULL));
    Data(argc, argv, &dimensao, &matrizAdj);

    /*
    for(int i = 1; i <= dimensao; i++){
        for(int j = 1; j <= dimensao; j++){
            cout << matrizAdj[i][j] << " ";
        }
        cout << endl;
    }
    */

    Solucao s = Construcao();

    calcularValorObj(s);

    exibirSolucao(s);

    return 0;
}