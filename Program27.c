//Write a program which accept radious of circle from user and calculate its area.
//Consider values of PI=3.14.(Area=PI*Radious*Radious).

//Input:5.3
//Output:88.2026
#include<stdio.h>
//#define PI 3.34;
double CircleArea(float fRadious)
{
    double PI=3.14;
    double Area=0.0;
    Area=(PI*fRadious*fRadious);
    return Area;
}
int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter radious\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);
    return 0;
}