#include <gtest/gtest.h>

#include "fecha.h"

/**
 * Test para probar los constructores de la clase
 */
TEST(FechaTest, constructor) {
  Fecha fecha1;
  EXPECT_EQ(true, fecha1.dia() == 1);
  EXPECT_EQ(true, fecha1.mes() == 1);
  EXPECT_EQ(true, fecha1.anio() == 1);
  Fecha fecha2{3, 1, 2022};
  EXPECT_EQ(true, fecha2.dia() == 3);
  EXPECT_EQ(true, fecha2.mes() == 1);
  EXPECT_EQ(true, fecha2.anio() == 2022);
  Fecha fecha3{40, 1, 2022};
  EXPECT_EQ(true, fecha3.dia() == 1);
  EXPECT_EQ(true, fecha3.mes() == 1);
  EXPECT_EQ(true, fecha3.anio() == 1);
}

/**
 * Test que prueba EsBisiesto
 */
TEST(FechaTest, bisiesto) {
    Fecha fecha1{1, 1, 1992};
    Fecha fecha2{1, 1, 2006};
    EXPECT_EQ(true, EsBisiesto(fecha1));
    EXPECT_EQ(false, EsBisiesto(fecha2));
}

/**
 * Test que prueba el operador ==
 */
TEST(FechaTest, igual) {
    Fecha fecha1{1, 1, 1992};
    Fecha fecha2{10, 4, 2006};
    Fecha fecha3{1, 1, 1992};
    EXPECT_EQ(true, fecha1 == fecha3);
    EXPECT_EQ(false, fecha1 == fecha2);
}

/**
 * Test que prueba el operador !=
 */
TEST(FechaTest, desigual) {
    Fecha fecha1{1, 1, 1992};
    Fecha fecha2{10, 4, 2006};
    Fecha fecha3{1, 1, 1992};
    EXPECT_EQ(false, fecha1 != fecha3);
    EXPECT_EQ(true, fecha1 != fecha2);
}

/**
 * Test que prueba el operador >
 */
TEST(FechaTest, mayor) {
    Fecha fecha1{1, 1, 1992};
    Fecha fecha2{10, 4, 2006};
    EXPECT_EQ(true, fecha2 > fecha1);
    EXPECT_EQ(false, fecha1 > fecha2);
}

/**
 * Test que prueba el operador <
 */
TEST(FechaTest, menor) {
    Fecha fecha1{1, 1, 1992};
    Fecha fecha2{10, 4, 2006};
    EXPECT_EQ(false, fecha2 < fecha1);
    EXPECT_EQ(true, fecha1 < fecha2);
}

/**
 * Test que prueba el operador >=
 */
TEST(FechaTest, mayorigual) {
    Fecha fecha1{1, 1, 1992};
    Fecha fecha2{10, 4, 2006};
    Fecha fecha3{1, 1, 1992};
    EXPECT_EQ(true, fecha2 >= fecha1);
    EXPECT_EQ(true, fecha2 >= fecha3);
    EXPECT_EQ(false, fecha1 >= fecha2);
}

/**
 * Test que prueba el operador <=
 */
TEST(FechaTest, menorigual) {
    Fecha fecha1{1, 1, 1992};
    Fecha fecha2{10, 4, 2006};
    Fecha fecha3{1, 1, 1992};
    EXPECT_EQ(false, fecha2 <= fecha1);
    EXPECT_EQ(false, fecha2 <= fecha3);
    EXPECT_EQ(true, fecha1 <= fecha2);
}