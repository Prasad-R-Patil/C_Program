/*
4. Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88

Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88

Output :
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int *Brr,int iSize,int iStart,int iEnd)
{
   int iCnt=0;
   printf("Number is :");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if(Brr[iCnt]>iStart && Brr[iCnt]<iEnd)
      {
         printf("%d\t",Brr[iCnt]);
      }
   }
}
int main()
{
  int iSize=0,iValue1=0,iValue2=0,iCnt=0;
  int *Ptr=NULL;
  
  printf("Enter the Number of elements\n");
  scanf("%d",&iSize);
  
  printf("Enter the Starting point\n");
  scanf("%d",&iValue1);
  
  printf("Enter the Ending points\n");
  scanf("%d",&iValue2);
  
  Ptr=(int *)malloc(iSize*sizeof(int));
  
  if(Ptr==NULL)
  {
    printf("Unable to alloacte the memory\n");
    return -1;
  }
  
  printf("Enter the %d elements\n",iSize);
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&Ptr[iCnt]);
  }
  Range(Ptr,iSize,iValue1,iValue2);
  printf("\n");
  free(Ptr);
  
  return 0;
}
