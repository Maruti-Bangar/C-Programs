#include<stdio.h>
// input ROw 4 columns 4
/*
  A
  B B 
  C C C 
  D D D D
   
*/
void Display(int iRow, int iCol)
{
    int i,j;
    char ch = '\0';

    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
        for(j=1;j<=i;j++) 
        {
           printf("%c\t",ch);
         
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