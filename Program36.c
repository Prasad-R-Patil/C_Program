 //Accept number from user and display below pattern.
 //Input : 5
 //Output :A B C D E
 
 #include<stdio.h>
 void Pattern(int iNo)
 {
     int iCnt=0;
     char ch='A';
     for(iCnt='A';iCnt<=iNo;iCnt++)
     {
         printf("%c\t",iCnt);
         ch++;
     }
    
}
 int main()
 {
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
   return 0;
 }  
