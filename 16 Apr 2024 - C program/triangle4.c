#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",(N+1)-i);
		}
		printf("\n");
	}
}
