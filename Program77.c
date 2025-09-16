/*
2. Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 1

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : -1
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int FristOcc(int *Brr,int iSize,int iNo)
{
   int iCnt=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if(Brr[iCnt]==iNo)
      {
          return iCnt;
      }
   }

}
int main()
{
   int iRet=0;
   int iSize=0,iValue=0;
   int iCnt=0;
   
   int *Arr=NULL;
   
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);
   
   printf("Enter the value\n");
   scanf("%d",&iValue);
   
   Arr=(int *)malloc(iSize*sizeof(int));
   if(Arr==NULL)
   {
     printf("Unable to allocate the memory");
     return -1;
   }
   
   printf("enter the %d elements \n",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&Arr[iCnt]);
   }
   
   iRet=FristOcc(Arr,iSize,iValue);
   
   if(iRet==-1)
   {
      printf("There is no such number");
   }
   else
   {
      printf("First occurrence of number is %d",iRet);
   }
   printf("\n");
   
   free(Arr);
   
   return 0;
}
