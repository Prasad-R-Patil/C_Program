/*2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>
bool ChkCapital(char ch)
{
  if(ch>='A'&& ch<='Z')
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
   bool bRet=false;
   char ch='\0';
   
   printf("Enter the Character\n");
   scanf("%c",&ch);
   
   bRet=ChkCapital(ch);
   
   if(bRet==true)
   {
      printf("It is Capital");
   }
   else
   {
      printf("It is not Capital");
   }
   return 0;
}
