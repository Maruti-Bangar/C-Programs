// Programm display to 1 to 5 on screen 
// Output 1 2 3 4 5 

#include<stdio.h>

void Display(int iNo)
{
  int iCnt =0;
  if(iNo<0)
  {
      iNo=-iNo;
  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
      printf("%d\n",iCnt);
  }
}

int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);

   Display(iValue);
    return 0;
}