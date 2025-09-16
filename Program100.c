#include<stdio.h>
void Reverse(char *Str)
{
   int iCnt=0;
   while(*Str!='\0')
   {
     iCnt++;
     Str++;
   }
   while(iCnt>=0)
   {
     printf("%c",*Str);
     iCnt--;
     Str--;
   }
   printf("\n");
}   
int main()
{
   char Arr[30];
   
   printf("Enter the String\n");
   scanf("%[^'\n']s",Arr);
   
   Reverse(Arr);
   return 0; 
 }  
   
 
