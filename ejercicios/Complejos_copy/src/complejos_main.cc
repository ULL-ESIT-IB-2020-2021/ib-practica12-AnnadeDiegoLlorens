/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Anna de Diego Llorens
 * @date 10/01/2021
 * @brief programa simple que muestra el uso de la clase creada (complejos)
 * 
*/
#include <iostream>
#include <string>

#include "complejos.h"
#include "complejos_funciones.h"

int main() {
    
    Complejo complejo1{4, 5}, complejo2{7, -8}, resultado;
    int entero = 3; 
    double real = 3.5; 

    resultado = suma(complejo1, complejo2); 
    std::cout << "Suma: "; 
    resultado.Imprimir();

    resultado = suma(complejo1, entero); 
    std::cout << "Suma: "; 
    resultado.Imprimir();

    resultado = suma(complejo2, real); 
    std::cout << "Suma: "; 
    resultado.Imprimir();

    std::cout << "Resta: ";
    resultado = resta(complejo1, complejo2); 
    resultado.Imprimir();

    std::cout << "Multiplicacion: ";
    resultado = multiplicacion(complejo1, complejo2); 
    resultado.Imprimir();

    std::cout << "Division: ";
    resultado = division(complejo1, complejo2);
    resultado.Imprimir();

    return 0; 
}