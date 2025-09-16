/*
 2. Accept N numbers from user and return the smallest number.
Input : N : 6

Elements :85 66 3 66 93 88

Output : 3
*/

#include<stdio.h>
#include<stdlib.h>
int Minimum(int *Brr,int iSize)
{
   int iCnt=0;
   int iMin=Brr[0];
   
   for(iCnt=0;iCnt<iMin;iCnt++)
   {
      if(Brr[iCnt]<iMin)
      {
          iMin=Brr[iCnt];
      }
   }
   return iMin;
}
int main()
{
  int iCnt=0;
  int iSize=0;
  int iRet=0;
  int *Arr=NULL;
  
  printf("Enter the number of elements\n");
  scanf("%d",&iSize);
  
  Arr=(int *)malloc(sizeof(int)*iSize);
  
  printf("Enter %d elemets\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
  
    scanf("%d",&Arr[iCnt]);
  }
  
  iRet=Minimum(Arr,iSize);
  
  printf("Minimun is : %d",iRet);
  printf("\n");
  free(Arr);
}
