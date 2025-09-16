//write a program which accept number from user and return Multiplication of all digit;
//Input:2395
//Output:270
#include<stdio.h>
int MultDigit(int);
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=MultDigit(iValue);
    printf("%d",iRet);
    return 0;
}
int MultDigit(int iNo)
{
    int iDigit=0;
    int Mult=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        printf("You entered zero value");
    }

    int iCnt=0;
    iCnt=1;
    while(iNo>0)
    {
        iDigit=iNo%10;
        Mult=Mult*iDigit;
        iNo=iNo/10;
    }
    return Mult;

}