/*
4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6


Elements :8225 665 3 76 953 858

Output : 665 953 858
*/
#include<stdio.h>
#include<stdlib.h>
void Digits(int *Brr,int iSize)
{
  int iCnt=0;
  printf("Digits are :");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      if(Brr[iCnt]>=100 &&  Brr[iCnt]<=999)
      {
          printf("%d\t",Brr[iCnt]);
      }
  }

}
int main()
{ 
  int iCnt=0;
  int iSize=0;
  int *ptr=NULL;
  
  printf("Enter the number of elements\n");
  scanf("%d",&iSize);
  
  ptr=(int *)calloc(iSize,sizeof(int));
  
  if(ptr==NULL)
  {
     printf("Unable to allocate the memory\n");
     return -1;
  }
  
  printf("Enter the %d elements\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     scanf("%d",&ptr[iCnt]);
  }
  Digits(ptr,iSize);
  printf("\n");
  free(ptr);
 return 0;
}
