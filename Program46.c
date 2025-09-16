/*1. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
         A B C D
         A B C D
         A B C D
         
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
  int i=0;
  int j=0;
  char ch='\0';
  
  for(i=1,ch='A';i<=iRow;i++,ch++)
  {
      for(j=1;j<=iCol;j++)
      {
         printf("%c\t",ch);
      }
      printf("\n");
  }
}
int main()         
{
   int iValue1=0,iValue2=0;
   
   printf("Enter the Number of Rows\n");
   scanf("%d",&iValue1);
   
   printf("Enter the Number of Columns\n");
   scanf("%d",&iValue2);
   
   Pattern(iValue1,iValue2);
   
   return 0;
   
}
