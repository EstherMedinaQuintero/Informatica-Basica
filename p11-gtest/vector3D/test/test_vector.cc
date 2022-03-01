#include <gtest/gtest.h>

#include "vector.h"

/**
 * Test para probar los constructores de la clase
 * No se comprueba la igualdad sobre números de tipo double por los
 * problemas de precisión.
 *
 * Se prueba que el valor devuelto sea igual al esperado por una diferencia
 * no mayor de epsilon (kEpsilon), un valor cercano a cero.
 * 
 * @See https://stackoverflow.com/questions/12278523/comparing-double-values-in-c
 *
 */
TEST(VectorTest, constructor) {
  const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
  Vector my_vector;

  EXPECT_EQ(true, my_vector.x() < kEpsilon);
  EXPECT_EQ(true, my_vector.y() < kEpsilon);
  EXPECT_EQ(true, my_vector.z() < kEpsilon);

  Vector another_vector{1.0, 2.0, 3.0};
  EXPECT_EQ(true, (my_vector.x() - 1.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.y() - 2.0 < kEpsilon));
  EXPECT_EQ(true, (my_vector.z() - 3.0 < kEpsilon));
}

/**
 * Test que prueba la suma de dos vectores
 */
TEST(VectorTest, suma) {
    Vector v1{1.0, 2.0, 3.0};
    Vector v2{1.0, 2.0, 3.0};
    Vector suma{2.0, 4.0, 6.0};
    EXPECT_EQ(true, suma == v1 + v2);
    EXPECT_EQ(false, v2 == v1 + suma);
}

/**
 * Test que prueba la resta de dos vectores
 */
TEST(VectorTest, resta) {
    Vector v1{2.0, 4.0, 6.0};
    Vector v2{1.0, 2.0, 3.0};
    Vector resta{1.0, 2.0, 3.0};
    EXPECT_EQ(true, resta == v1 - v2);
    EXPECT_EQ(false, v2 == v2 - resta);
}

/**
 * Test que prueba si dos vectores son iguales
 */
TEST(VectorTest, iguales) {
    Vector v1{1.0, 2.0, 3.0};
    Vector v2{1.0, 2.0, 3.0};
    Vector v3{4.0, 5.0, 6.0};

    EXPECT_EQ(true, v1 == v2);
    EXPECT_EQ(false, v1 == v3);
}

/**
 * Test que prueba la multiplicación de un vector por un escalar
 */
TEST(VectorTest, vectorporescalar) {
    Vector v1{1.0, 2.0, 3.0};
    double escalar{2.0};
    Vector v2{2.0, 4.0, 6.0};
    EXPECT_EQ(true, v1 * escalar == v2);
    EXPECT_EQ(true, escalar * v1 == v2);
}

/**
 * Test que prueba la multiplicación escalar de dos vectores
 */
TEST(VectorTest, productoescalar) {
    const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
    Vector v1{1.0, 2.0, 3.0};
    Vector v2{2.0, 4.0, 6.0};
    double resultado{28.0};
    EXPECT_EQ(true, (v1 * v2 - resultado) < kEpsilon);
}

/**
 * Test que prueba el módulo
 */
TEST(VectorTest, modulo) {
    const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
    Vector v1{1.0, 2.0, 3.0};
    double mod{3.74166};
    EXPECT_EQ(true, (v1.modulo() - mod < kEpsilon));
}

/**
 * Test que prueba el unitario
 */
TEST(VectorTest, unitario) {
    const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
    Vector v1{1.0, 2.0, 3.0};
    Vector unitario{v1.unitario()};
    Vector v2{0.267261, 0.534522, 0.801784};
    EXPECT_EQ(true, (unitario.x() - v1.x() < kEpsilon));
    EXPECT_EQ(true, (unitario.y() - v1.y() < kEpsilon));
    EXPECT_EQ(true, (unitario.z() - v1.z() < kEpsilon));
}