#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}