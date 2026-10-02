#include <iostream>
#include "Invoice.hpp"
using namespace std;

int main()
{
    // Cria invoice válida, com valores positivos
    Invoice inv1(1234, "Monitor", 2, 1000);

    // Teste do método de impressão e também do GetInvoiceAmount
    cout << inv1.ToString() << endl;

    // Cria invoice inválida, com valores negativos
    Invoice inv2(4567, "Mouse", -2, -10.0);
    cout << inv2.ToString() << endl;

    // Teste dos getters e setters não é necessário pois contrutor invoca os setters
    // e ToString invoca os getters

    return 0;
}