#include <iostream>
#include <string>
#include <locale>
#include "Pessoa.hpp"

using namespace Course;

int main() {
    // Aplica o "InvariantCulture" para garantir a leitura da altura com ponto
    std::cin.imbue(std::locale::classic());
    std::cout.imbue(std::locale::classic());

    std::string nome;
    int idade;
    double altura;

    // Pega dados da primeira pessoa e salva nas variáveis temporárias
    std::cout << "Dados da primeira pessoa:" << std::endl;
    std::cout << "Nome: ";
    std::cin >> nome;
    std::cout << "Idade: ";
    std::cin >> idade;

    // Declara e instancia pessoa1 usando o Construtor 1 (apenas nome e idade)
    Pessoa pessoa1(nome, idade);

    // Pega dados da segunda pessoa 
    std::cout << "Dados da segunda pessoa:" << std::endl;
    std::cout << "Nome: ";
    std::cin >> nome;
    std::cout << "Idade: ";
    std::cin >> idade;
    std::cout << "Altura: ";
    std::cin >> altura;

    // Declara e instancia pessoa2 usando o Construtor 2 (nome, idade e altura)
    Pessoa pessoa2(nome, idade, altura);

    // Mostra nome da pessoa mais velha
    std::cout << "Pessoa mais velha: " 
              << (pessoa1.Idade > pessoa2.Idade ? pessoa1.Nome : pessoa2.Nome) 
              << std::endl;

    // Exibe altura das duas pessoas
    std::cout << "Altura da pessoa 1: " << pessoa1.Altura << std::endl;
    std::cout << "Altura da pessoa 2: " << pessoa2.Altura << std::endl;

    return 0;
}