//Write a program which accept number from user and count frequency of such a digit which are less than 6
//Input:2395
//Output:3

//Input:1018
//Output:3

#include<stdio.h>
int Count(int);
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=Count(iValue);
    printf("%d",iRet);
    return 0;
}
int Count(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        printf("You entered zero value");
    }
    int iCnt=0,Count=0;

    iCnt=1;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            Count=Count+1;
        }
        iNo=iNo/10;
    }
    return Count;
}
//printf("\n");