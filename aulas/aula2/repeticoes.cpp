#include <iostream>
#include <cmath>   // Para std::sqrt
#include <iomanip> // Para std::fixed e std::setprecision

int main() {
    // ------------------------------------------------------------------------------------------ //
    // Estrutura repetitiva while – Enquanto
    // ------------------------------------------------------------------------------------------ //

    std::cout << "Estrutura repetitiva while" << std::endl;

    int n1 = 1;

    // Executa comandos dentro das chaves enquanto numero for maior que 0
    while (n1 > 0) {
        std::cout << "Digite um numero inteiro: ";
        std::cin >> n1;

        double raizQuadrada = std::sqrt(n1);
        
        // Configura a saída para notação fixa com 4 casas decimais
        std::cout << std::fixed << std::setprecision(4) << raizQuadrada << std::endl;
    }

    // ------------------------------------------------------------------------------------------ //
    // Estrutura repetitiva do-while
    // ------------------------------------------------------------------------------------------ //

    std::cout << "Estrutura repetitiva do-while" << std::endl;

    int n2 = 0;

    // Primeira execução ocorre mesmo com n2 = 0.
    // Depois, executa comandos dentro das chaves enquanto numero for maior que 0
    do {
        std::cout << "Digite um numero inteiro: ";
        std::cin >> n2;

        double raizQuadrada = std::sqrt(n2);
        std::cout << std::fixed << std::setprecision(4) << raizQuadrada << std::endl;
    } while (n2 > 0);

    // ------------------------------------------------------------------------------------------ //
    // Estrutura repetitiva for
    // ------------------------------------------------------------------------------------------ //

    std::cout << "Estrutura repetitiva for" << std::endl;

    // Em C++, arrays nativos são declarados com os colchetes após o nome
    int array[] = { 1, 20, 3, 45, 52 };

    // Laço executa 5 vezes, com i variando de 0 a 4
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << std::endl;
    }

    // ------------------------------------------------------------------------------------------ //
    // Estrutura repetitiva foreach (Range-based for loop no C++)
    // ------------------------------------------------------------------------------------------ //

    std::cout << "Estrutura repetitiva foreach" << std::endl;

    // Laço range-based: 'i' assume uma cópia de cada item do array a cada iteração
    for (int i : array) {
        std::cout << i << std::endl;
    }

    return 0;
}