#pragma once
#include <string>

namespace Course {

    class Pessoa {
    public: 
        std::string Nome;
        int Idade;
        double Altura;

        // Construtor 1: Apenas Nome e Idade
        // ATENÇÃO: Adicionamos Altura(0.0) para limpar a memória!
        Pessoa(std::string nome, int idade) : Nome(nome), Idade(idade), Altura(0.0) {
        }

        // Construtor 2: Nome, Idade e Altura
        Pessoa(std::string nome, int idade, double altura) : Nome(nome), Idade(idade), Altura(altura) {
        }
    };

}