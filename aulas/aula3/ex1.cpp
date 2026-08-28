#include <iostream>
#include <cmath>   // Para std::sqrt
#include <iomanip> // Para std::fixed e std::setprecision
#include <locale>  // Para std::locale::classic()

int main() {
    // Aplica o "InvariantCulture" para entrada e saída no terminal
    std::cin.imbue(std::locale::classic());
    std::cout.imbue(std::locale::classic());

    // Variaveis para os lados dos triangulos
    double xA, xB, xC, yA, yB, yC;

    // Pega com usuario medidas do triangulo X
    std::cout << "Digite as medidas do triangulo X:" << std::endl;
    std::cin >> xA >> xB >> xC;

    // Pega com usuario medidas do triangulo Y
    std::cout << "Digite as medidas do triangulo Y:" << std::endl;
    std::cin >> yA >> yB >> yC;

    // Calculo da area de X
    double p = (xA + xB + xC) / 2.0;
    double areaX = std::sqrt(p * (p - xA) * (p - xB) * (p - xC));

    // Calculo da area de Y
    p = (yA + yB + yC) / 2.0;
    double areaY = std::sqrt(p * (p - yA) * (p - yB) * (p - yC));

    // Exibicao dos resultados formatados com 4 casas decimais
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Area do triangulo X: " << areaX << std::endl;
    std::cout << "Area do triangulo Y: " << areaY << std::endl;

    // Operador ternário para exibir o maior
    std::cout << "O triangulo de maior area e " << (areaX > areaY ? "X" : "Y") << std::endl;

    return 0;
}