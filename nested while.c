#include<stdio.h>
int main()
{
	int i,j,k;
	
	k=1;
	i=1;
	while(i<=3)
	{
		j=1;
		while(j<=4)
		{
		printf("%d\t",k++);
		j++;
		}
	printf("\n");
	i++;
	}
	return 0;
}
