#pragma once
#include <string>

namespace Course {

    class Pessoa {
    public: 
        std::string Nome;
        int Idade;

        // Construtor: Repare nos dois pontos (:) após os parâmetros!
        Pessoa(std::string nome, int idade) : Nome(nome), Idade(idade) {
            // O corpo do construtor fica vazio, pois a atribuição já foi feita acima.
        }
    };

}