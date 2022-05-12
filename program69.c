#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt=0;
 printf("The array elements is \n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
        
    }
}

int main()
{
  register int iCnt;
         //    auto int Brr[5];   Static Memory allocation.
 int *ptr = NULL;
 int iSize = 0;

 printf("Enter the number of Elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize*sizeof(int));
   printf("Enter elements: \n");
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
   
   Display(ptr,iSize); // Display(100);
  free(ptr);

    return 0;
}
