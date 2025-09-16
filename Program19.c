//Write a program which accept number from user and count Frequency of 4 in it.
//Input:2395;
//output:0

//Input:9440
//Output:2

#include<stdio.h>
int CountFour(int);
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);
    printf("%d",iRet);
}
int CountFour(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        printf("You entered zero value\n");
    }
    int iCount=0;
    int iCnt=0;
    iCnt=1;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
        {
           iCount=iCount+1;
        }
        iNo=iNo/10;
    }
    return iCount;
    printf("\n");
}