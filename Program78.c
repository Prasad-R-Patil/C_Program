/*
3. Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88

Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int *Brr,int iSize,int iNo)
{
   int iCnt=0;
   
   for(iCnt=iSize;iCnt>0;iCnt--)
   {
      if(Brr[iCnt]==iNo)
      {
         return iCnt;
      }
   }
   return -1;
}
int main()
{
  int iSize=0,iValue=0;
  int iRet=0;
  int iCnt=0;
  int *Ptr=NULL;
  
  printf("Enter the number of elements\n");;
  scanf("%d",&iSize);
  
  printf("Enter the Number\n");
  scanf("%d",&iValue);
  
  Ptr=(int *)malloc(iSize*sizeof(int));
  
  printf("Enter the %d elements\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     scanf("%d",&Ptr[iCnt]);
  }
  iRet=LastOcc(Ptr,iSize,iValue);
  
  if(iRet==-1)
  {
     printf("There is no such number");
  }
  else
  {
     printf("Last occurrence of number is %d",iRet);
  }
  printf("\n");
  free(Ptr);
  return 0;
}

