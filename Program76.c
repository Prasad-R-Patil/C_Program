/*
1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Brr[],int iSize,int iNo)
{
   int iCnt=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if(Brr[iCnt]==iNo)
      {
         return true;
      }
   }
   return false;
}
int main()
{
  int iCnt=0; 
  int iSize=0;
  bool bRet=0;
  int iValue=0;
  int *Arr=NULL;
  
  printf("Enter the Number of element\n");
  scanf("%d",&iSize);
  
  printf("Enter the Value\n");
  scanf("%d",&iValue);
  
  Arr=(int *)malloc(iSize*sizeof(int));
  
  if(Arr==NULL)
  {
      printf("Unable to allocate the memory\n");
      return -1;
  }
  
  printf("Enter the %d elements\n",iSize);
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&Arr[iCnt]);
  }
  
  bRet=Check(Arr,iSize,iValue);
  
  if(bRet==true)
  {
      printf("TRUE");
  }
  else
  {
     printf("FALSE");
  }
  
   printf("\n");
  free(Arr);
}

