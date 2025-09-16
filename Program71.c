/*
1. Accept N numbers from user and return frequency of even numbers.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 3
*/
#include<stdlib.h>
#include<stdio.h>
int CountEven(int *Brr,int iSize)
{
   int iCnt=0;
   int Count=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       if((Brr[iCnt]%2)==0)
       {
           Count=Count+1;
       }
   }
   return Count;
   printf("\n");
}
int main()
{
   int *Arr=NULL;
   int iCnt=0;
   int iSize=0;
   int iRet=0;
   
   printf("Enter the number of elements");
   scanf("%d",&iSize);
   
   Arr=(int *)malloc(iSize*sizeof(int));
   
   if(Arr==NULL)
   {
      printf("unable to allocate the memory");
      return -1;
   }
   
   printf("Enter the %d elements:\n",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&Arr[iCnt]);
   }
   
   iRet=CountEven(Arr,iSize);
   
   printf("%d",iRet);
   
   free(Arr);
   
   return 0;
}
