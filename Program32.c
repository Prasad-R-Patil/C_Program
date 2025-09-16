//Write a program which accept range from user and display all even numbers in between that range.
//Input :23 35
//Output :23 24 25 26 27 28 29 30 31 32 33 34 35

//Input :10 10
//Output :10

//Input :90 18
//Output :Invalid range

#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Frist Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    return 0;

}