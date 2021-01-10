/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Anna de Diego Llorens
 * @date 10/01/2021
 * @brief Archivo del programa Fecha  que explica al usuario 
 *        como se ha de usar el programa en caso de que este no 
 *        pase correctamente los comandos.
 *
 */

#include<iostream>
#include<iostream>
#include<string>
#include<cstdlib>
#include "fecha_funciones.h"

using namespace std; 

void Uso(int argc,char *argv[]){
 if ( argc != 3 ) {
          
          if ( argc != 2) {

          cout << argv[0] << " - Gestión de fechas" << endl;
          cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida" << endl
               << "Pruebe " << argv[0] << " --help para más información." << endl;
           exit(EXIT_SUCCESS);
          }

          string parameter = argv[1];
          if ( parameter == "--help") {

               cout << "argv[1]= " << argv[1];

               cout << argv[0] << "--Gestión de fechas " << endl << "Modo de uso:" << argv[0] 
                    << " fichero_entrada fichero_salida" << endl
                    << endl 
                    << " - fichero_entrada: Fichero con fechas escritas." << endl
                    << "Las fechas del fichero deben estar contenidas en multiples lineas " << endl
                    << "según el formato 'dd/mm/aa'." << endl
                    << endl
                    << " - fichero_salida:  Fichero con fechas ordenadas." << endl;
               
          exit(EXIT_SUCCESS);
          }
     }
}
