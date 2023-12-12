#include<stdio.h>
int main()
{

    int i,n,sum=0;

    printf("inpute number of terms : ");
    scanf("%d", &n);

    printf("\nthe even numbers are :");

    i=1;
    while(i<=n)
    {
        printf("%d", 2*i-1);
        i--;
    }
    printf("\nThe sum off even natural numbers upto %d terms : %d\n,",n,sum);
    return 0;
    }
    
