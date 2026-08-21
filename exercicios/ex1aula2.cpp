#include <iostream>
#include <string>
#include <locale>

int main() {

    std::cout.imbue(std::locale::classic());
    // 1. Declaração para aceitar inteiros ou racionais
    double n1, n2, n3;

    // 2. Recebendo os 3 números do usuário
    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;
    
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2;
    
    std::cout << "Digite o terceiro numero: ";
    std::cin >> n3;

    std::cout << std::endl; // Pula uma linha para organizar a saída

    // 3. Verificando par/ímpar com Operador Ternário e Casting
    // Convertendo temporariamente para int apenas para poder usar o % 2
    std::string status1 = (static_cast<int>(n1) % 2 == 0) ? "par" : "impar";
    std::string status2 = (static_cast<int>(n2) % 2 == 0) ? "par" : "impar";
    std::string status3 = (static_cast<int>(n3) % 2 == 0) ? "par" : "impar";

    // Exibindo o resultado individual
    std::cout << "O primeiro numero e " << status1 << std::endl;
    std::cout << "O segundo numero e " << status2 << std::endl;
    std::cout << "O terceiro numero e " << status3 << std::endl;

    // 4. Calculando e exibindo a soma
    double soma = n1 + n2 + n3;
    std::cout << "Soma dos tres numeros: " << soma << std::endl;

    // 5. Calculando e exibindo a média
    // Dividimos por 3.0 para forçar uma divisão de ponto flutuante, como vimos nos operadores
    double media = soma / 3.0; 
    std::cout << "Media dos tres numeros: " << media << std::endl;

    return 0;
}