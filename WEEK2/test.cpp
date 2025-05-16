#include "______ Your File Name________"
#include <gtest/gtest.h>
using namespace std;

TEST(duplicate, T1){
    int *arr1=new int[5];
    int arr[5];
    for (int i = 0; i < 5; i++) arr1[i]=i*3;
    int *ptr=arr1;
    duplicate(ptr,arr,5);

    for (int i = 0; i < 5; i++)
    {
        EXPECT_EQ(arr[i],arr1[i]);
    }

}
TEST(duplicate, T2){
    int *arr1=new int[10];
    int arr[10];
    for (int i = 0; i < 10; i++) arr1[i]=i*2+11;
    int *ptr=arr1;
    duplicate(ptr,arr,10);

    for (int i = 0; i < 10; i++)
    {
        EXPECT_EQ(arr[i],arr1[i]);
    }

}

TEST(countPrime, T1){
   int arr[]={9,23,22,7,9,11};
   int size=6, count=3;
   countPrime(arr,size,count);
   EXPECT_EQ(3,count);

}

TEST(capital, T1){
   char str[14]="cybersecurity";
   char *p=str;
   char *expec=toCapital(p);
   char res[14]="CYBERSECURITY";
   for (size_t i = 0; i < 14; i++)
   {
       EXPECT_EQ(expec[i],res[i]);
   }

}

TEST(capital, T2){
   char str[12]="environment";
   char *p=str;
   char *expec=toCapital(p);// expect a return
   char res[12]="ENVIRONMENT";
   for (size_t i = 0; i < 12; i++)
   {
       EXPECT_EQ(expec[i],res[i]);
   }

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
