#include <iostream>
#include <cmath>

using namespace std;

void lines()
{
    cout << "--------------------------------------------------------------------" << endl;
}

//--------------------------------------------------------------------------------- getData

int getData(double& S0, double& U, double& D, double& R, int& n, int& i)
{

    //input dos dados
    cout << "Insira S0: "; cin >> S0; //Valor a vista/SPOT
    cout << "Insira U: "; cin >> U; //probabilidade de alta
    cout << "Insira D: "; cin >> D; //probabilidade de baixa
    lines();

    cout << "n = "; cin >> n;
    cout << "i= "; cin >> i;

    //Verificando nao-arbitragem
    if(R>U || R<=D)
    {
        cout << "Existe arbitragem" << endl;
        cout << "Finalizando o prgrama" << endl;
        lines();
        return 1;
    }

    //garantindo que 0<S0, -1<D<U, -1<R
    if(S0<=0.0 || U <=-1.0 || U<=D || R<=-1.0)
    {
        cout << "Range de dados incoerentes" << endl;
        cout << "Finalizando o programa" << endl;
        lines();

        return 1;
    }

    cout << "Dados inputados checados" << endl;
    lines();
}

//--------------------------------------------------------------------------------- riskNeutral
double riskNeutral(double U, double D, double R)
{
    //computando probabilidade risk-neutral
    return (R-D)/(U-D);
}

//--------------------------------------------------------------------------------- preco
double S(double S0, double U, double D, int n, int i)
{
    return S0*pow(1+U,i)*pow(1+D,n-i);
}
