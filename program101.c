#include<stdio.h>
// input ROw 4 columns 4
/*
   * 
   * *
   * * * 
   * * * * 
   
*/
void Display(int iRow, int iCol)
{
    int i,j;
    
   
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++) // j = i because it decreases the complexity.
        {
          if(i>=j)
          {
              printf("*\t");
          }
         
         
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