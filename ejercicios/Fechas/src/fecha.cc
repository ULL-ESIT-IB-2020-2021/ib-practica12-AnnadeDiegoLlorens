#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include "fecha.h"

using namespace std; 

Fecha::Fecha(){
    FijarFechaVacia();
}

Fecha::Fecha(string fecha){
    FijarFecha(fecha);
};

void Fecha::FijarFechaVacia(){
    string fecha = "20/02/2020"; 
    Fecha::FijarFecha(fecha); 
}

void Fecha::FijarFecha(string fecha)
{   
    m_fecha = fecha; 

    int i = 0, posicion;
    string s_dia, s_mes, s_anyo;

    // Fijar día.  
    for(i=0; fecha[i] != '/'; i++){
        s_dia += fecha[i];
        posicion = i;  
    }
    int  dia = stoi(s_dia);
    m_dia = dia;

    // Fijar mes. 
    for (i = (posicion +2); fecha[i] != '/' ; i++){
        s_mes += fecha[i]; 
        posicion = i; 
    }
    int mes = stoi(s_mes);
    m_mes = mes;

    int anyo = 0;
    if ((fecha.length()- posicion) < 3){
        m_anyo = anyo;
        }else {
    // Fijat año.
         for (i = (posicion +2); i < fecha.length() ; i++){
        s_anyo += fecha[i]; 
        posicion = i; 
         }
        anyo = stoi(s_anyo);
        m_anyo = anyo; 
        }
}

bool Fecha::Bisiesto(){
    bool dibisible_4, dibisible_100, dibisible_400, anyo_de_siglo; 
    int i; 

    if (m_anyo % 100 == 0){
        anyo_de_siglo = true; 
    }else{
        anyo_de_siglo = false; 
    }
    
    for (i = 0; i <= 401; i++){
        switch(i){
            case 4: 
                if (m_anyo % 4 == 0){
                    dibisible_4 = true; 
                } else 
                {
                    dibisible_4 = false; 
                }
                break;
            case 100:
                if(m_anyo % 100 == 0){
                    dibisible_100 = true; 
                }else
                {
                    dibisible_100 = false; 
                }
                break;
            case 400:
                if(m_anyo % 400 == 0){
                    dibisible_400 = true; 
                }else
                {
                    dibisible_400 = false; 
                }
                break;
            default: 
                break;  
        }
    }
    if (anyo_de_siglo == true){
        if (dibisible_4 == true){
            if (dibisible_100 == true){
                if (dibisible_400 == true){
                    return true; 
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }else{
            return false; 
        }
    }else{
        if (dibisible_4 == true){
            return true; 
        }else{
            return false; 
        }
    }
}

bool Fecha::Comprobante(){ 

    if ((m_anyo != 0) && (0 < m_mes) && (m_mes < 13)){
        switch (m_mes)
        {
            case 4: case 6: case 9: case 11: 
                if (0 < m_dia){
                    if(m_dia < 31){
                    return true; 
                    }
                }
                return false;
                
            break; 

            case 2: 
                if (Fecha::Bisiesto() == true){
                    if (0 < m_dia){
                        if (m_dia < 30){
                        return true;
                        }
                    }
                    return false;
                    
                }
                if(0 < m_dia){
                    if (m_dia < 29){
                         return true;
                    } 
                }
                return false; 
            
            break; 

            default:
                if (0 < m_dia){
                    if (m_dia <32){
                        return true;
                    }
                }
                        return false; 
            break;
        }
    }
    
    return false; 
    
}

ostream& operator<<(ostream &out, const Fecha& fecha){
    out << fecha.ObtenerFecha() << endl; 
    return out; 
}

bool operator<(const Fecha &fecha1, const Fecha &fecha2){
    if(fecha1.ObtenerAnyo() < fecha2.ObtenerAnyo()){return true;}
    if((fecha1.ObtenerAnyo() == fecha2.ObtenerAnyo()) && (fecha1.ObtenerMes() < fecha2.ObtenerMes())){return true;}
    if((fecha1.ObtenerAnyo() == fecha2.ObtenerAnyo()) && (fecha1.ObtenerMes() == fecha2.ObtenerMes()) && (fecha1.ObtenerDia() < fecha2.ObtenerDia())){return true;}
    return false; 
}

void Ordenar( vector<Fecha> &fechas){
    int n_de_fechas = fechas.size(), new_size{0}; 
    vector<Fecha> vector_ordenado(n_de_fechas);
    int i = 0, k = (fechas.size()-1),j =0, contador= 0; 
    while(j != fechas.size()){ 
     if(fechas[k].Comprobante()==true){   
        for (i=1; i <= (fechas.size()); ++i){
            int p = (i-1);
            if (fechas[p] < fechas[k]){
             contador = contador + 1; 
            }
        }
        vector_ordenado[contador] =fechas[k]; 
        new_size ++;
        }
     k --;
     j ++; 
     contador =0; 
    }
    fechas = vector_ordenado;
    fechas.resize(new_size);
}