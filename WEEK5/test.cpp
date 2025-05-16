#include "22i-1741_lab5.cpp"
#include <gtest/gtest.h>



//q1
TEST(PowerTest, Q2) {
    ASSERT_EQ(8, pow(2,3));
   ASSERT_EQ(1, pow(5,0));
}

//q3
TEST(product, Q5) {
    ASSERT_EQ(0, product(0,1));
    ASSERT_EQ(30, product(5,6));
    ASSERT_EQ(0, product(0,0));
}

//q5
TEST(SubString, TestLab4) {
    char str1[] = "hart";
    char str2[] = "cathartic";
    int m = strlen(str1);
    int n = strlen(str2);
    bool answer = SubString(str1, str2, m, n);
   EXPECT_TRUE(answer);

}


//q6
TEST(fittest, Q10) {
    ASSERT_EQ(1, fittest(5));
    ASSERT_EQ(1, fittest(3));
    
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
