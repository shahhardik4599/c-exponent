#include<stdio.h>

void main()
{
	int i,j,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++)
	{
		for(j=(n/2);j>=i;j--)
		{
			printf(" ");
		}
		printf("X");
		for(j=1;j<(i-1)*2;j++)
		{
			printf(" ");
		}
		if(i>1)
			printf("X");
		printf("\n");
	}
	for(i=(n/2);i>=1;i--)
	{
		for(j=(n/2);j>=i;j--)
		{
			printf(" ");
		}
		printf("X");
		for(j=2;j<=(i-1)*2;j++)
		{
			printf(" ");
		}
		if(i>1)
			printf("X");
		printf("\n");
	}
}

