#include <iostream>
#include <cmath>
#include "binModel01.h"

using namespace std;

//--------------------------------------------------------------------------------- main
int main()
{
    double S0, U, D, R;
    int n, i;

    if(getData(S0, U, D, R, n, i)==1)
        return 1;
    
    //computando probabilidade risk-neutral
    cout << "q = " << riskNeutral(U, D, R);

    //calculo da funcao preco
    cout << "S(n,i) = " << S(S0, U, D, n, i);

    system("pause");
}