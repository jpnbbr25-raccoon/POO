#include <iostream>
#include <string>
#include "Termostato.hpp"
using namespace std;

int main() {

    //criei o termostato
    Termostato termostato(60.0, 2.0);

    //temp pedida
    double Temperaturas[] = { 25, 45, 57, 59, 61, 63, 60, 58, 57, 59 };
    int tamanho = sizeof(Temperaturas) / sizeof(Temperaturas[0]);

    cout << "teste do termostato:"<< endl;
    cout << termostato.ToString() << endl;

    //adicionando temp por temp no termostato
    for (int i = 0; i < tamanho; i++) {
        double temp = Temperaturas[i];
        bool estado = termostato.Atualizar(temp);

        string estadoTexto = estado ? "ligado" : "desligado";
        cout << "Temperatura: " << temp << "°C ,Aquecedor: " << estadoTexto << endl;
    }

    return 0;
}