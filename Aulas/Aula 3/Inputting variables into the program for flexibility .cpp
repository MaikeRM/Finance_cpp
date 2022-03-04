#include <iostream>

using namespace std;

int main()
{
    const int monthsInYear = 12;
    double principal;
    double interest;
    int yearsOfLoan;

    cout << "\nInput the Principal value: ";
    cin >> principal;

    cout << "Input the Interest rate: ";
    cin >> interest;

    cout << "Input the Years of Loan: ";
    cin >> yearsOfLoan;    


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