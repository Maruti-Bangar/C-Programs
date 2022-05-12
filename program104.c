#include<stdio.h>
// input ROw 4 columns 4
/*
  a b c d
  a b c d
  a b c d
  a b c d
   
*/
void Display(int iRow, int iCol)
{
    int i,j;
    char ch = '\0';

    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='a';j<=iCol;j++,ch++) 
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