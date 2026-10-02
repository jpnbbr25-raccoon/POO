#include <iostream>
#include <string>
using namespace std;

class Termostato {

private:
    const double Referencia;
    const double Histerese;
    bool Status; // true = ligado, false = desligado

    //metodos estaticos p validar os valores no construtor
    static double _validaReferencia(double referencia) {
        if (referencia >= 0 && referencia <= 200) {
            return referencia;
        }
        return 50; // se valor for invalido
    }

    static double _validaHisterese(double histerese) {
        if (histerese > 0) {
            return histerese;
        }
        return 2; // se valor for invalido
    }

public:
    //construtor com validacao dos valores
    Termostato(double referencia, double histerese) :
        Referencia(_validaReferencia(referencia)),
        Histerese(_validaHisterese(histerese)),
        Status(false) { } //inicia desligado

    //getter para acessar os valores privados
    double getReferencia() const {
        return Referencia;
    }

    double getHisterese() const {
        return Histerese;
    }

    bool getStatus() const {
        return Status;
    }

    //metodo que se atualiza pela histerese 
    bool Atualizar(double temperaturaMedida) {
        if (temperaturaMedida < (Referencia - Histerese)) {
            Status = true;  //liga se ficar abaixo dos valores pedidos
        } 
        else if (temperaturaMedida > (Referencia + Histerese)) {
            Status = false; //desliga se ficar acima dos valores pedidos
        }
        else{
            return Status; //se n deu nda volta oq ja era
        }
    }

    //metodo pra formatar o resultado
    string ToString() const {
        string estadoStr = Status ? "ligado" : "desligado";
        return "Ref.: " + to_string(Referencia) + " °C +- " + to_string(Histerese) + " °C - Aquecedor " + estadoStr;
    }
};