// accept number from user and check wheather your number divisible by 3 and 5;
#include<stdio.h>
#include<stdbool.h>
bool Check(int iValue)
{
    if(((iValue % 3)==0)&& ((iValue % 5)==0))
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
    bool bRet =false;
    printf("enter the number \n");
    scanf("%d",&iNo);

    bRet  = Check(iNo);
    if(bRet==true)
    {
        printf("%d is divisible by 3 & 5\n",iNo);
    }
    else{
        printf("%d is not divisible by 3 & 5 \n",iNo);
    }
    return 0;

}