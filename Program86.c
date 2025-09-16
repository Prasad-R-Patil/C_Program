/*
1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
       return true;
    }
    else
    {
       return false;
    }
}
int main()
{
  char ch='\0';
  bool bRet=false;
  
  printf("Enter the Character\n");
  scanf("%c",&ch);
  
  bRet=ChkAlpha(ch);
  
  if(bRet==true)
  {
    printf("It is Alphabet\n");
  }
  else
  {
    printf("It is Not Alphabet\n");  
  }  
  return 0;
}
