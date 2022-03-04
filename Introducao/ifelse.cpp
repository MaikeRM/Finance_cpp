#include <iostream>

using namespace std;

int main()
{
    int num;
    char opc;

    cout << "\nDigite um numero inteiro: ";
    cin >> num;

    cout << "Digite (s/n)";
    cin >> opc;


    if(num > 10 and opc == 's'){
        cout << "Valor maior ou igual a 10";
    }
    else if(num < 10 and opc == 's'){
        cout << "Valor menor ou igual a 10";
    }
    else{
        cout << "opcao n";
    }
    system("pause");
    return 0;

}