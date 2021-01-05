/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Anna de Diego Llorens
 * @date 03/01/2021
 * @brief recopilación de funciones y clases necesarias para el programa fecha
 *
 * Condiciones para un año bisiesto: 
 * @see https://www.calculadoras.uno/ano-bisiesto/1000 
 * Añadir una string a un vector de strings 
 * @see https://stackoverflow.com/questions/23538567/how-to-add-string-to-vector-of-string-in-c
 */

#include<iostream>
#include<fstream>
#include<string>
#include"fecha.h"

using namespace std; 

void Uso(int argc,char *argv[]){
if (argc !=3){ 
    string parameter{argv[1]};
  if (parameter == "--help") {
    cout << argv[0] << " - Gestión de fechas " << endl << "Modo de uso:" << argv[0] 
         << " fichero_entrada fichero_salida" << endl
         << " - fichero_entrada: Fichero con fechas escritas." << endl
         << "Las fechas del fichero deben estar contenidas en multiples lineas " << endl
         << "según el formato 'dd/mm/aa'." << endl
         << " - fichero_salida:  Fichero con fechas ordenadas." << endl
         << "Las fechas se ordenaran de forma ascendente, señalando aqueyas fechas de año bisiesto" << endl 
         << "con una B colocada junto a la fecha." << endl;
    exit(EXIT_SUCCESS);
    }
  else {
   cout << argv[0] << " - Gestión de fechas" << endl
         << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida" << endl
         << "Pruebe " << argv[0] << " --help para más información." << endl;
    exit(EXIT_SUCCESS);
        }
    }
}