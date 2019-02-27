#include<stdio.h>
void main()
{
	int i,j,lim;
	printf("enter the limit");
	scanf("%d",&lim);
	for(i=1;i<=lim;i++)
	{
		for(j=lim;j>=i;j--)
			printf("*");
	printf("\n");
	}
}

