//Accept the number from user if number is less than 10 then print "Hello" otherwise print "Demo".
#include<stdio.h>
void Display(int iValue)
{
    if(iValue<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iNo=0;

    printf("Enter number");
    scanf("%d",&iNo);

    Display(iNo);
}