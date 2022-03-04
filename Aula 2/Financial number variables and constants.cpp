#include <iostream>

using namespace std;

int main()
{
    const int monthsInYear = 12;
    
    double principal = 10000;
    double interest = 0.05;
    int yearsOfLoan = 30;

    double monthInterest = interest/monthsInYear;
    long monthsOfLoan = yearsOfLoan * monthsInYear;
    
    cout <<"\n Principal:" <<principal
        <<"\n Interest:" << interest
        << "\n Years of Loan:" << yearsOfLoan
        << "\n Months Interest:" << monthInterest
        << "\n Months of Loan:" <<monthsOfLoan << "\n" 
        << endl;
    
    return 0;
}