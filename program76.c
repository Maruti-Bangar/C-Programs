//Accept N numbers from user and accept other one number and check that number frequency;

// Accept N numbers and accept other one number and search that number present in aray or not .

// Important question.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[],int iLength,int iNo)
{
   
    // int iSum = 0;
    int iCnt = 0;
    
    int iFreq = 0;
    bool bFlag = false;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag = true;
            break;
        }
        
      
       
    }
    return bFlag;
    
}
int main()
{
   int iSize  = 0;
   int *ptr = NULL;
   int iCnt = 0;
   bool iRet ;
   int iValue=0;
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);

   ptr = (int *)malloc(iSize*sizeof(int));

   printf("Enter the values\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }
   
   printf("Enter the element to search\n");
   scanf("%d",&iValue);
   iRet =Search(ptr,iSize,iValue);
//    printf("The Frequency is : %d\n",iRet);
   if(iRet==true)
   {
       printf("The number is present in our array\n");
   }
   else
   {
       printf("The number is not  in our array\n");
   }
   free(ptr);


    return 0;
}
