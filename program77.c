#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
   

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iNo==Arr[iCnt])
        {
           
            break;
        }
    }
    if(iCnt==iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int main()
{
  int iCnt = 0;
  int iSize = 0;
  int *ptr = NULL;
  bool bRet = false;
  int iValue = 0;

  printf("Enter the no. of elements\n");
  scanf("%d",&iSize);
  ptr = (int *)malloc(iSize*sizeof(int));

  printf("Enter the elements\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&ptr[iCnt]);
  }

  printf("Enter other number\n");
  scanf("%d",&iValue);

  bRet = Search(ptr,iSize,iValue);
  if(bRet==true)
  {
      printf("The %d is present in our array\n",iValue);
  }
  else
  {
      printf("THe number is not present in our array\n");
  }



    return 0;
}