#include<stdio.h>
int main()
{
	int a,i,j;
	printf("Enter the number of rows you want\n");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{
		for(j=0;j<i+1;j++)
			printf("*");
		printf("\n");

	}
}