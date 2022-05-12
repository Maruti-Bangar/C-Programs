#include<stdio.h>
void Display(int iValue)
{
    int iCnt = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("LUCk\n");
    }
}

int main()
{
  int iNo = 0;
  printf("enter the value \n");
  scanf("%d",&iNo);

  Display(iNo);
    return 0;
}