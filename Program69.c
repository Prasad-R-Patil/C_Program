/*
4. Accept N numbers from user and display all such elements which are
divisible by 3 and 5.
Input : N : 6

Elements :85 66 3 15 93 88

Output : 15

*/

#include<stdio.h>
#include<stdlib.h>
void Display(int *Brr,int iSize)
{
  int iCnt=0;
  
  printf("Elements are:");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      if((Brr[iCnt]%5)==0 && (Brr[iCnt]%3)==0)
      {
         printf("%d\t",Brr[iCnt]);
      }
  }
  printf("\n");
}
int main()
{
   int iCnt=0;
   int iSize=0;
   
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);
   
   int *Arr=(int *)malloc(iSize*sizeof(int));
   
   if(Arr==NULL)
   {
     printf("Unable to allocate the memory");
     return -1;
   }
   
   printf("Enter %d elements :\n",iSize);  
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
     scanf("%d",&Arr[iCnt]);
   }
   
   Display(Arr,iSize);
   
   free(Arr);
   return 0;
}
