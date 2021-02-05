

#include "gtest/test.h"
#include <calculator.h>

TEST(CalculatorTest,addition){
    EXPECT_EQ(100,addition(80,20));
    EXPECT_EQ(60,addition(80,-20));
    EXPECT_EQ(-50,addition(-20,-30));
}
TEST(CalculatorTest, subtraction){
    EXPECT_EQ(60,subtraction(80,20));
    EXPECT_EQ(100,subtraction(80,-20));
    EXPECT_EQ(-50,subtraction(-20,-30));
}
TEST(CalculatorTest,multiplication){
    EXPECT_EQ(1600,multiplication(80,20));
    EXPECT_EQ(-1600,multiplication(80,-20));
    EXPECT_EQ(600,multiplication(-20,-30));
}
TEST(CalculatorTest,addition){
    EXPECT_EQ(4,division(80,20));
    EXPECT_EQ(-4,division(80,-20));
    EXPECT_EQ(0,division(-20,-30));
}

int main(int argc,char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}