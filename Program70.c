/*
 Accept N numbers from user and display all such elements which are multiples of 11,
 
Input : N : 6

Elements :85 66 3 55 93 88

Output : 66 55 88

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int *Brr,int iSize)
{
   int iCnt=0;
   printf("Elements are:");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if((Brr[iCnt]%11)==0)
      {
         printf("%d\t",Brr[iCnt]);
      }
   }
   printf("\n");

}
int main()
{
  int iSize=0;
  int iCnt=0;
  int *Arr=NULL;
  
  printf("Enter number of elements :\n");
  scanf("%d",&iSize);
  
  Arr=(int *)malloc(iSize*sizeof(int));
  
  if(Arr==NULL)
  {
     printf("Unable to allocate the memory");
     return -1;
  }
  
  printf("Enter %d elements :\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     scanf("%d",&Arr[iCnt]);
  }
  
  Display(Arr,iSize);
   
  return 0;
  
}   


