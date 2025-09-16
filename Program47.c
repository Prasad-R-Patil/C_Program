/*2. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4
Output : A B C D
         a b c d
         A B C D
         a b c d
*/         

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='\0';
    char ch1='\0';
    
    for(i=1;i<=iRow;i++)
    {
       for(j=1,ch='A',ch1='a';j<=iCol;j++,ch++,ch1++)
       {
           if(i%2==0)
           {
              printf("%c\t",ch1);
           }
           else
           {
              printf("%c\t",ch);
           }
       }
       printf("\n");
    }
}
int main()
{
   int iValue1=0;
   int iValue2=0;
   
   printf("Enter the Number of Rows\n");
   scanf("%d",&iValue1);
   
   printf("Enter the Number of Columns\n");
   scanf("%d",&iValue2);
   
   Pattern(iValue1,iValue2);

}
