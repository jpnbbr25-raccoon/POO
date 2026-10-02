#ifndef CPF_H   // Se CPF_H ainda não foi definido em nenhum outro lugar do programa...
#define CPF_H   // ...define CPF_H agora. Isso evita que esse arquivo seja incluído duas vezes
                // e cause erro de "classe redefinida" (include guard)

#include <string>       // Precisamos da biblioteca <string> pra usar o tipo string (std::string)
using namespace std;    // Evita ter que escrever std::string toda vez, só string

// Classe para validação de CPF
class Cpf
{
public:  // A partir daqui, os membros são acessíveis de fora da classe

    static bool Valida(string cpf)
    // "static": método pertence à CLASSE, não a um objeto específico.
    // Por isso pode ser chamado como Cpf::Valida("...") sem precisar criar um objeto Cpf.
    // Retorna bool porque a resposta que queremos é simples: válido ou não válido.
    // Recebe "cpf" por valor (uma cópia da string) — não precisamos alterar o CPF original,
    // só ler ele, então não é necessário usar referência aqui.
    {
        // Checa se CPF recebido é nulo ou não tem 11 caracteres
        if (cpf.empty() || cpf.length() != 11)
            // cpf.empty(): verifica se a string está vazia (equivalente a checar "nulo/vazio").
            // cpf.length() != 11: um CPF válido tem exatamente 11 dígitos, sem pontos/traços.
            // Se qualquer uma das duas condições for verdadeira, o CPF já é inválido de cara,
            // então nem vale a pena continuar calculando.
            return false; // Sai da função imediatamente, retornando "inválido"

        // Calcula verificador 1
        int Verificador = _CalculaVerificador(cpf, 1);
        // Chama a função auxiliar passando "1" pra indicar que queremos calcular
        // o PRIMEIRO dígito verificador (10º dígito do CPF, índice 9)

        // Se verificador 1 é diferente do 10 numero do CPF recebido, CPF é inválido
        if (Verificador != _GetDigito(cpf, 9))
            // _GetDigito(cpf, 9) pega o dígito que está na posição 9 (10º caractere, contando do 0)
            // do CPF, que é o dígito verificador real informado pelo usuário.
            // Comparamos com o valor que CALCULAMOS. Se forem diferentes, o CPF é falso.
            return false;

        // Calculo do segundo verificador
        Verificador = _CalculaVerificador(cpf, 2);
        // Reaproveita a mesma variável "Verificador", agora calculando o SEGUNDO dígito
        // verificador (11º dígito do CPF, índice 10). Passamos "2" pra indicar isso à função.

        // Se verificador é diferente do 11 numero do CPF recebido, CPF é inválido
        if (Verificador != _GetDigito(cpf, 10))
            // Mesma lógica de antes, agora comparando com a posição 10 (11º caractere) do CPF.
            return false;

        // Se chegamos até aqui, ambos os verificadores foram validados
        return true;
        // Só chegamos nessa linha se NENHUM dos "return false" acima foi executado,
        // ou seja, passou por todas as validações. CPF é válido.
    }

private:  // A partir daqui, os membros só podem ser usados DENTRO da própria classe Cpf
          // (são "funções auxiliares" internas, o usuário da classe não precisa/deve chamá-las)

    // Função auxiliar para converter um char da string CPF em inteiro
    static int _GetDigito(string cpf, int index)
    // Recebe a string do CPF e a posição (índice) do caractere que queremos transformar em número
    {
        return cpf[index] - '0';
        // cpf[index]: acessa o caractere (char) naquela posição da string, ex: '7'
        // '0' é o caractere zero, que tem um código numérico fixo (ASCII) — 48
        // Subtraindo o código de '0' do código do caractere, obtemos o valor numérico real.
        // Ex: '7' (código 55) - '0' (código 48) = 7. Funciona pra qualquer dígito de 0 a 9.
    }

    // Calculo dos verificadores (verificador = 1 para primeiro verificador, 2 para segundo)
    static int _CalculaVerificador(string cpf, int verificador)
    // "verificador" indica QUAL dos dois dígitos verificadores estamos calculando (1 ou 2),
    // porque a fórmula muda ligeiramente dependendo de qual verificador é (mais um dígito
    // entra na soma no cálculo do segundo verificador)
    {
        int Soma = 0;   // Vai acumular a soma ponderada dos dígitos (usada na fórmula do CPF)
        int Div = 0;    // Vai guardar o resultado da divisão inteira de Soma por 11
        int Resto = 0;  // Vai guardar o resto dessa divisão — é o valor que realmente importa

        for (int i = 0; i < (8 + verificador); i++)
            // O primeiro verificador usa os 9 primeiros dígitos do CPF (i de 0 a 8, ou seja,
            // 8 + 1 = 9 repetições). O segundo verificador usa os 10 primeiros dígitos
            // (8 + 2 = 10 repetições, incluindo o primeiro dígito verificador já calculado).
            // Essa é a regra oficial de cálculo do dígito verificador do CPF.

            Soma += (_GetDigito(cpf, i) * (9 + verificador - i));
            // Multiplica cada dígito por um "peso" que decresce a cada posição
            // (10, 9, 8, 7... para o 1º verificador; 11, 10, 9, 8... para o 2º),
            // e vai somando tudo em Soma. Essa é a fórmula matemática oficial de validação de CPF.

        Div = Soma / 11;
        // Divisão inteira: em C++, dividir dois "int" já descarta a parte decimal automaticamente,
        // então Div guarda quantas vezes 11 "cabe" dentro de Soma (na prática, essa variável
        // Div não é usada depois — só o Resto importa pro cálculo final, mas foi mantida
        // porque estava assim no código original)

        Resto = Soma % 11;
        // "%" é o operador de módulo/resto da divisão. Pega o que "sobra" depois de dividir
        // Soma por 11. Esse resto é o valor central da fórmula do dígito verificador.

        if (Resto < 2)
            return 0;
            // Regra oficial do CPF: se o resto da divisão for 0 ou 1, o dígito verificador é 0
        else
            return 11 - Resto;
            // Caso contrário, o dígito verificador é 11 menos o resto
    }
};

#endif  // Fecha o bloco do include guard aberto lá em cima com #ifndef