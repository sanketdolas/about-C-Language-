#include<stdio.h>
int main()
{

int num, j=1, sum=0;
printf("enter the number\n");
scanf("%d", &num);

while(j<=num)
{
      if(j%2==0)
      { 
        sum=sum+j;
        printf("%d\n",j);
      }
      j++;

}
printf("sum of even number from 1 to %d is %d\n", num, sum);
return 0;



}