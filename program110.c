#include<stdio.h>
// input ROw 4 columns 4
/*
   ****
   ***
   **
   *
*/
void Display(int iRow, int iCol)
{
    int i,j;
    char ch = '\0';

    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=i;j++) 
        {
           printf("*\t");
         
        }
        printf("\n");
    }
     for(i=2;i<=iRow;i++)
    {
        for(j=1;j<=i;j++) // j< = i because it decreases the complexity.For optimization purpose.
        {
           printf("*\t");
         
        }
        printf("\n");
    }
}
int main()
{  
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter the value of ROw \n");
    scanf("%d",&iValue1);
    printf("Enter the value of column\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}