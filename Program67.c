/*
2.Accept N numbers from user and display all such elements which are divisible by 5.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 85 80
*/


#include<stdio.h>
#include<stdlib.h>
void Display(int *Brr,int iSize)
{
   int iCnt=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       if(Brr[iCnt]%5==0)
       {
           printf("%d\t",Brr[iCnt]);
       }
   }
   printf("\n");
}
int main()
{
   int iSize=0;
   int *Arr=NULL;
   int iCnt=0;
   
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);
   
   Arr=(int *)malloc(iSize*sizeof(int));
   
   if(Arr==NULL)
   {
     printf("Unable to allocate the memory\n");
     return -1;
   }
   printf("Enter the %d elements :",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&Arr[iCnt]);
   }
   
   Display(Arr,iSize);
  return 0;
}
