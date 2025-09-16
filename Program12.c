#include<stdio.h>
int MultFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int MultFact=1;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            MultFact=MultFact*iCnt;
        }
    }
    return MultFact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("%d",iRet);
    printf("\n");
    return 0;
}