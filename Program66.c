/*
1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 53 (234 - 181)
*/

#include<stdio.h>
#include<stdlib.h>
int Difference(int *Brr,int iSize)
{
   int iCnt=0;
   int iEvenSum=0;
   int iOddSum=0;
   int iDiff=0;   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if((Brr[iCnt]%2)==0)
      {
         iEvenSum=iEvenSum+Brr[iCnt];
      }
   }
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
     if((Brr[iCnt]%2)!=0)
     {
          iOddSum=iOddSum+Brr[iCnt];
     }
   }
   return iDiff=iEvenSum-iOddSum; 
}
int main()
{
  int *Arr=NULL;
  int iLength=0;
  int iCnt=0;
  int iRet=0;
  printf("Enter the number of elements :\n");
  scanf("%d",&iLength);
  
  Arr=(int *)malloc(iLength*sizeof(int));
  
  if(Arr==NULL)
  {
    printf("Unable to allocate Memory\n");
    return -1;
  }
  
  
  printf("Enter elements\n");
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     scanf("%d",&Arr[iCnt]);
  }
  iRet=Difference(Arr,iLength);
  printf("Addition is : %d",iRet);
  return 0;   
} 
