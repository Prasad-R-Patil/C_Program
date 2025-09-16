/*
4. Accept N numbers from user and return frequency of 11 form it.
Input : N : 6

Elements :85 66 3 15 93 88

Output : 0
Input : N : 6

Elements :85 11 3 15 11 111

Output : 2
*/

#include<stdio.h>
#include<stdlib.h>
int Frequency(int *Brr,int iSize)
{
   int iCnt=0;
   int iCount=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if(Brr[iCnt]==11)
      {
         iCount=iCount+1;
      }
   }
   return iCount;
}
int main()
{
   int iRet=0;
   int iCnt=0;
   int iSize=0;
   int *Arr=NULL;
   
   printf("Enter the Number of elements:\n");
   scanf("%d",&iSize);
   
   Arr=(int *)malloc(iSize*sizeof(int));
   
   printf("Enter the %d elements\n",iSize);   
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&Arr[iCnt]);
   }
   
   iRet=Frequency(Arr,iSize);
   
   printf("%d",iRet);
   
   free(Arr);
}


