#include<iostream>
using namespace std;
int Summation(int iValue)
{
  int iCnt = 0;
  int iSum = 0;
  if(iValue<0)
  {
      iValue = -iValue;
  }
  for(iCnt=1;iCnt<=iValue;iCnt++)
  {
      iSum = iSum+iCnt;
  }
  return iSum;



}

int main()
{
  int iNo = 0;
  int iRet = 0;

  cout<<"enter number\n";
  cin>>iNo;
  iRet = Summation(iNo);
  cout<<"The whole addition is "<<iRet<<endl;



    return 0;
}

