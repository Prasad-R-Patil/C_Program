//write a program which accept number from user and return difference between summention of even digit and summention odd digit.
// Input:2395
// Output:-15 (2 - 17)

#include<stdio.h>
int CountDiff(int);
int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("%d\n",iRet);

    return 0;
}
int CountDiff(int iNo)
{
    int iDigit=0,iSum=0,iOdd=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        printf("You entered zero value ");
    }
    int iCnt=0;
    iCnt=1;
    while(iNo>0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iSum=iSum+iDigit;
        }
        else 
        {
            iOdd=iOdd+iDigit;
        }
        iNo=iNo/10;
    }
    return iSum-iOdd;
}