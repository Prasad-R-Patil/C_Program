/*
4. Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char *Str)
{
   while(*Str!='\0')
   {
       if(*Str=='a'||*Str=='e'||*Str=='i'||*Str=='o'||*Str=='u')
       {
           return true; 
       }
       Str++;
   }
   return false;
}

int main()
{
   bool bRet=false;
   char Arr[30];
   
   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);
   
   bRet=ChkVowel(Arr);
   
   if(bRet==true)
   {
     printf("Contain Vowel\n");
   }
   else
   {
     printf("There is no Vowel\n");
   }
   return 0;
}
