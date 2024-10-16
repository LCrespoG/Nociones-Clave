#include <iostream>
#include <fmt/core.h>
#include "funciones.h"

#define PI 3.14159265358979323846
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    std::cout << "cas" << std::endl;


    std::cout << "La suma es: " << suma(5, 7) << std::endl << std::endl;


    std::cout << "Calculadora simple y área de un círculo." << std::endl;

    int num1 = 10;
    int num2 = 5;

    std::cout << "Suma: " << suma(num1, num2) << "\n";
    std::cout << "Resta: " << resta(num1, num2) << "\n";

    double radio = 5.0;
    double area = AREA_CIRCULO(radio);
    std::cout << "Área del círculo con radio " << radio << ": " << area << std::endl;

    return 0;
}
