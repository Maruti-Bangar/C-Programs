

#include<stdio.h>
////////////////////////////////////////////////////////////////
// Function name    : Addition
// Description      : Used to perform addition of two numbers
// Input            : integer, integer
// Output           : integer
// Date             : 12/04/2022
// Author           : Bangar Maruti Ashok
////////////////////////////////////////////////////////////////
int  Addition(int iValue1,int iValue2)
{
    int iAns = 0;
    iAns = iValue1+iValue2;
    return iAns;

}
///////////////////////////////////////////////////////
// Write a program ro perform addition of two numbers//
//////////////////////////////////////////////////////

int main()
{
    int  iNo1=0;
    int  iNo2 = 0;
    int  iNo3 =0;
    printf("enter the first number \n");
    scanf("%d",&iNo1);
    printf("enter the second number \n");
    scanf("%d",&iNo2);

    // iNo3 = iNo1+iNo2;
    iNo3 = Addition(iNo1,iNo2);
    printf(" addition is : %d\n",iNo3);
    printf("%s\n",__DATE__);
    return 0;
}
/////////////////////////////////////////////////
//
// Input  : 11   10 
// output :    21
//
// //////////////////////////////////////////////