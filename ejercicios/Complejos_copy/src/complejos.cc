/**
 * 
 * 
 * 
 * @author Anna de Diego Llorens
 * @date 10/01/2021
 * @brief funciones que definen los objetos de la clase Complejo
 *  
*/
#include <iostream>
#include <string>

#include "complejos.h"

Complejo::Complejo() {
    FijarComplejoVacio(); 
}

Complejo::Complejo(std::string complejo) {
    FijarComplejoSt(complejo);
}

Complejo::Complejo(std::string complejo, std::string complejo_fraccionado) {
    FijarComplejoFraccionado(complejo, complejo_fraccionado);
}

Complejo::Complejo(int real, int imaginario) {
    FijarComplejoInt(real, imaginario);
}

void Complejo::FijarComplejoVacio(){

     std::string complejo{"1 + 1i"};
     FijarComplejoSt(complejo); 
}

void Complejo::FijarComplejoSt(std::string complejo) {

    complejo_fraccionado_ = "";
    complejo_ = complejo;
    
    std::string real, imaginaria; 
    int parte_real, parte_imaginaria; 

    int i{0}, posicion{0};

    //obtenemos la parte real:
    for( i = 0; complejo[i] != '+'; i++ ){

        real += complejo[i];

        posicion++; 

    }

    parte_real = std::stoi(real); 
    real_ = parte_real; 

    //obtenemod la parte imaginaria:
    for( i = ( posicion + 2 ) ; complejo[i] != 'i' ; i++){

        imaginaria += complejo[i]; 

        posicion++; 

    }

    parte_imaginaria = std::stoi(imaginaria);
    imaginaria_ = parte_imaginaria;  
}

void Complejo::FijarComplejoFraccionado(std::string complejo, std::string complejo_fraccionado) {

    Complejo::FijarComplejoSt(complejo);

    complejo_fraccionado_ = complejo_fraccionado ; 

}
 
void Complejo::FijarComplejoInt(int real, int imaginario) {

    std::string complejo = std::to_string(real) + " + " + std::to_string(imaginario) + "i"; 

    real_ = real; 
    imaginaria_ = imaginario; 
    complejo_ = complejo; 
    complejo_fraccionado_ = ""; 
 }

void Complejo::Imprimir() {
    if (complejo_fraccionado_ == "") {

    std::cout << complejo_ << std::endl;

    }else {

        std::cout << complejo_fraccionado_ << std::endl; 
    } 
}