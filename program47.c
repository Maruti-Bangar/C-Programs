#include<stdio.h>
///  input : 7856
//OUTPUT:
//6
//5
//8
//7
int  SumDigits(int iNo)
{
  int iSum = 0;
  int iDigit = 0;
  while (iNo!=0)
  {
    iDigit = iNo%10;
    iSum = iDigit + iSum;
    iNo = iNo/10;

  }
 return iSum;

}
int main()
{
   int iValue = 0;
   int iRet= 0;
   printf("Enter the number\n");
   scanf("%d",&iValue);
    
 iRet = SumDigits(iValue);
 printf("%d THe sum of digits",iRet);

 return 0;
}