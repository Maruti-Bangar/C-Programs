#include<stdio.h>
/// input 1+2+3 
// output 6 (1+2+3)

// input  5
// output 15 (1+2+3+4+5)
// 
// Algorithm 
/*
 Accept number from user as No
 Check wheather that number is negative or not 
 if it is negative then convert in to positive
 
 create one variable as Sum and set it to 0
 Create one variable as Cnt and set it to 1

 Iterate till Cnt is less than  or equal to No
 Add the value of Cnt into the variable Sum
 Increment the value of Cnt by 1
*/
int  Summation(int iNo)
{
    int iSum = 0;
    int iCnt =0;

   if(iNo<0)
   {
    iNo=-iNo;  // Updater 
   }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
      iSum = iSum+iCnt;
  }
   
   return  iSum;
}

int main()
{
    int iValue=0;
    int iRet =0;
   printf("enter number\n");
   scanf("%d",&iValue);
    iRet=Summation(iValue);
   printf("Total addition is: %d  \n",iRet);

    return 0;
}

/*
iCnt = 1;
iCnt = 2;
iCnt = 3;
iCnt = 4;

iSum = 0;
iSum = iSum+1;
iSum = iSum+2;
iSum = iSum+3;
iSum = iSum+4;

*/