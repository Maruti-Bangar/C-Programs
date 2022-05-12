#include<stdio.h>
// Write a program to perform addition of 2 numbers
/////////////////////////////////////////////////////////////////
//  Function Name : Addition                                   //
//  Description   : Used to perform addition of 2 numbers      //
//  Input         : Integer   (11,-10)                                 //
//  Output        : Integer     (21)                               //
//  Date          : 13/05/2022                                 //
/////////////////////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)
{
    if(iValue1<0)
    {
      iValue1 = -iValue1;
    }
    if(iValue2<0)
    {
        iValue2 = -iValue2;
    }
    int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns;
}

int main()
{

    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    printf("Enter the first number\n");
    scanf("%d",&iNo1);

    printf("Enter the second number\n");
    scanf("%d",&iNo2);

    iNo3 = Addition(iNo1,iNo2);
    printf("Addition is : %d\n",iNo3);
    return 0;
}
