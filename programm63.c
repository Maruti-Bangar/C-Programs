#include<stdio.h>

int main()
{
   int iCnt;
   auto int Arr[5];
   
   printf("Enter elements: \n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("The array elements is \n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
  













  
    return 0;
}