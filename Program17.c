//Write a program which accept number from user and check wheather it contain 0 in it or not
/*Input :2397
  Output:There is no zero.

  Input :2230
  Output:It Contains Zero.
*/
#include<stdio.h>
#include<stdbool.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    iCnt=1;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return TRUE;
        }
        
        iNo=iNo/10;
    }
    return FALSE;
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter number ");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}