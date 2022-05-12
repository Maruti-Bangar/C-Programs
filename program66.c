#include<stdio.h>
// Call by address 
void Display(int ptr[])
{
    int iCnt=0;
 printf("The array elements is \n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",ptr[iCnt])
        
    }
}

int main()
{
   int iCnt;
   auto int Arr[5];
   
   printf("Enter elements: \n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
   
   Display(Arr); // Display(100);
  

    return 0;
}
// Arr[2]
// *(Arr+2)
//*(2+Arr)
// 2[Arr]