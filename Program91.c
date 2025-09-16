/*
1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/

#include<stdio.h>
void DisplayASCII()
{
  int iCnt=0;
  printf("-------------------------------------------Symbol-----------------------------------------------------------\n");
  for(iCnt=0;iCnt<=177;iCnt++)
  {
      printf("%c\t%c\t%x\t%o",iCnt);
  }
  printf("\n");
  
}
int main()
{
  DisplayASCII();
  return 0;
}
