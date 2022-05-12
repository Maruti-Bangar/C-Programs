#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iValue)
{
    if((iValue%2==0))
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{  int iNo = 0;
   bool bRet = false;
   printf("enter the number \n");
   scanf("%d",&iNo);
   bRet = ChkEven(iNo);
   if(bRet==true)
   {
       printf("%d the number is even\n",iNo);
   }
   else
   {
       printf("%d the number is odd\n",iNo);
   }

    return 0;
}