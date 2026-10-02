#include <iostream>
#include <string>
#include "ConversorPressao.hpp"
using namespace std;

int main() {

    //converter 50 mca para kPa
    double resultadoA = ConversorPressao::Converter(50, "mca", "kPa");
    cout << "50 mca para kPa: " << resultadoA << endl;

    //converter 120 kPa para psi
    double resultadoB = ConversorPressao::Converter(120, "kPa", "psi");
    cout << "(b) 120 kPa para psi: " << resultadoB << endl;

    //converter 3 bar para mca
    double resultadoC = ConversorPressao::Converter(3, "mca");
    cout << "(c) 3 bar para mca: " << resultadoC << endl;

    //testar uma unidade inválida
    double resultadoD = ConversorPressao::Converter(100, "invalido", "psi");
    cout << "(d) Teste unidade invalida: " << resultadoD << endl;

    return 0;
}