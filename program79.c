//Accept N numbers  and other numbers written the index which occurs in our array.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int SearchFirst(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int Freq = 0;
   

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iNo==Arr[iCnt])
        {
           
            break;
        }
    }
    if(iCnt==iLength)
    {
        return -1;
    }
    else
    {
      return iCnt;
    }
    
        
}
int main()
{
  int iCnt = 0;
  int iSize = 0;
  int *ptr = NULL;
   int iRet  = 0;
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

  iRet = SearchFirst(ptr,iSize,iValue);
 if(iRet==-1)
 {
     printf("There is no such elements in array\n");
 }
 else
 {
     printf("Elements first occured at index : %d\n",iRet);

 }
 free(ptr);


    return 0;
}