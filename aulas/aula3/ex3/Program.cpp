#include <iostream>
#include <string>
#include "Pessoa.hpp" // Importa a classe do outro arquivo

using namespace Course; // Permite usar 'Pessoa' direto, sem digitar 'Course::Pessoa'

int main() {
    // 1. Instanciação na STACK (Lembre-se: fuja do 'new' no C++!)
    Pessoa pessoa1;
    Pessoa pessoa2;

    // Pega dados da primeira pessoa e salva no objeto pessoa1
    std::cout << "Dados da primeira pessoa:" << std::endl;
    std::cout << "Nome: ";
    std::cin >> pessoa1.Nome; 
    std::cout << "Idade: ";
    std::cin >> pessoa1.Idade;

    // Pega dados da segunda pessoa e salva no objeto pessoa2
    std::cout << "Dados da segunda pessoa:" << std::endl;
    std::cout << "Nome: ";
    std::cin >> pessoa2.Nome;
    std::cout << "Idade: ";
    std::cin >> pessoa2.Idade;

    // Mostra nome da pessoa mais velha usando o operador ternário
    std::cout << "Pessoa mais velha: " 
              << (pessoa1.Idade > pessoa2.Idade ? pessoa1.Nome : pessoa2.Nome) 
              << std::endl;

    return 0;
}