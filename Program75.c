/*
5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.

Input : N : 6
Piyush Khairnar - 7588945488 आम्ही Technical संस्कार करतो !!! ©Marvellous Infosystems Page 5

Marvellous Logic Building Assignment : 17

NO: 66
Elements :85 66 3 66 93 88

Output : 2
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : 0
*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int *Brr,int iSize,int iNo)
{
   int iCnt=0;
   int iCount=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       if(Brr[iCnt]==iNo)
       {
           iCount++;
       }
   }
   return iCount;
}
int main()
{
  int iSize=0;
  int iRet=0;
  int iValue=0;
  int iCnt=0;
  
  int *Arr=0;
  
  printf("Enter the number of element :\n");
  scanf("%d",&iSize);
  
  printf("Enter the value\n");
  scanf("%d",&iValue);
  
  Arr=(int *)malloc(iSize*sizeof(int));
  
  printf("Enter the %d elements\n",iSize);
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     scanf("%d",&Arr[iCnt]);
  }
  
  iRet=Frequency(Arr,iSize,iValue);
  
  printf("%d",iRet);
  
  free(Arr);
  
  return 0; 
}
