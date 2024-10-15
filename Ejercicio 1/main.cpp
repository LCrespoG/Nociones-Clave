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

    persona1.setNombre("Jhon nieve");
    persona1.setEdad(43);
    persona1.setGenero("Masculino");

    Persona persona2;

    persona2.setNombre("Daenerys");
    persona2.setEdad(24);
    persona2.setGenero("Femenino");


    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Genero: " << persona1.getGenero() << std::endl << std::endl;

    std::cout << "Nombre: " << persona2.getNombre() << std::endl;
    std::cout << "Edad: " << persona2.getEdad() << std::endl;
    std::cout << "Genero: " << persona2.getGenero() << std::endl << std::endl;


    Estudiante estudiante1;

    estudiante1.setNombre("Skywalker");
    estudiante1.setEdad(15);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Padawan");

    Estudiante estudiante2;

    estudiante2.setNombre("Leia");
    estudiante2.setEdad(32);
    estudiante2.setGenero("Femenino");
    estudiante2.setGrado("Princesa");


    std::cout << "Detalles del estudiante 1:" << std::endl << std::endl;
    estudiante1.mostrarDetalles();

    std::cout << "Detalles del estudiante 2:" << std::endl << std::endl;
    estudiante2.mostrarDetalles();

    return 0;
}