/*
Write a program which accept range from user and return addition of all even numbers in 
between that range.(Range should contains positive numbers only)
Input :23 30
Output :108

Input :10 18
Output :70

Input :-10 2
Output :Invalid range

Input :90 18
Output :Invalid range

*/

#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
{
    int iCnt=0,iSum=0;

    if(iStart>iEnd)
    {
       printf("Invalid Range\n");
    }
    if(iStart<0)
    {
        return -1;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter Frist Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range");
    }
    else
    {
       printf("Addition of sum digit are: %d",iRet);
    }
    printf("\n");

    return 0;
}