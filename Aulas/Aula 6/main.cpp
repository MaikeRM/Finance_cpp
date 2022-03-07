#include <iostream>
#include <math.h>
#include "operadores.h"

using namespace std;

int main()
{
    const double monthsInYear = 12;
    const double percentDenominator = 100;
    double yearsOfLoan = 0;
    double principal = 0.0;
    double humanInterest = 0.0;
    double payment;
    
    inicio:
    cout << "Enter the principal amount: "; cin >> principal;
    cout << "Enter the interest rate: "; cin >> humanInterest;
    
    double interest = divisor(humanInterest, percentDenominator);
    
    cout << "Enter the years of loan: "; cin >> yearsOfLoan;
    
    double monthInterest = divisor(interest, monthsInYear);
    double monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);
    
    payment = payments(principal, monthInterest, monthsOfLoan);
    cout << "Payment: "<< payment << endl;

    system("pause");
    goto inicio;
    return 0;
    
}