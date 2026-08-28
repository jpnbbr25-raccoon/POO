#pragma once
#include <string>

namespace Course {

    class Funcionario {
    public: // Abrimos a zona pública de acesso para atributos e métodos
        
        // 1. Atributos
        std::string Nome;
        double SalarioBruto = 0.0; // Boa prática C++11: inicialização padrão para evitar lixo de memória
        double Imposto = 0.0;

        // 2. Método com retorno (Calcula e devolve a resposta)
        double SalarioLiquido() {
            return SalarioBruto - Imposto;
        }

        // 3. Método sem retorno (Apenas altera o estado interno do objeto)
        void AumentarSalario(double Porcentagem) {
            // Dica de performance em C++: usar o '.0' força o compilador 
            // a tratar os números inteiros como double logo de cara.
            SalarioBruto *= (100.0 + Porcentagem) / 100.0;
        }
    }; // <-- Ponto e vírgula obrigatório!

}