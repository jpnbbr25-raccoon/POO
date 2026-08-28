#pragma once
#include <string> // Obrigatório para usar textos em C++

namespace Course {

    class Pessoa {
    public: // No C++, abrimos um bloco público para tudo que vem abaixo
        
        // Atributos da pessoa
        std::string Nome;
        int Idade;

    }; // O ponto e vírgula no final da classe é obrigatório!

}