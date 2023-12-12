#include<stdio.h>
int main()
{

    int a,b,c;
    printf("enter the number");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c)
    {
        printf("a is greater than other two ");
    }
    else if(b>c && b>a)
    {
        printf("b is greater than other two");
    }
    else if(c>a && c>b)
    {
        printf("c is greater than other two");
    }
    else
    {
        printf("all numers are same");
    }

    return 0;
}