#include <iostream>
#include "bsm.h"

using namespace std;

double get_data(double& S, double& K, double& tempo, double& volatilidade, double& riskFree)
{
    cout<<"Preco acao: "; cin>> S;
    cout<<"Preco Strike: "; cin>> K;
    cout<<"Tempo: "; cin>> tempo;
    cout<<"Volatilidade: "; cin>> volatilidade;
    cout<<"Risk Free Rate: "; cin>> riskFree;
}


int main()
{
    double optionPrice, optionDelta,S, K, tempo, volatilidade, riskFree;
    
    inicio:

    get_data(S, K, tempo, volatilidade, riskFree);
    optionDelta = CallDelta(S, K, tempo, volatilidade, riskFree);
    cout <<optionDelta<<endl;

    optionPrice = CallPreco(S, K, tempo, volatilidade, riskFree);
    cout <<optionPrice<<endl;

    goto inicio;

    return 0;
}