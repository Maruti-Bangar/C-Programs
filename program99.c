#include<stdio.h>
// input ROw 4 columns 4
/*
   *  *  *  * 
   *  *     *
   *     *  *
   *  *  *  *
*/
void Display(int iRow, int iCol)
{
    int i,j;
    
   if(iRow!=iCol)
   {
       return ;
   }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
          if((i==1)||(i==iRow)||(j==1)||(j==iCol))
          {
              printf("*\t");
          }
          else if(i==j)
          {
              printf("*\t");
          }
          
          else
          {
              printf(" \t");
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