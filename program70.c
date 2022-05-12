#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEven = 0;
    printf("Elements of Aray is : \n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])%2==0)
        {
        printf("%d\n",Arr[iCnt]);
       
        }
    }
    printf("%d\n",iEven);
}
int main()
{ 
    int iCnt = 0;
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter the number of elements \n");
    scanf("%d",&iSize);
  ptr = (int *)malloc(iSize * sizeof(int));
    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
    }
    DisplayEven(ptr,iSize);

  free(ptr);

    return 0;
}

/*
Steps to solve Problems on N numbers 

Step1: Accept the size of array from user                 (main)
Step2: Allocate the memory dynamically for that array      (main)
Step3: Accept the values from user and store in the array  (main)
Step4: Pass that arrat and size to the function (logic)     (Helper function)
Step5:  Dellocate memory of that array.                    (main)


*/