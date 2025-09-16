/*
Write a program which accept range from user and display all numbers in between that 
range in reverse order.
Input :23 35
Output :35 34 33 32 31 30 29 28 27 26 25 24 23

Input :10 18
Output :70

Input :-10 2
Output :Invalid range

Input :90 18
Output :Invalid range

*/

#include<stdio.h>
void RangeDisplayRev(int,int);
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf("Enter Number\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    return 0;
}
void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt=0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }

    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}