
#include <iostream>
#include "Estudiante.h"
#include "Persona.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}



int main() {
    std::cout << std::endl <<  "Hola Mundo" << std::endl << std::endl;

    std::cout << "La suma es: " << suma(5, 3) << std::endl << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl << std::endl; ;

    Persona persona1;

    persona1.setNombre("Juan");
    persona1.setEdad(25);
    persona1.setGenero("Masculino");

    Persona persona2;

    persona2.setNombre("Elena");
    persona2.setEdad(37);
    persona2.setGenero("Femenino");


    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Género: " << persona1.getGenero() << std::endl << std::endl;

    std::cout << "Nombre: " << persona2.getNombre() << std::endl;
    std::cout << "Edad: " << persona2.getEdad() << std::endl;
    std::cout << "Género: " << persona2.getGenero() << std::endl << std::endl;


    Estudiante estudiante1;

    estudiante1.setNombre("Carlos");
    estudiante1.setEdad(20);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Universitario");


    std::cout << "Detalles del estudiante:" << std::endl;
    estudiante1.mostrarDetalles();

    return 0;
}