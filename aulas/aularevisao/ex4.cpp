#ifndef NUMEROCOMPLEXO_HPP
#define NUMEROCOMPLEXO_HPP

#include <string>
using namespace std;

// Classe NumeroComplexo
class NumeroComplexo
{
public:
    // Atributos do numero. Públicos, sem validação necessária
    double Real;
    double Imag;

    // Construtor que recebe apenas a parte real
    NumeroComplexo(double real)
    {
        Real = real;
        Imag = 0;
    }

    // Construtor que recebe os dois parametros.
    // Para evitar repetição de código, esse contrutor invoca o acima para
    // definir a parte real
    NumeroComplexo(double real, double imag) : NumeroComplexo(real)
    {
        Imag = imag;
    }

    // Método para soma
    void Soma(NumeroComplexo num)
    {
        Real += num.Real;
        Imag += num.Imag;
    }

    // Método para subtração
    void Subtracao(NumeroComplexo num)
    {
        Real -= num.Real;
        Imag -= num.Imag;
    }

    // Método para comparação de dois numeros complexos
    bool Equals(NumeroComplexo complexo)
    {
        // Compara cada parte do numero complexo
        return Real == complexo.Real &&
               Imag == complexo.Imag;
    }

    // Método para imprimir no formato (R, I)
    string ToString()
    {
        return "(" + std::to_string(Real) + ", " + std::to_string(Imag) + ")";
    }
};

#endif