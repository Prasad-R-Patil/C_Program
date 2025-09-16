//Accept number from user and check whether number is even or odd
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the  number ");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);
    if(bRet==TRUE)
    {
        printf("%d is Even Number",iValue,bRet);
    }
    else
    {
       printf("%d is Odd Number",iValue,bRet);
    }

    return 0;
}