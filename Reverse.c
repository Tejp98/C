#include<stdio.h>
int main()
{
	  int a,z=0;
	printf("Enter the number\n ");
	scanf("%d",&a);
	while(a>0)
	{
		
		z=z*10+a%10;
		a/=10;
	}
printf("Reverse of the number is = %d\n",z);
}