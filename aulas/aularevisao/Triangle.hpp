#include <cmath> // Necessário para std::sqrt e std::pow

namespace Course 
{
    // Classe triangulo
    class Triangle 
    {
    private:
        // Lado do triangulo
        double _side = 1.0;
        
    public:
        // Construtor 1 - Valor padrão (já definido)
        Triangle() 
        {
        }

        // Construtor 2 - Recebe lado como parametro
        Triangle(double side) 
        {
            // Só será setado se valor for >= 0 e <= 20
            SetSide(side);
        }

        // Setter com validação
        void SetSide(double side) 
        {
            if (side >= 0.0 && side <= 20.0)
                _side = side;
        }

        // Getter
        // O uso de 'const' no final indica que este método não altera os atributos da classe
        double GetSide() const 
        { 
            return _side;
        }

        // Área
        double Area() const 
        { 
            return (std::sqrt(3.0) / 4.0) * std::pow(_side, 2);
        }

        // Perímetro
        double Perimeter() const 
        {
            return 3.0 * _side;
        }
    };
}