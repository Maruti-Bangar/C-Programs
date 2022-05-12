//Accept N numbers from user and accept other one number and check that number frequency;



// Important question.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
   
    // int iSum = 0;
    int iCnt = 0;
    int iMin =Arr[0];
    int iFreq = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        
        if(iNo==Arr[iCnt])
        {
          iFreq++;
        }
       
       
    }
    return iFreq;
}
int main()
{
   int iSize  = 0;
   int *ptr = NULL;
   int iCnt = 0;
   int iRet = 0;
   int iValue=0;
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);

   ptr = (int *)malloc(iSize*sizeof(int));

   printf("Enter the values\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }
   
   printf("Enter the element to calcualate the frequency\n");
   scanf("%d",&iValue);
   iRet = Frequency(ptr,iSize,iValue);
   printf("The Frequency is : %d\n",iRet);
   free(ptr);


    return 0;
}
