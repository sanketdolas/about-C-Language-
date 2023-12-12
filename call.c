#include <stdio.h>

int main() {
    int num,sum=0,digit,numcopy;
    printf("Enter the number:");
    scanf("%d",&num);
    num=numcopy;
    while(numcopy!=0)
    {
       digit=numcopy%10;
       sum=sum+(digit*digit*digit);
       numcopy=numcopy/10;
        
    }
   if(sum==num)
   {
       printf("the given number is armstrong number");
      
   }
   else   
   {
   printf("the Given number is not armstrong number");
   }
   
    return 0;
}