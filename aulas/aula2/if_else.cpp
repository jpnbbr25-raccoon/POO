#include <iostream>
#include <string>

int main() {
    // ------------------------------------------------------------------------------------------ //
    // Estruturas condicionais if-else
    // ------------------------------------------------------------------------------------------ //

    std::cout << "Qual a hora atual? ";
    
    int hora;
    std::cin >> hora; // Lê a entrada do teclado e joga na variável 'hora'

    // Solução 1 - If simples. 
    // Não é eficiente e é vulnerável a bugs lógicos (ex: hora == 12 não faz nada)
    if (hora < 12)
        std::cout << "Bom dia" << std::endl;
    if (hora > 12 && hora < 18)
        std::cout << "Boa tarde" << std::endl;
    if (hora > 18)
        std::cout << "Boa noite" << std::endl;

    // Solução 2 - Encadeada. Executa somente porção em que a lógica é verdadeira
    if (hora < 12)
        std::cout << "Bom dia" << std::endl;
    else if (hora < 18)
        std::cout << "Boa tarde" << std::endl;
    else
        std::cout << "Boa noite" << std::endl;

    // ------------------------------------------------------------------------------------------ //
    // Operador ternário
    // ------------------------------------------------------------------------------------------ //

    std::string ehPar = (hora % 2 == 0) ? "par" : "impar";
    
    // Em C++, encadeamos o operador << em vez de usar o operador + para concatenar texto na saída
    std::cout << "Hora digitada e " << ehPar << std::endl;

    // ------------------------------------------------------------------------------------------ //
    // Escopo e inicialização de variáveis
    // ------------------------------------------------------------------------------------------ //

    // Caso 1 - Variável desconto não existe fora do escopo do if
    /*
    double preco = 100;

    if (preco > 100)
    {
        double desconto = preco * 0.1;
    }

    std::cout << desconto << std::endl; // ERRO DE COMPILAÇÃO: 'desconto' não declarado neste escopo
    */

    // Caso 2 - Variável desconto existe fora do escopo do if, mas pode não estar inicializada
    /*
    double preco = 100;
    double desconto; // Em C++, isso armazena "Lixo de Memória" inicialmente!

    if (preco > 100)
    {
        desconto = preco * 0.1;
    }

    // AVISO/ERRO: Se preco não for > 100, vai imprimir lixo de memória (Comportamento Indefinido)
    std::cout << desconto << std::endl; 
    */

    return 0;
}