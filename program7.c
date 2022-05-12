

#include<stdio.h>
int Addition(int , int );    // forward 


////////////////////////////////////////////////////////
// Write a program ro perform addition of two numbers  
///////////////////////////////////////////////////////

int main()
{
    int  iNo1=0;
    int  iNo2 = 0;
    int  iNo3 =0;
    printf("enter the first number \n");
    scanf("%d",&iNo1);
    printf("enter the second number \n");
    scanf("%d",&iNo2);

    // iNo3 = iNo1+iNo2;
    iNo3 = Addition(iNo1,iNo2);
    printf(" addition is : %d\n",iNo3);
    printf("%s\n",__DATE__);
    return 0;
}
/////////////////////////////////////////////////
//
// Input  : 11   10 
// output :    21
//
// //////////////////////////////////////////////


// gcc program7.c library7.c -o myexe 
// myexe 