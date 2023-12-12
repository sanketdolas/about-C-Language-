#include <stdio.h>

int main() 
{
    int num,digit,flag =0,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    
    while(num!=0)
    {
       digit=num%10;
        if(digit%2==0)
        count++;
        else 
        flag++;
       num=num/10;
    }
   printf( "In the %d number\nthe even digit count is :%d \nand odd digit count is :%d",num,count,flag);
   
    return 0;
}