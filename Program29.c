//Write a program which accept distance in kilometer and convert it into meter.
//(1 Kilometer=1000 Meter)


#include<stdio.h>
int KMtoMeter(int iNo)
{
    return iNo*1000;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("meter is %d",iRet);
}