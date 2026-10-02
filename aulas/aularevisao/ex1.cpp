#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
    // Construtor 1 - Com valor padrão
    Triangle t;

    // Teste do getter - Valor padrão
    cout << t.GetSide() << endl;

    cout << "---------------------------------" << endl;

    // Pega lado com usuario
    cout << "Digite o lado do triangulo: ";
    double Side;
    cin >> Side;

    // Teste do setter
    t.SetSide(Side);
    cout << t.GetSide() << endl;

    // Teste dos métodos area e perimeter
    cout << "Area: " << t.Area() << endl;
    cout << "Perimetro: " << t.Perimeter() << endl;

    cout << "---------------------------------" << endl;

    // Teste do construtor 2
    Triangle t2(Side);
    cout << t2.GetSide() << endl;

    return 0;
}