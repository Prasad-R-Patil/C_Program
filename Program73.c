/*
3. Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6

Elements :85 66 11 80 93 88

Output : 11 is present
Input : N : 6

Elements :85 66 3 80 93 88

Output : 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int *Brr,int iSize)
{
   int iCnt=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if(Brr[iCnt]==11)
      {
         return true;
      }
     
   }
   return false;
}
int main()
{
   int iSize=0;
   int iCnt=0;
   bool bRet=false;
  
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);
  
   int *Arr=(int *)malloc(iSize*sizeof(int));
   
   if(Arr==NULL)
   {
      printf("Unable to allocate the mamory\n");
      return -1;
   }
   
   printf("Enter the %d elemnets\n",iSize);
   
   for(iCnt-=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&Arr[iCnt]);
   }
   
   bRet=Check(Arr,iSize);
   
   if(bRet==true)
   {
      printf("11 is present\n");
   }
   else
   {
     printf("11 is Absent\n");
   }
   
   free(Arr);
}
