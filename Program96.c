/*
1.Write a program which accept string from user and count number of
capital characters.

Input : “Marvellous Multi OS”

Output : 4
*/

#include<stdio.h>
int CountCapital(char *Str)
{
   int iCount=0;
   if(Str==NULL)
   {
      return 0;
   }
   while(*Str!=0)
   {
      if(*Str>='A' && *Str<='Z')
      {
         iCount++;
      }
      Str++;
   }
   return iCount;
}
int main()
{
   char Arr[20];
   int iRet=0;
   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);
   
   iRet=CountCapital(Arr);
   printf("Output Is:%d",iRet);
   printf("\n");
   return 0;
}
