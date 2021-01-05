/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Anna de Diego Llorens
 * @date 03/01/2021
 * @brief este programa pretende organizar las fechas proporcionadas por el usuario.
 *
 */

#include <iostream>
#include <fstream>
#include <string>
#include "fecha.h"

using namespace std; 

int main(int argc, char* argv[]){
    Uso(argc,argv); 

  string entrada = argv[1], salida = argv[2];
  ifstream fichero_con_fechas;
  ofstream fichero_ordenado;

  fichero_con_fechas.open(entrada, ios_base::in);
  fichero_ordenado.open(salida, ios_base::out);

    if (!fichero_con_fechas.is_open()|!fichero_ordenado.is_open()){ 
        return EXIT_FAILURE; 
    }

    
    return 0; 
}