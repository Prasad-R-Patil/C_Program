/*
1. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output : * * *
* * *
* * *
* * *
*/
#include<stdio.h>
void Pattern(int iRow,int iColumn)
{
    int iCnt1=0,iCnt2=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        for(iCnt2=1;iCnt2<=iColumn;iCnt2++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the Column\n");
    scanf("%d",&iValue2);


    Pattern(iValue1,iValue2);
    return 0;
}