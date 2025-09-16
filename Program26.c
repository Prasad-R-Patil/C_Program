#include<stdio.h>
double FhtoCs(int iNo)
{
     double dAns=0.0;

     dAns=((iNo-32)*(5.0/9.0));
     return dAns;
}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter the Tempreture in fahrenheit\n");
    scanf("%d",&iValue);

    dRet=FhtoCs(iValue);
    printf("Celsius is %lf",dRet);
    return 0;
}