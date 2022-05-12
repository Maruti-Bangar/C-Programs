#include<stdio.h>
#include<stdlib.h>
int DisplaySum(int Arr[],int iLength)
{int iCnt = 0;
int iSum = 0;

for(iCnt=0;iCnt<iLength;iCnt++)
{
    iSum = iSum + Arr[iCnt];
}
return iSum;

}
int main()
{
  int iSize = 0;
  int iCnt = 0;
  int iRet = 0;
  int *ptr = NULL;

  printf("The no of elements\n");
  scanf("%d",&iSize);

  ptr = (int *)malloc(iSize*sizeof(int));
  printf("Enter the elements\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&ptr[iCnt]);
  }
  iRet = DisplaySum(ptr,iSize);
  printf("The sum is %d \n",iRet);

    return 0;
}