// Programm display to 1 to 5 on screen 
// Output 1 2 3 4 5 

#include<stdio.h>

void Display(int iNo)
{
  int iCnt =1;
  if(iNo<0)
 {
    printf("THe negative value is not accepted\n");
    return;
 }
 while (iCnt<=iNo)
 {
     printf("%d\n",iCnt);
     iCnt++;
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