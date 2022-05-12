#include<iostream>
using namespace std;
void Display(int iNo)
{
    int iCnt =1;
    if(iNo<0)
    {
        iNo = -iNo;

    }
    while(iCnt<=iNo)
    {
        cout<<iCnt<<endl;
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    cout<<"enter the number"<<endl;
    cin>>iValue;
    Display(iValue);

    return 0;
}