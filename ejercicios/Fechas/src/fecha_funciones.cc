/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Anna de Diego Llorens
 * @date 6/01/2021
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
if(argc == 1){
if (argc!=3){
  string parameter{argv[1]};
  if (parameter == "--help") {
    cout << argv[0] << "-- Gestión de fechas " << endl << "Modo de uso:" << argv[0] 
         << " fichero_entrada fichero_salida" << endl
         << "Si el fichero se encuentra en una carpeta diferente del programa," << endl
         << "asegurese de escribir correctamente el camino a seguir para llegar a los documentos." << endl
         << " - fichero_entrada: Fichero con fechas escritas." << endl
         << "Las fechas del fichero deben estar contenidas en multiples lineas " << endl
         << "según el formato 'dd/mm/aa'." << endl
         << " - fichero_salida:  Fichero con fechas ordenadas." << endl
         << "Las fechas se ordenaran de forma ascendente, señalando aqueyas fechas de año bisiesto" << endl 
         << "con una B colocada junto a la fecha." << endl;
    exit(EXIT_SUCCESS);
  }
   cout << argv[0] << " - Gestión de fechas" << endl
         << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida" << endl
         << "Pruebe " << argv[0] << " --help para más información." << endl;
    exit(EXIT_SUCCESS);
}
}
}
