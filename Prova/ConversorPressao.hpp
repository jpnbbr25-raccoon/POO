#include <iostream>
#include <string>
using namespace std;

class ConversorPressao {

private:
    //metodos static privados para conversao
    static double paraBar(double valor, string unidade) {
        if (valor < 0) return -1;

        if (unidade == "bar"){
         return valor;
        }

        if (unidade == "kPa"){
         return valor / 100.0;
        }

        if (unidade == "psi") {
        return valor / 14.504;
        }

        if (unidade == "mca"){
        return valor / 10.197;
        }

        return -1; //retorna -1 se for invalida
    }

    static double deBar(double valorBar, string unidadeDestino) {
        if (valorBar < 0){ 
            return -1;
        }

        if (unidadeDestino == "bar"){
         return valorBar;
        }

        if (unidadeDestino == "kPa"){
         return valorBar * 100.0;
        }
        if (unidadeDestino == "psi") {
        return valorBar * 14.504;
    }
        if (unidadeDestino == "mca") {
        return valorBar * 10.197;
        }

        return -1; //retorna igual o de cima
    }

public:
    //sbrecarga q recebe valor, unidade de origem e unidade de destino
    static double Converter(double valor, string origem, string destino) {
        if (valor < 0){ 
            return -1;
        }

        double valorEmBar = paraBar(valor, origem);
        if (valorEmBar == -1){ 
            return -1;
        }
        return deBar(valorEmBar, destino);
    }

    //sobrecarga q recebe valor em bar e a unidade de destino
    static double Converter(double valorBar, string destino) {
        if (valorBar < 0){ 
            return -1;
        }

        return deBar(valorBar, destino);
    }
};