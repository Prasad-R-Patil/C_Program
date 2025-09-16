/*
3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)
*/

#include<stdio.h>
int Difference(char *Str,char *Str1)
{
   int CntCap=0;
   int CntSmall=0;
   int Diff=0;
   
   while(*Str != '\0')
   {
       if(*Str>='A' && *Str<='Z')
       {
             CntCap++;
       }
       Str++;
   }
   while(*Str1 != '\0')
   {
       if(*Str1>='a' && *Str1<='z')
       {
             CntSmall++;
       }
       Str1++;
   }
   
   printf("Capital Letter is %d\n",CntCap);
   printf("Small letter is %d\n",CntSmall);
   return Diff=CntSmall-CntCap;
}
int main()
{
   char Arr[50];
   int iRet=0;
   
   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);
   
   iRet=Difference(Arr,Arr);
   printf("Difference is :%d",iRet);
   printf("\n");
}
