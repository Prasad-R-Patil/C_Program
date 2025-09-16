/*
1. Accept N numbers from user and return the largest number.
Input : N : 6
Elements :85 66 3 66 93 88 
 Output :93
*/

#include<stdio.h>
#include<stdlib.h>
int Maximum(int *Brr,int iSize)
{
   int iCnt=0;
   int Max=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       if(Brr[iCnt]>Max)
       {
          Max=Brr[iCnt];
       }
   }
   return Max;
}
int main()
{
   int iRet=0;
   int iSize=0;
   int iCnt=0;
   int *Ptr=NULL;
   
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);
   
   Ptr=(int *)malloc(iSize*sizeof(int));
   if(Ptr==NULL)
   {
      printf("Unable to allocate the memory\n");
      return -1;
   }
   printf("Enter %d elements\n",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&Ptr[iCnt]);
   }
   
   iRet=Maximum(Ptr,iSize);
   printf("The Largest number is :%d",iRet);
   printf("\n");
   free(Ptr);
   
   return 0;
}
