/*
2. Write a program which accept string from user and count number of
small characters.

Input : “Marvellous”

Output : 9
*/

#include<stdio.h>
int CountSmall(char *Str)
{
   int iCount=0;
   
   if(Str==NULL)
   {
       return 0;
   }
   while(*Str!='\0')
   {
      if(*Str>='a' && *Str<='z')
      {
         iCount++;
      }
      Str++;
   }
   return iCount;
}
int main()
{
   int iRet=0;
   char Arr[50];
   
   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);
   
   iRet=CountSmall(Arr);
   printf("Small Character is : %d",iRet);
   printf("\n");
   return 0;
}
