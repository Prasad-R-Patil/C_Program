#include<stdio.h>
void EvenFactor(int iNo)
{
    if(iNo<0)
    {
       iNo=-iNo;
    }
    if(iNo==0)
    {
        printf("You entered zero value");
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0&&(iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}
int main()
{
    int iValue=0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    EvenFactor(iValue);
    return 0;
}