# include <gtest/gtest.h>

# include "factorial.h"

TEST(FactorialTest, negative) {
        EXPECT_EQ(1, Factorial(-5));
        EXPECT_EQ(1, Factorial(-1));
        EXPECT_GT(Factorial(-10), 0);
}

TEST(FactorialTest, DISABLED_zero) {
         EXPECT_EQ(1, Factorial(0));
}

TEST(FactorialTest, positive) {
         EXPECT_EQ(1, Factorial(0));
         EXPECT_EQ(1, Factorial(1));
         EXPECT_EQ(2, Factorial(2));
         EXPECT_EQ(6, Factorial(3));
         EXPECT_EQ(40320, Factorial(8));
         EXPECT_EQ(3628800, Factorial(10));
         EXPECT_EQ(1307674368000, Factorial(15));
}    
