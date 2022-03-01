#include <gtest/gtest.h>

#include "complejo.h"

/**
 * Test para probar los constructores de la clase
 */
TEST(ComplejoTest, constructor) {
  Complejo complejo;
  EXPECT_EQ(true, complejo.real() == 0);
  EXPECT_EQ(true, complejo.imaginario() == 0);
  Complejo complejo2{1, 2};
  EXPECT_EQ(true, complejo2.real() == 1);
  EXPECT_EQ(true, complejo2.imaginario() == 2);
}

/**
 * Test para probar la suma de complejos
 */
TEST(ComplejoTest, suma) {
  Complejo complejo1{1, 2};
  Complejo complejo2{3, 2};
  Complejo complejo3{complejo1 + complejo2};
  EXPECT_EQ(true, complejo3.real() == 4);
  EXPECT_EQ(true, complejo3.imaginario() == 4);
  Complejo complejo4{1, -5};
  Complejo complejo5{complejo2 + complejo4};
  EXPECT_EQ(true, complejo5.real() == 4);
  EXPECT_EQ(true, complejo5.imaginario() == -3);
}


/**
 * Test para probar la resta de complejos
 */
TEST(ComplejoTest, resta) {
  Complejo complejo1{1, 2};
  Complejo complejo2{3, 2};
  Complejo complejo3{complejo1 - complejo2};
  EXPECT_EQ(true, complejo3.real() == -2);
  EXPECT_EQ(true, complejo3.imaginario() == 0);
  Complejo complejo4{1, -5};
  Complejo complejo5{complejo4 - complejo2};
  EXPECT_EQ(true, complejo5.real() == -2);
  EXPECT_EQ(true, complejo5.imaginario() == -7);
}

/**
 * Test para probar la multiplicación de complejo por número
 */
TEST(ComplejoTest, multiplicacion) {
  Complejo complejo1{1, 2};
  Complejo complejo2{complejo1 * 3};
  EXPECT_EQ(true, complejo2.real() == 3);
  EXPECT_EQ(true, complejo2.imaginario() == 6);
}

/**
 * Test para probar la división de complejo por número
 */
TEST(ComplejoTest, division) {
  Complejo complejo1{4, 2};
  Complejo complejo2{complejo1 / 2};
  EXPECT_EQ(true, complejo2.real() == 2);
  EXPECT_EQ(true, complejo2.imaginario() == 1);
}

/**
 * Test para probar un comparador
 */
TEST(ComplejoTest, igual) {
  Complejo complejo1{1, 2};
  Complejo complejo2{3, -2};
  Complejo complejo3{1, 2};
  EXPECT_EQ(true, complejo1 == complejo3);
  EXPECT_EQ(false, complejo2 == complejo3);
}

/**
 * Test para probar un comparador
 */
TEST(ComplejoTest, distinto) {
  Complejo complejo1{1, 2};
  Complejo complejo2{3, -2};
  Complejo complejo3{1, 2};
  EXPECT_EQ(false, complejo1 != complejo3);
  EXPECT_EQ(true, complejo2 != complejo3);
}

/**
 * Test para probar Conjugado
 */
TEST(ComplejoTest, conjugado) {
  Complejo complejo1{1, 2};
  Complejo conjugado1{Conjugado(complejo1)};
  EXPECT_EQ(true, conjugado1.real() == complejo1.real());
  EXPECT_EQ(true, conjugado1.imaginario() == - complejo1.imaginario());
}

/**
 * Test para probar el valor absoluto
 */
TEST(ComplejoTest, valorabs) {
  const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
  Complejo complejo1{1, 1};
  double resultado{1.41421};
  EXPECT_EQ(true, resultado - valorabs(complejo1) < kEpsilon);
}