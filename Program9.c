//Accept two number from user and display frist number in second number of times.
//Input:12 5
//Output:12 12 12 12 12 
#include<stdio.h>
void Display(int iNo1,int iNo2)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        printf("%d\t",iNo1);
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the Frist and Second Number");
    scanf("%d %d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

}

