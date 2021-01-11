/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Anna de Diego Llorens
 * @date 10/01/2021
 * @brief funciones que recogen operaciones a reaclizar con 
 *        objetos de la clase Complejo
 * 
 * "como operar con complejos: "
 * @see https://www.superprof.es/apuntes/escolar/matematicas/aritmetica/complejos/operaciones-con-numeros-complejos.html
 * 
*/

#include <iostream>
#include <string>
#include "complejos.h"
#include "complejos_funciones.h"

Complejo suma(Complejo complejo1, Complejo complejo2) {

    std::string complejosuma{""}; 

    int real, imaginaria, 
    real1 = complejo1.ObtenerReal(), 
    real2 = complejo2.ObtenerReal(), 
    imaginaria1 = complejo1.ObtenerImaginaria(), 
    imaginaria2 = complejo2.ObtenerImaginaria(); 

    real = (real1) + (real2); 
    imaginaria = (imaginaria1) + (imaginaria2); 

    complejosuma = std::to_string(real) + " + " + std::to_string(imaginaria) + "i"; 

    Complejo complejo {complejosuma}; 

    return complejo;

}

// complejo1 - complejo2 
Complejo resta(Complejo complejo1, Complejo complejo2) {
    
    std::string complejoresta{""}; 

    int real, imaginaria, 
    real1 = complejo1.ObtenerReal(), 
    real2 = complejo2.ObtenerReal(), 
    imaginaria1 = complejo1.ObtenerImaginaria(), 
    imaginaria2 = complejo2.ObtenerImaginaria(); 

    real = (real1) - (real2); 
    imaginaria = (imaginaria1) - (imaginaria2); 

    complejoresta = std::to_string(real) + " + " + std::to_string(imaginaria) + "i"; 

    Complejo complejo {complejoresta}; 

    return complejo;
}

Complejo multiplicacion(Complejo complejo1, Complejo complejo2) {

    std::string complejomultiplicacion; 

    int real, imaginario, 
    real1 = complejo1.ObtenerReal(),
    real2 = complejo2.ObtenerReal(),
    imaginario1 = complejo1.ObtenerImaginaria(),
    imaginario2 = complejo2.ObtenerImaginaria(); 

    real = ( (real1*real2) - (imaginario1*imaginario2) ) ;
    imaginario = ( (real1*imaginario2) + (real2*imaginario1) ); 
    
    complejomultiplicacion = std::to_string(real) + " + " + std::to_string(imaginario) + "i";

    Complejo complejo{complejomultiplicacion};

    return complejo; 
}

Complejo division ( Complejo numerador, Complejo denominador) {

    std::string complejodivision, complejofraccionado; 
    int real, imaginaria, denominadoor, 
    realnumerador = numerador.ObtenerReal(),
    realdenominador = denominador.ObtenerReal(),
    imaginarianumerador = numerador.ObtenerImaginaria(),
    imaginariadenominador = denominador.ObtenerImaginaria(); 

    real = ( ( realnumerador * realdenominador ) + ( imaginarianumerador * imaginariadenominador ) );

    imaginaria = ( ( imaginarianumerador * realdenominador) - ( realnumerador * imaginariadenominador));

    denominadoor = ( ( realdenominador * realdenominador ) - ( imaginariadenominador * imaginariadenominador ) ) ;

    complejofraccionado = std::to_string(real) + "/" + std::to_string(denominadoor) 
                        + " + " + "(" + std::to_string(imaginaria) + "/" 
                        + std::to_string(denominadoor) + ")" + "i"; 

    real = ( real / denominadoor) ; 

    imaginaria = ( imaginaria / denominadoor );

    complejodivision = std::to_string(real) + " + " + std::to_string(imaginaria) + "i";  

    Complejo complejo{complejodivision, complejofraccionado}; 

    return complejo;
}