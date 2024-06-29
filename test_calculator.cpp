#include "calculator.h"
#include <gtest/gtest.h>

// Test the Add method
TEST(CalculatorTest, Add) {
    Calculator calc;
    EXPECT_EQ(calc.Add(2, 3), 5);
    EXPECT_EQ(calc.Add(-1, 1), 0);
    EXPECT_EQ(calc.Add(-1, -1), -2);
}

// Test the Subtract method
TEST(CalculatorTest, Subtract) {
    Calculator calc;
    EXPECT_EQ(calc.Subtract(5, 3), 2);
    EXPECT_EQ(calc.Subtract(3, 5), -2);
    EXPECT_EQ(calc.Subtract(0, 0), 0);
}

// Test the Multiply method
TEST(CalculatorTest, Multiply) {
    Calculator calc;
    EXPECT_EQ(calc.Multiply(3, 4), 12);
    EXPECT_EQ(calc.Multiply(-1, 5), -5);
    EXPECT_EQ(calc.Multiply(0, 100), 0);
}

// Test the Divide method
TEST(CalculatorTest, Divide) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(calc.Divide(10, 2), 5.0);
    EXPECT_DOUBLE_EQ(calc.Divide(3, 2), 1.5);
    EXPECT_THROW(calc.Divide(1, 0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}