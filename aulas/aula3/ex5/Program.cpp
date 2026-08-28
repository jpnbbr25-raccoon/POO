#include <iostream>
#include <string>
#include "Pessoa.hpp" 

using namespace Course; 

int main() {
    // Variáveis temporárias para armazenar o que o usuário digitar
    std::string nome;
    int idade;

    // Pega dados da primeira pessoa
    std::cout << "Dados da primeira pessoa:" << std::endl;
    std::cout << "Nome: ";
    std::cin >> nome;
    std::cout << "Idade: ";
    std::cin >> idade;

    // Declara e instancia pessoa1 com construtor direto na STACK
    Pessoa pessoa1(nome, idade);

    // Pega dados da segunda pessoa
    std::cout << "Dados da segunda pessoa:" << std::endl;
    std::cout << "Nome: ";
    std::cin >> nome; // Reaproveitamos a variável
    std::cout << "Idade: ";
    std::cin >> idade; // Reaproveitamos a variável

    // Declara e instancia pessoa2 com construtor direto na STACK
    Pessoa pessoa2(nome, idade);

    // Mostra nome da pessoa mais velha
    std::cout << "Pessoa mais velha: " 
              << (pessoa1.Idade > pessoa2.Idade ? pessoa1.Nome : pessoa2.Nome) 
              << std::endl;

    return 0;
}