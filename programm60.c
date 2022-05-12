#include<stdio.h>
#include<stdbool.h>
int Power(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++ )
    {
        iMult = iMult*iNo1;
    }
    return iMult;
}
bool CheckArmstrong(int iNo)
{
    int iCnt = 0;
    int iTemp = 0;
    int iSum = 0;
    int iDigCnt = 0;
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    iTemp = iNo;

    while(iNo!=0)
    {
        iDigCnt++;
        iNo = iNo/10;
    }
    iNo = iTemp;
    while(iNo!=0)
    {
        iDigit = iNo%10;
      iSum = iSum + Power(iDigit,iDigCnt);
        iNo = iNo/10;
    }
    if(iSum==iTemp)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
   int iValue = 0;
  bool iRet ;
   printf("Enter the number\n");
   scanf("%d",&iValue);
  iRet = CheckArmstrong(iValue);

  if(iRet==true)
  {
      printf("The number %d is Armstrong\n",iValue);

  }
  else
  {
      printf("THe number %d is not Armstrong\n",iValue);
  }

    return 0;
}