import java.lang.*;

class Summation
{
    public void Sum(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        if(iNo<0)
        {
            iNo=-iNo;
        }

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iSum=iSum+iCnt;
        }
        System.out.println(iSum);

    }
}

class sum
{
    public static void main(String arr[])
    {
        Summation obj = new Summation();
        obj.Sum(5);
        
    }
}