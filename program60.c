#include<stdio.h>
#include<stdbool.h>
int Power(int iNo1,int iNo2)
{
    int iMult = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo2;iCnt++)
    {
        iMult = iMult*iNo1;
        
    }
    return iMult;

}
bool CheckArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0;
    int iDigit =0;
    int iSum = 0;
    if(iNo<0)
    {
        iNo =-iNo;
    }
    iTemp = iNo;

    // Calculate number of digits 
    while (iNo!=0)
    {
        iDigCnt++;
        iDigCnt =  iNo/10;
    }
    iNo = iTemp;
    while(iNo!=0)
    {
        iDigit  = iNo%10;
       iSum = iSum + Power(iDigit, iDigCnt);
        iNo = iNo/10;
    }
    if (iSum==iTemp)
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
  bool bRet  = 0;

  printf("Enter the number\n");
  scanf("%d",&iValue);
   
   bRet  = CheckArmstrong(iValue);

   if(bRet==true)
   {
       printf("%d is armstrong number\n");

   }
   else{
       printf("%d is not armstrong number\n");
   }
    return 0;
}