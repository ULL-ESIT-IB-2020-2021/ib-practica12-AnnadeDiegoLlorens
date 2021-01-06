/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Anna de Diego Llorens
 * @date 6/01/2021
 * @brief Archivo principal del programa Fechas que recoje 
 *        un fichero con una lista de fechas colocadas una debajo de otra
 *         (es decir una en cada linea) siguiendo la estructura dd/mm/aaaa,
 * 
 *      En los correspondientes ficheros se encuentran las referencias que 
 *      consulté para completarlos.
 *
 */

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "fecha_funciones.h"
#include "fecha.h"

using namespace std;

int main(int argc, char* argv[]){
    Uso(argc,argv);
    string entrada = argv[1], salida = argv[2],
           linea = ""; 
    int numero_de_fechas{}; 
    vector<Fecha> fechas{}; 

    ifstream fichero_desordenado; 
    ofstream fichero_ordenado;

    fichero_desordenado.open(entrada, ios_base::in);
    fichero_ordenado.open(salida, ios_base::out);

    if (!fichero_desordenado.is_open()){ 
        return EXIT_FAILURE; 
    }
     if (!fichero_ordenado.is_open()){ 
        return EXIT_FAILURE; 
    }
        while(getline(fichero_desordenado,linea)){
            Fecha fecha{linea};
            fechas.push_back(fecha);
            numero_de_fechas = numero_de_fechas + 1;
        }
    Ordenar(fechas);
    for (int i=1; i <= fechas.size(); ++i){
        fichero_ordenado << fechas[(i-1)]; 
    }

    cout << "Hecho." << endl;
    
    return 0; 
}