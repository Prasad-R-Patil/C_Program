//write a program which accept number from user and return the count of digit in between 3 and 7
//Input:2397
//Output:1

#include<stdio.h>
int CountRange(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);
    printf("%d",iRet);
}
int CountRange(int iNo)
{
    int iDigit=0;
    int Count=0;

    if(iNo<0)
    {
        iNo=-iNo;

    }
    if(iNo==0)
    {
        printf("You entered zero value");
    }
    int iCnt=0;
    iCnt=1;

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit>3 && iDigit<7)
        {
            Count=Count+1;
        }
        iNo=iNo/10;
    }
    return Count;
}