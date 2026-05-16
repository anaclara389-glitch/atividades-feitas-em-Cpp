#include <iostream>
#include <string>

int main() {
    double nota1, nota2, nota3;
    
    std::cout << "Digite a nota 1: ";
    std::cin >> nota1;

    std::cout << "Digite a nota 2: ";
    std::cin>>nota2;
    
    std::cout << "Digite a nota 3: ";
    std::cin>>nota3;
    
    double media = (nota1 + nota2 + nota3) / 3;
    
    if (media >= 7) {
        std::cout <<"Você foi aprovado!" << "Sua média foi: "<< media;
    } 
    else if (media >= 3 and media <= 6) {
        std::cout <<"Você foi reprovado!" << "Sua média foi: " << media;
    } 
    else {
        std::cout <<"Você ficou de exame!" << "Sua média foi: "<< media;
    }
    
}
    
    
    
    
    
    
    
    