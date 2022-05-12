// 2 numbers out put A^B
// input :  a= 2 , b= 3
// output :  2 ^ 3 = 8;
#include <stdio.h>
/*
START 
  Accept one number as No1 
  Accept another number as No2 

  Create one Variable as Mult 
  Set the value 1 in the Variable Mult

Create one counter as Cnt 
Set the counter to 1 

  Iterate till the counter is less than or equal to no2
  mult = mult*no1;
  increment the counter by 1;

  continue 

  Display the value of mult 

  End
*/


int Power(int iNo1, int iNo2)
{ 
    int iCnt=0;
    int iMult = 1;

    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        iMult=iMult*iNo1;
    }
    return iMult;
    

}
int main()
{ 
    int iValue1  =0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter the first number\n");
    scanf("%d",&iValue1);
    printf("ENter the second number\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1,iValue2);
    printf("The out put is : %d",iRet);


    return 0;
}
