#include<stdio.h>
int main()
{
	int i,j,N;
	printf("enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
