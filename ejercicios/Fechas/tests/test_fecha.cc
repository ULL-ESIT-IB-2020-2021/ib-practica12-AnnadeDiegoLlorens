#include<gtest/gtest.h>
#include<string>
#include "fecha.h"

TEST(Fecha__Test, Comprobante){
    Fecha fecha1{"29/02/2021"};
    Fecha fecha2{"29/02/2004"}; 
    Fecha fecha3{"30/12/"}; 
    Fecha fecha4{"03/05/1870"};

    EXPECT_EQ(false, fecha1.Comprobante());
    EXPECT_EQ(true, fecha2.Comprobante());
    EXPECT_EQ(false, fecha3.Comprobante());
    EXPECT_EQ(true, fecha4.Comprobante());
}

TEST(Fecha__Test, Menor){
    Fecha fecha1{"20/02/2020"};
    Fecha fecha2{"19/02/2020"};
    Fecha fecha3{"20/02/2021"}; 

    EXPECT_EQ(true, (fecha2 < fecha1)); 
    EXPECT_EQ(false, (fecha1 < fecha2));
    EXPECT_EQ(false, (fecha3 < fecha2));
}