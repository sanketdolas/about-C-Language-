#include<stdio.h>
int main()
{

int i=0,j=1;
while(i<3)
{
      while(j<=3)
      {
           printf("%d\n",i);
           i++;
      }
      printf("%d\n",i);
      i++;
}

return 0;

}