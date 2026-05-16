#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    char produto[40];
    
    int quantidade;
    float valorUnitario;
    float valorTotal;
    
    cout << "Digite o nome do produto: ";
    cin >> produto;
    
    cout << "Digite a quantidade em estoque: ";
    cin >> quantidade;
    
    cout << "Digite o valor unitário: ";
    cin >> valorUnitario;
    
    valorTotal = (valorUnitario * quantidade);
    
    cout << "O nome do produto é: " << produto << endl;
    cout << "A quantidade de " << produto << " Em estoque é: " << quantidade << endl;
    cout << "O valor unitário de " << produto << " é R$" << valorUnitario << endl;
    
    cout << "O valor total em estoque é: R$" << valorTotal << endl;
    
    if (quantidade >= 100) {
       cout << "Estoque alto!";
    }
    else if (quantidade >= 50 and quantidade <= 99) {
        cout << "Estoque médio";
    }
    else {
        cout << "Estoque baixo";
    }
    
    
}