#include <iostream>
#include <string>
#include <cmath> // Para std::pow

int main() {
    // ------------------------------------------------------------------------------------------ //
    // Operadores aritméticos
    // ------------------------------------------------------------------------------------------ //

    std::cout << "Operadores aritmeticos" << std::endl;

    int n1 = 3 + 4 * 2;
    int n2 = (3 + 4) * 2;
    int n3 = 17 / 3;
    int n4 = 17 % 3;

    double n5 = std::pow(2.0, 3.0); // 2^3

    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;
    std::cout << n4 << std::endl;
    std::cout << n5 << std::endl;

    // ------------------------------------------------------------------------------------------ //
    // Operadores de atribuição
    // ------------------------------------------------------------------------------------------ //

    std::cout << std::endl;
    std::cout << "Operadores de atribuicao" << std::endl;

    int n6 = 10;
    std::cout << n6 << std::endl;

    n6 += 2;
    std::cout << n6 << std::endl;

    n6 *= 3;
    std::cout << n6 << std::endl;

    std::string str = "ABC";
    std::cout << str << std::endl;

    str += "DEF";
    std::cout << str << std::endl;

    // ------------------------------------------------------------------------------------------ //
    // Operadores postfix e prefix
    // ------------------------------------------------------------------------------------------ //

    std::cout << std::endl;
    std::cout << "Operadores postfix e prefix" << std::endl;

    int n7 = 1;
    std::cout << n7++ << std::endl;    // Imprime 1, depois incrementa para 2
    std::cout << n7 << std::endl;      // 2

    std::cout << n7-- << std::endl;    // Imprime 2, depois decrementa para 1
    std::cout << n7 << std::endl;      // 1

    std::cout << ++n7 << std::endl;    // Incrementa para 2, depois imprime 2
    std::cout << n7 << std::endl;      // 2

    std::cout << --n7 << std::endl;    // Decrementa para 1, depois imprime 1
    std::cout << n7 << std::endl;      // 1

    // ------------------------------------------------------------------------------------------ //
    // Operadores comparativos (usando std::boolalpha para exibir true/false)
    // ------------------------------------------------------------------------------------------ //

    std::cout << std::endl;
    std::cout << "Operadores comparativos" << std::endl;

    // Em C++, por padrão booleans imprimem 1 ou 0. 
    // std::boolalpha faz imprimir "true" ou "false" como no C#.
    std::cout << std::boolalpha;

    std::cout << (10 > 11) << std::endl;
    std::cout << (10 < 11) << std::endl;
    std::cout << (11 >= 11) << std::endl;
    std::cout << (10 <= 11) << std::endl;
    std::cout << (10 == 11) << std::endl;
    std::cout << (10 != 11) << std::endl;

    // ------------------------------------------------------------------------------------------ //
    // Operadores lógicos
    // ------------------------------------------------------------------------------------------ //

    std::cout << std::endl;
    std::cout << "Operadores logicos" << std::endl;

    std::cout << (true || false && !false) << std::endl;    // true
    std::cout << ((true || false) && !true) << std::endl;   // false

    // ------------------------------------------------------------------------------------------ //
    // Conversão implícita e casting
    // ------------------------------------------------------------------------------------------ //

    std::cout << std::endl;
    std::cout << "Conversao implicita e casting" << std::endl;

    float n8 = 1.25f;
    double n9 = n8;     // Conversão implícita permitida (promoção de tipo: 4 bytes -> 8 bytes)

    std::cout << n8 << std::endl;
    std::cout << n9 << std::endl;

    // Casting explícito no padrão C++ moderno (static_cast)
    float n10 = static_cast<float>(n9); 
    std::cout << n10 << std::endl;

    int n11 = static_cast<int>(n8);     // Trunca a parte decimal (1.25 -> 1)
    std::cout << n11 << std::endl;

    // ------------------------------------------------------------------------------------------ //

    int a = 10;
    int b = 3;
    
    // Divisão inteira (10 / 3 = 3), depois convertida para double (3.0)
    double c = a / b;
    std::cout << c << std::endl;

    // Pelo menos um operando vira double, forçando divisão em ponto flutuante (3.33333...)
    double d = static_cast<double>(a) / b;
    std::cout << d << std::endl;

    return 0;
}