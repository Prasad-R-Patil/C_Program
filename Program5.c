//Accept number from user and print that number of * on sreen
#include<stdio.h>
void Display(int iNo)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("*");
    }
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}