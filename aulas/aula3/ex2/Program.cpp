#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include "Triangulo.hpp" // Importa a sua classe!

int main() {
    std::cin.imbue(std::locale::classic());
    std::cout.imbue(std::locale::classic());

    // 1. Instanciação dos objetos na STACK (Sem a palavra 'new'!)
    Triangulo x;
    Triangulo y;

    // Pega com usuario medidas do triangulo X e salva nos atributos do objeto X
    std::cout << "Digite as medidas do triangulo X:" << std::endl;
    std::cin >> x.A >> x.B >> x.C;

    // Pega com usuario medidas do triangulo Y e salva nos atributos do objeto Y
    std::cout << "Digite as medidas do triangulo Y:" << std::endl;
    std::cin >> y.A >> y.B >> y.C;
double areaX = x.calcularArea();
    double areaY = y.calcularArea();

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Area do triangulo X: " << areaX << std::endl;
    std::cout << "Area do triangulo Y: " << areaY << std::endl;

    std::cout << "O triangulo de maior area e " << (areaX > areaY ? "X" : "Y") << std::endl;

    return 0;
}