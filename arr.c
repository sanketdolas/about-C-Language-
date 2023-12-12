#include <stdio.h>
int main()
{
   int a = 12;
   int b = 8;
   int c ;
   printf("The value of num1 is : %d ",a);
   printf("\nThe value of num2 is : %d ",b);
   c = a + b;
   printf("\n\n%d + %d \t= %d\n", a, b, c );
   c = a - b;
   printf("%d - %d \t= %d\n", a, b, c );
   c = a * b;
   printf("%d * %d \t= %d\n", a, b, c );
   float d = a / (float)b;
   printf("%d / %d \t= %f\n", a, b, d );
   c = a % b;
   printf("%d mod %d = %d\n", a, b, c );
   c = a + 1;
   printf("%d + 1 \t= %d\n", a, c );
   c = a - 1;
   printf("%d - 1 \t= %d\n", a, c );
   return 0;
}