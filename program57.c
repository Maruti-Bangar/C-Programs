#include<stdio.h>
typedef unsigned long int ULONG;
ULONG Power(int iNo1, int iNo2)
{
  register  int iCnt = 0;
    ULONG lMult = 1;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        lMult = lMult*iNo1;
    }
    return lMult;
}

int main()
{
auto  int iValue1 = 0;
 auto int iValue2 = 0;
 auto ULONG  lRet = 0;

  printf("Enter the base: \n");
  scanf("%d",&iValue1);

  printf("Enter the power: \n");
  scanf("%d",&iValue2);

  lRet = Power(iValue1,iValue2);
  printf("The Result is : %ld",lRet);
    return 0;
}