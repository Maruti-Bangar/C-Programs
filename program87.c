
//  input : 4
// Output :   4 3 2 1 1 2 3 4
// Complexity O(N)

#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
 
  
 for(iCnt=(-iNo);iCnt<=iNo;iCnt++)
 {
     printf("%d\t",iCnt);
 }

}

int main()
{
  int iValue = 0;
  printf("Enter the Value\n");
  scanf("%d",&iValue);

  Display(iValue);


    return 0;
}