#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("Enter the row::");
	scanf("%d",&row);
	printf("Enter the col::");
	scanf("%d",&col);
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=col;j++)
		{
			printf("%d",j);
		}
		for(j=1;j<i;j++)
		{
			printf("%d",i-j);
			
		}
		
		printf("\n");
	}
}
