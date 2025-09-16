//Write a program which accept area in square feet and convert it into square meter.
//(1 square feet=0.0929 square Meter).

#include<stdio.h>
double SquareMeter(int iNo)
{
    double dAns=0.0;
    dAns=iNo*0.0929;
    return dAns;
}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter Area in square feet");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("The square meter is %lf",dRet);
    return 0;
}