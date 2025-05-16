#include "i22-1741_week4.cpp"
#include <gtest/gtest.h>

// Tests factorial of 0.
TEST(FactorialTest, Zero) {
        EXPECT_EQ(1, Factorial(0));
}
//factorial testcase
TEST(FactorialTest, Positive) {
        EXPECT_EQ(1, Factorial(1));
        EXPECT_EQ(2, Factorial(2));
        EXPECT_EQ(6, Factorial(3));
        EXPECT_EQ(40320, Factorial(8));
}

//function for fibonacci series array equality check
bool ElementsAre(){
   int n,i=0;
    int result[10];
    int answer[10]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    n=10;

    while(i<n)
    {
        result[i]=fibonacci(i);
        i++;
    }
    for (int i=0;i<10;i++)
    {
      if(answer[i]==result[i])
         continue;
      else
         return false;
    }
    return true;
}
//fibonacci series test case
TEST(fibonacci, TestLab4) {

	EXPECT_TRUE(ElementsAre());

}
//GCD test case
TEST(gcd, TestLab4) {

   int num1,num2,gcd;
   num1=25;num2=35;
    gcd = findGCD(num1,num2);
      EXPECT_EQ(5, gcd);

}
//element search test case
TEST(LinearSearch, TestLab4) {
    bool result;
       int find=2;
         int size=10;
         int array[10]={1,2,3,4,5,6,7,8,9,10};



    result=LinearSearch(array,find,size--);
   EXPECT_TRUE(result);

}

//elf test case
TEST(Elfish, TestLab4) {
   char s[]="shelf",b[4]="elf";
   bool result;

   result=elfish(s,b,0);
   EXPECT_TRUE(result);

}


int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
