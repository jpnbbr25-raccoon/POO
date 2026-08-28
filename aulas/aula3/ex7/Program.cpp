#include <iostream>
#include <string>
#include <iomanip> // Para formatar as casas decimais (std::fixed, std::setprecision)
#include <locale>
#include "Funcionario.hpp"

using namespace Course;

int main() {
    // 1. Configura o terminal para usar ponto como separador decimal
    std::cin.imbue(std::locale::classic());
    std::cout.imbue(std::locale::classic());

    // 2. Instanciação direta na STACK
    Funcionario func;

    // Pega com usuario dados do funcionario
    std::cout << "Digite os dados do funcionario:" << std::endl;
    std::cout << "Nome: ";
    // O std::ws "limpa" qualquer espaço ou 'Enter' antigo no buffer do teclado antes de ler a linha
    std::getline(std::cin >> std::ws, func.Nome);
    
    std::cout << "Salario bruto: ";
    std::cin >> func.SalarioBruto;
    
    std::cout << "Imposto: ";
    std::cin >> func.Imposto;

    // Configura a saída para sempre mostrar 2 casas decimais a partir daqui
    std::cout << std::fixed << std::setprecision(2);

    // Exibe dados digitados chamando o método de cálculo
    std::cout << "Funcionario: " << func.Nome << ", $" << func.SalarioLiquido() << std::endl;

    // Aumento de salário
    std::cout << "Digite a porcentagem para aumentar o salario: ";
    double aumento;
    std::cin >> aumento;
    
    // Altera o estado do objeto internamente
    func.AumentarSalario(aumento);

    // Exibe dados atualizados chamando o método novamente (ele calculará o novo valor)
    std::cout << "Dados atualizados: " << func.Nome << ", $" << func.SalarioLiquido() << std::endl;

    return 0;
}