

#include <gtest/test.h>
#include "calculator.h"

TEST(CalculatorTest,add){
    EXPECT_EQ(11,add(5,6));
    EXPECT_EQ(0,add(0,0));
    EXPECT_EQ(-13,add(-7,-6));
}
TEST(CalculatorTest, sub){
    EXPECT_EQ(80,sub(100,20));
    EXPECT_EQ(-60,sub(-80,-20));
    EXPECT_EQ(0,sub(0,0);
}
TEST(CalculatorTest,mul){
    EXPECT_EQ(1600,mul(80,20));
    EXPECT_EQ(1600,mul(-80,-20));
    EXPECT_EQ(0,mul(0,0));
}
TEST(CalculatorTest,add){
    EXPECT_EQ(5,divn(50,10));
    EXPECT_EQ(1,divn(-20,-20));
    EXPECT_EQ(0,divn(-20,0));
}

int main(int argc,char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}