#include "Calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTest, Factorielle) {
    Calculator calc = Calculator();

    EXPECT_EQ(1, calc.factorielle(0));

    EXPECT_EQ(1, calc.factorielle(1));
    EXPECT_EQ(120, calc.factorielle(5));
}

TEST(CalculatorTest, Add) {
    Calculator calc = Calculator();

    EXPECT_EQ(0, calc.add(0, 0));
    EXPECT_EQ(0, calc.add(1, -1));
    EXPECT_EQ(0, calc.add(-1, 1));

    EXPECT_EQ(2, calc.add(1, 1));
    EXPECT_EQ(-2, calc.add(-1, -1));
    EXPECT_EQ(200, calc.add(100, 100));
    EXPECT_EQ(-2, calc.add(-1, -1));
}

TEST(CalculatorTest, Sub) {
    Calculator calc = Calculator();

    EXPECT_EQ(0, calc.sub(0, 0));
    EXPECT_EQ(0, calc.sub(-1, -1));
    EXPECT_EQ(0, calc.sub(1, 1));
    
    EXPECT_EQ(2, calc.sub(-2, -4));
    EXPECT_EQ(-2, calc.sub(0, 2));
    EXPECT_EQ(-200, calc.sub(-100, 100));
    EXPECT_EQ(42, calc.sub(45, 3));

}

TEST(CalculatorTest, Div) {
    Calculator calc = Calculator();

    // EXPECT_EQ(0, calc.div(0, 0));
    EXPECT_EQ(0, calc.div(0, 1));
    EXPECT_EQ(0, calc.div(0, 100));
}