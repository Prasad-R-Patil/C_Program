/*3. Accept N numbers from user and display all such elements which are
even and divisible by 5.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 80
*/

#include<stdio.h>
void Display(int *Brr,int iSize)
{
  int iCnt=0;
  printf("Elements are ");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     if((Brr[iCnt]%5)==0 && (Brr[iCnt]%2)==0)
     {
        printf("%d\t",Brr[iCnt]);  
     }
  }
  printf("\n");

}
#include<stdlib.h>

int main()
{
  int iCnt=0;
  int iSize=0;
  int *Arr=NULL;
  
  printf("Enter the number of elements :\n");
  scanf("%d",&iSize);
  
  Arr=(int *)malloc(iSize*sizeof(int));
  
  if(Arr==NULL)
  {
    printf("Unable to allocate the memory");
    return -1;
  
  printf("Enter the %d elemnts",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     scanf("%d",&Arr[iCnt]);
  }
  
  Display(Arr,iSize);
  
  return 0;
  
}  
  
  
