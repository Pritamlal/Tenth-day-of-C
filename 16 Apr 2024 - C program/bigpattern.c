#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the N value::");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		for(j=N;j>i;j--)
		{
			printf("%d  ",j);
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("%d  ",i);
		}
		for(j=i+1;j<=N;j++)
		{
			printf("%d  ",j);
		}
		printf("\n");
	}
		for(i=1;i<N;i++)
		{
			for(j=N;j>i;j--)
			{
				printf("%d  ",j);
			}
			for(j=1;j<=(i*2-1);j++)
			{
				printf("%d  ",i+1);
			}
			for(j=i+1;j<=N;j++)
			{
				printf("%d  ",j);
			}
			printf("\n");
		}
	
}
