

#include "gtest/test.h"
#include <calculator.h>

TEST(CalculatorTest,add){
    EXPECT_EQ(11,add(5,6));
    EXPECT_EQ(12,add(6,6));
    EXPECT_EQ(13,add(7,6));
}
TEST(CalculatorTest, sub){
    EXPECT_EQ(80,sub(100,20));
    EXPECT_EQ(100,sub(80,-20));
    EXPECT_EQ(50,sub(100,50));
}
TEST(CalculatorTest,mul){
    EXPECT_EQ(1600,mul(80,20));
    EXPECT_EQ(-1600,mul(80,-20));
    EXPECT_EQ(600,mul(-20,-30));
}
TEST(CalculatorTest,add){
    EXPECT_EQ(4,divn(80,20));
    EXPECT_EQ(-4,divn(80,-20));
    EXPECT_EQ(0,divn(-20,-30));
}

int main(int argc,char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}