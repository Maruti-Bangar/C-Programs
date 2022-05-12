// Accept number from user and check wheather number even or odd.
#include<stdio.h>
#include<stdbool.h>

 bool ChkEven(int iValue)
  {
     if((iValue%2)==0)
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
    int iNo = 0;
    bool iRet = false;
    printf("Enter the number\n");
    scanf("%d",&iNo);
    iRet = ChkEven(iNo);

    if(iRet==true)
    {
        printf("%d is even number\n",iNo);
    }
    else
    {
        printf("%d is odd number\n",iNo);
    }



    return 0;
}