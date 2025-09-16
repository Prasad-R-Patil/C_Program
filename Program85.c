/*
5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6

Elements :8225 665 3 76 953 858

Output : 17 17 3 13 17 21
*/

#include<stdio.h>
#include<stdlib.h>
void DigitSum(int *Brr,int iSize)
{
  int iCnt=0;
  int iDigit=0;
  int iSum=0;
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     iSum=0;
     while(Brr[iCnt]!=0)
     {
        iDigit=Brr[iCnt]%10;
        iSum=iSum+iDigit;
        Brr[iCnt]=Brr[iCnt]/10;
     }
     printf("%d\t",iSum);
  }
}
int main()
{
 int iCnt=0;
 int iSize=0;
 int *Arr=NULL;
 
 printf("Enter the number of elements :\n");
 scanf("%d",&iSize);
 
 Arr=(int *)calloc(iSize,sizeof(int));
 
 if(Arr==NULL)
 {
   printf("Unable to allocate the mamory");
   return -1;
 }
 printf("Enter the %d elements \n",iSize);
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    scanf("%d",&Arr[iCnt]);
 }
 
 DigitSum(Arr,iSize);
 printf("\n");
 free(Arr);
 return 0;
}
