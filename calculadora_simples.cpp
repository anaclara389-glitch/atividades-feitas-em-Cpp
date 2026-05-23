#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char operador;
    
    cout << "Calculadora simples" << endl;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;
    cout << "Digite o operador (+, -, *): " << endl;
    cin >> operador;
    
    switch(operador){
        case '+':
            cout << num1 + num2;
            break;
        
        case '-':
            cout << num1 - num2;
            break;
            
        case '*':
            cout << num1 * num2;
            break;
        
        default:
            break;
    }
    
    
    return 0;
}