/*
5. Accept N numbers from user and return product of all odd elements.
Input : N : 6

Elements :15 66 3 70 10 88

Output : 45
Input : N : 6

Elements :44 66 72 70 10 88

Output : 0
*/

#include<stdio.h>
#include<stdlib.h>
int Product(int *Brr,int iSize)
{
   int iCnt=0;
   int Product=1;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       if((Brr[iCnt]%2)!=0)
       {
          Product=Product*Brr[iCnt];
       }
   }
   return Product;
}
int main()
{
   int iCnt=0;
   int iSize=0;
   int iRet=0;
   int *Ptr=NULL;
   
   printf("Enter the Number of elements\n");
   scanf("%d",&iSize);
   
   Ptr=(int *)malloc(iSize*sizeof(int));
   if(Ptr==NULL)
   {
     printf("Unable to allocate the memory");
     return -1;
   }
   
   printf("Enter the %d elements \n",iSize);
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&Ptr[iCnt]);
   }
   
   iRet=Product(Ptr,iSize);
   
   printf("Product is %d:",iRet);
   return 0;
}
