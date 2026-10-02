#include <iostream>
#include <string>
using namespace std;

class Transmissor{

private:
    //privei as variaveis para que não possam ser alteradas fora da classe e criei um metodo getTag() para retornar a tag do transmissor
    const string Tag;
    const double FaixaMinima;
    double FaixaMaxima;
    double Corrente; // coloquei pra validar a corrente la no final

    //criando o static no private eu valido antes das variaveis serem usadas no construtor
    static double _validaFaixaMinina(double FaixaMinima, double FaixaMaxima){
        if(FaixaMinima < FaixaMaxima){

            return  FaixaMinima;
        }
        else 
        return 0; 
    }
    static double _validaFaixaMaxima(double FaixaMinima, double FaixaMaxima){
        if(FaixaMaxima > FaixaMinima){

            return  FaixaMaxima;
        }
        else 
        return 100; // retorneo 100 aq e 0 na faixa minima pois são os valores pedidos 
    }

public:

// criei o construtor para definir os valores do objeto e coloquei o mestodos de validacao  
    Transmissor(string tag, double faixaMinima, double faixaMaxima): 
        Tag(tag), 
        FaixaMinima(_validaFaixaMinina(faixaMinima, faixaMaxima)), 
        FaixaMaxima(_validaFaixaMaxima(faixaMinima, faixaMaxima)){
        }

//os getters fazem com que possa ler a variaveis fora da classe
    string getTag(){
        return Tag;
    }
    double getFaixaMinima(){
        return FaixaMinima;
    }
    double getFaixaMaxima(){
        return FaixaMaxima;
    }

    //crie o setter pra validar a corrente
    void SetCorrente(double corrente) {

        if (corrente >= 4 && corrente <= 20) {
            Corrente = corrente;
        }
    }

    bool EmFalha() const { //criei a validacao da corrente em falha
        return (Corrente < 4.0 || Corrente > 20.0);
}

    double ValorMedido(){
        return FaixaMinima + (Corrente - 4) / 16 * (FaixaMaxima - FaixaMinima);
    }
};
