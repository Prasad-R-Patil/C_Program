/*
5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>
#include<stdbool.h>
void DisplayShedule(char cDiv)
{
   switch(cDiv)
   {
     case 'A':
             printf("Your Exam at 7 AM\n");
             break;
               
     case 'B':
               printf("Your Exam at 8.30\n");        
               break;
               
     case 'C':
               printf("Your Exam at 9.20\n");
               break;
               
     case 'D':
               printf("Your Exam at 10.30\n");    
               break;
               
     case 'a':
              printf("Your Exam at 7 AM\n");
              break;
               
     case 'b':
              printf("Your Exam at 8.30\n");        
              break;
               
     case 'c':
              printf("Your Exam at 9.20\n");
              break;
               
     case 'd':
              printf("Your Exam at 10.30\n");    
              break;
     default :
               printf("Wrong Standard");                            
   }
}
int main()
{
  char ch='\0';
  
  printf("Enter the Division\n");
  scanf("%c",&ch);
  
  DisplayShedule(ch);
  
  return 0;
}
