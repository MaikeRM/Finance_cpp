#include "operadores.h"
#include <math.h>

double divisor(double numerator, double denominator)
{
    // This function divides two numbers
    // and returns the result.
    
    return numerator/denominator;
    
}


double multiplier(double firstNum, double secondNum)
{
    // This function multiplies two numbers
    // and returns the result.
    
    return firstNum * secondNum;
    
}


double payments(double principal, double monthInterest, double monthsOfLoan)
{
    return principal*(monthInterest/(1-(pow(1+monthInterest, -monthsOfLoan))));
}