#include <iostream>

using namespace std;

int main(){

    int num=10;

    cout << num << " -> numero \n"; 
    cout << - num << " -> numero - na frente\n";
    cout << num*-1 << " -> numero * -1\n";
    cout << num << " -> numero\n";

    num = num * -1;
    cout << num << " -> inversao definitiva";
}