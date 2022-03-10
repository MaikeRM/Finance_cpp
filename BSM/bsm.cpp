#include <iostream>
#include <math.h>
#include <cmath>
#include <stdexcept>

using namespace std;

/*

S = spot price
K = strike
Preco = preço da opção

 */

double normalCDF(double value)
{
   return 0.5 * erfc(-value * sqrt(0.5));
}


double CallDelta(double S, double K, double time, double volatility ,double riskFree)
{
    double b, x1, z1;
    
    b = exp(-riskFree*time);
    x1 = log(S/(b*K)) + 0.5*(pow(volatility,2))*time;
    x1 = x1/(volatility*(pow(time,0.5)));
    z1 = normalCDF(x1);

    return z1;
    
}

double CallPrice(double S, double K, double time, double volatility, double riskFree)
{
    double b, x1, x2, z1, z2;
        
    b = exp(-riskFree*time);
    x1 = log(S/(b*K)) + 0.5*(pow(volatility,2))*time;
    x1 = x1/(volatility*(pow(time,0.5)));
    z1 = normalCDF(x1);
    z1 = z1*S;

    x2 = log(S/(b*K)) - 0.5*(pow(volatility,2))*time;
    x2 = x2/(volatility*(pow(time,0.5)));
    z2 = normalCDF(x2);
    z2 = b*K*z2;

    return z1 - z2;
}