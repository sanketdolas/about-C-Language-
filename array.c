#include <stdio.h>

int main() 
{
    int num,digit,numcopy,revnum;
    printf("Enter the number:");
    scanf("%d",&num);
    num=numcopy;
    while(numcopy!=0)
    {
       digit=numcopy%10;
       revnum=(revnum*10)+digit;
       numcopy=numcopy/10;
        
    }
   if(revnum==num)
   {
       printf("the given number is perfect number");
      
   }
   else   
   {
   printf("the Given number is not perfect number");
   }
   
    return 0;
}