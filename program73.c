//Accept N numbers from user and  return the largest number from that number 

// Important question.
#include<stdio.h>
#include<stdlib.h>

int MaxNumber(int Arr[],int iLength)
{

    // int iSum = 0;
    int iCnt = 0;
    int iMax =Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        
        if(iMax<Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
       
    }
    return iMax;
}
int main()
{
   int iSize  = 0;
   int *ptr = NULL;
   int iCnt = 0;
   int iRet = 0;
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);

   ptr = (int *)malloc(iSize*sizeof(int));

   printf("Enter the values\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }
   
   iRet = MaxNumber(ptr,iSize);
   printf("The Maximum number  is %d\n",iRet);
   free(ptr);


    return 0;
}
