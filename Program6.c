//Accept number from user and print that numebr of * on screen.
#include<stdio.h>
void Display(int iNum)
{
     int iCnt=0;
     for(iCnt=1;iCnt<=iNum;iCnt++)
     {
         printf("*");
     }
}
int main()
{
    int iValue=0;

    printf("Enter the Number");
    scanf("%d",&iValue);

    Display(iValue);
}