/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Anna de Diego Llorens
 * @date 10/01/2021
 * @brief test que prueban la eficacia
 *        de las funciones para el programa de complejos 
 * 
*/
#include <gtest/gtest.h>

#include "complejos.h"
#include "complejos_funciones.h"

TEST(testsuma, test1) {
    Complejo complejo1 {6 , 7},
             complejo2 {-1, 9},
             LaSuma;
    
    LaSuma = suma(complejo1, complejo2);

    EXPECT_EQ (LaSuma.ObtenerImaginaria(), 16);
    EXPECT_EQ (LaSuma.ObtenerReal(), 5); 

}

TEST(testresta, test2) {
    Complejo complejo1 {6 , 7},
             complejo2 {-1, 9},
             LaResta;
    
    LaResta = resta(complejo1, complejo2);

    EXPECT_EQ (LaResta.ObtenerImaginaria(), -2);
    EXPECT_EQ (LaResta.ObtenerReal(), 7); 
}

TEST(testmultiplicacion, test3) {
    Complejo complejo1 {6 , 7},
             complejo2 {-1 , 9},
             LaMulti;
    
    LaMulti = multiplicacion(complejo1, complejo2);

    EXPECT_EQ (LaMulti.ObtenerImaginaria(), 47);
    EXPECT_EQ (LaMulti.ObtenerReal(), -69);     
}

TEST(testdivision, test4) {
    Complejo complejo1 {6 , 7},
             complejo2 {-1 , 9},
             LaDivi;
    
    LaDivi = division(complejo1, complejo2);

    EXPECT_EQ (LaDivi.ObtenerImaginaria(), 0);
    EXPECT_EQ (LaDivi.ObtenerReal(), 0); 
    
}