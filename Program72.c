/*
2. Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7

Elements :85 66 3 80 93 88 90

Output : 1 (4 -3)
*/

#include<stdio.h>
#include<stdlib.h>
int Frequency(int *Brr,int iSize)
{
   int iCnt=0;
   int EvenCnt=0;
   int OddCnt=0;
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if((Brr[iCnt]%2)==0)
      {
         EvenCnt=EvenCnt+1;
      }
      else
      {
         OddCnt=OddCnt+1;
      }
   }
   return EvenCnt-OddCnt;
}
int main()
{
   int iSize=0;
   int iCnt=0;
   int iRet=0;
   
   int *Arr=NULL;
   
    printf("Enter the number of elements");
   scanf("%d",&iSize);
   
   Arr=(int *)malloc(iSize*sizeof(int));
   
   if(Arr==NULL)
   {
      printf("Unable to allocate the memory");
      return -1;
   }
    
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&Arr[iCnt]);
   }
   
   iRet=Frequency(Arr,iSize);
   
   printf("%d",iRet);
   
   free(Arr);
   
   return 0;

}

