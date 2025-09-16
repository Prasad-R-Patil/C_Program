/*
3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6

Elements :85 66 3 66 93 88

Output : 90 (93 -3)

*/

#include<stdio.h>
#include<stdlib.h>
int Difference(int *Arr,int iSize)
{
     int iCnt=0;
     int iMax=Arr[0];
     int iMin=Arr[0];
     
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
         if(Arr[iCnt]>iMax)
         {
             iMax=Arr[iCnt];
         }
         if(Arr[iCnt]<iMin)
         {
            iMin=Arr[iCnt];
         }
     }
     return iMax-iMin;
}
int main()
{
   int iCnt=0;
   int iSize;
   int iRet=0;
   int *Arr=NULL;
   
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);
   
   Arr=(int *)calloc(iSize,sizeof(int));
   
   printf("Enter the number of elements\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&Arr[iCnt]);
   }
   iRet=Difference(Arr,iSize);
   
   printf("Difference is :%d",iRet);
   printf("\n");
   free(Arr);
   return 0;
}
