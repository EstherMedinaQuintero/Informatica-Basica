#include <gtest/gtest.h>

#include "compute.h"

/**
 * Test que prueba EsPrimo
 */
TEST(ComputeTest, primo) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.EsPrimo(2));
    EXPECT_EQ(false, computation.EsPrimo(4));
}

/**
 * Test que prueba EsPerfecto
 */
TEST(ComputeTest, perfecto) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.EsPerfecto(28));
    EXPECT_EQ(false, computation.EsPerfecto(1));
}

/**
 * Test que prueba EsPrimoPerfecto
 */
TEST(ComputeTest, primoperfecto) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.EsPrimoPerfecto(977));
    EXPECT_EQ(false, computation.EsPrimoPerfecto(4));
}

/**
 * Test que prueba EstaBalanceado
 */
TEST(ComputeTest, balanceado) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.EstaBalanceado(1463));
    EXPECT_EQ(false, computation.EstaBalanceado(277242355));
}

/**
 * Test que prueba SonPrimosRelativos
 */
TEST(ComputeTest, primosrelativos) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.SonPrimosRelativos(13, 17));
    EXPECT_EQ(false, computation.SonPrimosRelativos(63, 3));
}

/**
 * Test que prueba Factorial
 */
TEST(ComputeTest, factorial) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.Factorial(5) == 120);
    EXPECT_EQ(true, computation.Factorial(4) == 24);
}

/**
 * Test que prueba SumSerie
 */
TEST(ComputeTest, sumserie) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.SumSerie(5) == 1 + 2 + 3 + 4 + 5);
}

/**
 * Test que prueba EsArmstrong
 */
TEST(ComputeTest, armstrong) {
    ComputeInt computation; 
    EXPECT_EQ(true, computation.EsArmstrong(9));
    EXPECT_EQ(false, computation.EsArmstrong(154));
}