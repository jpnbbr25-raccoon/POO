#pragma once 
#include <cmath> // Precisamos incluir aqui agora, pois a classe usa o std::sqrt

class Triangulo {
public: 
    // 1. ATRIBUTOS (O que o objeto TEM)
    double A;
    double B;
    double C;

    // 2. MÉTODO (O que o objeto FAZ)
    // Criamos uma função que retorna um double
    double calcularArea() {
        double p = (A + B + C) / 2.0;
        double area = std::sqrt(p * (p - A) * (p - B) * (p - C));
        
        return area; // Devolve o resultado para quem chamou
    }
}; 