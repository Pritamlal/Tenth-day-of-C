#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the N value::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=i;j<=N;j++)
		{
			printf("%d",(N+1)-i);
		}
		printf("\n");
	}
}
