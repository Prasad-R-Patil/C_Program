//Accept onr number and check Wheather is is Divisible by 5 or not.
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

bool Check(BOOL iNo)
{
    if((iNo % 5)==0)
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

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if(bRet==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Noy Divisible by 5");
    }
    return 0;
}