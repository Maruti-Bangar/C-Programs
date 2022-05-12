#include<stdio.h>
// input ROw 4 column 4
//$ 2 3 4
//1 $ 3 4
//1 2 $ 4
//1 2 3 $
void Display(int iRow, int iCol)
{
    int i,j;
    if(iRow!=iCol)
    {
        printf("Invalid input \n");
        return;
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
           if(i==j)
           {
               printf("$\t");
           }
           else
           {
               printf("%d\t",j);
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