#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=i;j<=N;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
