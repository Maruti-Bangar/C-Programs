// Write a program to perform addition of two numbers

#include<stdio.h>

int main()
{
    float iNo1=0;
    float iNo2 = 0;
    float iNo3 =0;
    printf("enter the first number \n");
    scanf("%f",&iNo1);
    printf("enter the second number \n");
    scanf("%f",&iNo2);

    iNo3 = iNo1+iNo2;
    printf(" addition is : %f\n",iNo3);
    return 0;
}