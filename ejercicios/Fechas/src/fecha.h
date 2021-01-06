/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Anna de Diego Llorens
 * @date 6/01/2021
 * @brief Libreria del programa Fecha  que contiene la declaración 
 *         de la clase Fecha usada en el programa. Ver:
 * 
 * "como declarar las clases en diferentes ficheros" 
 * @see https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/
 */
#ifndef FECHA_H
#define FECHA_H

class Fecha 
{
private:
    std::string m_fecha; 
    int m_dia;
    int m_mes;
    int m_anyo;

public:
    Fecha();
    void FijarFechaVacia(); 

    Fecha(std::string fecha);
    void FijarFecha(std::string fecha);
    
    std::string ObtenerFecha()const{return m_fecha;};
    int ObtenerDia()const{return m_dia;};
    int ObtenerMes()const{return m_mes;};
    int ObtenerAnyo()const{return m_anyo;};

    bool Bisiesto();
    bool Comprobante(); 

    friend std::ostream& operator<<(std::ostream &out, const Fecha &fecha);
    friend bool operator<(const Fecha &fecha1, const Fecha &fecha2); 
    friend void Ordenar(std::vector<Fecha> &fecha1);
};
#endif