#include <iostream>

using namespace std;

//funcao divisor entre 2 numeros
double divisor(double nominador, double denominador)
{
    //essa funcao divide dois numeros
    //e retorna o resultado
    return nominador/denominador;
}

//funcao multiplicador entre 2 numeros
double multiplicador(double primeiroNumero, double segundoNumero)
{
    //essa funcao multiplica dois numeros
    //e retorna o resultado
    return primeiroNumero*segundoNumero;
}

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


    double monthInterest = divisor(interest, monthsInYear);
    long monthsOfLoan = multiplicador(yearsOfLoan,  monthsInYear);

    cout <<"\n Principal:" <<principal
        <<"\n Interest:" << interest
        << "\n Years of Loan:" << yearsOfLoan
        << "\n Months Interest:" << monthInterest
        << "\n Months of Loan:" <<monthsOfLoan << "\n" 
        << endl;
    
    return 0;
}