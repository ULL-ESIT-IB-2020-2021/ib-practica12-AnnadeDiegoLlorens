#ifndef COMPLEJOS_H
#define COMPLEJOS_H

class Complejo
{
 private:
    std::string complejo_;
    std::string complejo_fraccionado_; 
    int real_ ;
    int imaginaria_ ;

public: 
    Complejo();
    void FijarComplejoVacio(); 

    Complejo(std::string complejo); 
    void FijarComplejoSt(std::string complejo); 

    Complejo(std::string complejo, std::string complejo_fraccionado); 
    void FijarComplejoFraccionado(std::string complejo, std::string complejo_fraccionado);

    Complejo(int real, int imaginaria);
    void FijarComplejoInt(int real, int imaginaria);

    std::string ObtenerComplejo(){ return complejo_; } 
    std::string ObtenerComplejofraccionado(){ return complejo_fraccionado_;}
    int ObtenerReal(){ return real_; }
    int ObtenerImaginaria(){ return imaginaria_; }

    void Imprimir();

};
#endif