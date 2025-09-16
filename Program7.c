//Accept onr number from user and print that number of * on screen
#include<stdio.h>
void Display(int iNum)
{
    while(iNum>=1)
    {
        printf("*");
        iNum--;
        
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number");
    scanf("%d",&iValue);

    Display(iValue);

}