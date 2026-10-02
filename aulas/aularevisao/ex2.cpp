#include <iostream>   // Precisamos pra usar cout (saída) e cin (entrada)
#include "Cpf.h"        // Inclui a classe Cpf que criamos, pra poder usar Cpf::Valida(...)
using namespace std;    // Evita escrever std::cout, std::cin, std::string toda vez

int main()
// Em C++, o ponto de entrada do programa é sempre uma função chamada "main",
// não precisa estar dentro de uma classe como o "static void Main" do C#.
{
    // Pega lado com usuario
    cout << "Digite um CPF (somente numeros): ";
    // Exibe a mensagem na tela, sem pular linha (por isso não tem endl aqui),
    // assim o cursor fica na mesma linha esperando a digitação do usuário

    string Entrada;
    // Declara a variável que vai guardar o texto digitado pelo usuário.
    // Precisa ser declarada antes, porque em C++ cin não "cria" a variável, só preenche uma já existente

    getline(cin, Entrada);
    // Lê a linha inteira digitada pelo usuário e guarda em Entrada.
    // Usamos getline() em vez de "cin >> Entrada" porque cin >> pararia de ler no primeiro espaço,
    // e queremos garantir que pegamos a entrada inteira (o CPF) como uma única string,
    // igual o Console.ReadLine() faz em C#

    // Teste
    cout << "CPF digitado é " << (Cpf::Valida(Entrada) ? "válido" : "inválido") << endl;
    // Cpf::Valida(Entrada): chama o método estático da classe Cpf (usa :: porque é static,
    // não precisamos criar um objeto Cpf pra chamar esse método)
    // (condição) ? "válido" : "inválido": operador ternário, escolhe qual string exibir
    // dependendo se Valida retornou true ou false
    // Tudo isso é concatenado na mesma linha de saída com << e finalizado com endl (pula linha)

    return 0;
    // Indica ao sistema operacional que o programa terminou com sucesso (0 = sem erros).
    // Isso é uma exigência da função main() em C++ (o "Main" de C# não precisa retornar nada
    // quando é void, mas o main() de C++ tradicionalmente retorna int)
}