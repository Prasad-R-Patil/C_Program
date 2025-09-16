//Write a program which accept number from user and display its factor in Descending order.
//Input :12
//Output:6 4 3 2 1

#include<stdio.h>
void FactRev(int);
int main()
{
    int iValue=0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
void FactRev(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo-1;iCnt>0;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}