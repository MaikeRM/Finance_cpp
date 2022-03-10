#include <iostream>
#include "bsm.h"

using namespace std;

double get_data(double& S, double& K, double& time, double& volatility, double& riskFree)
{
    cout<<"Price: "; cin>> S;
    cout<<"Strike: "; cin>> K;
    cout<<"Time: "; cin>> time;
    cout<<"Volatility: "; cin>> volatility;
    cout<<"Risk Free Rate: "; cin>> riskFree;
}


int main()
{
    double optionPrice, optionDelta,S, K, time, volatility, riskFree;
    
    begining:
    get_data(S, K, time, volatility, riskFree);
    optionDelta = CallDelta(S, K, time, volatility, riskFree);
    cout <<optionDelta<<endl;

    optionPrice = CallPrice(S, K, time, volatility, riskFree);
    cout <<optionPrice<<endl;

    goto begining;

    return 0;
}