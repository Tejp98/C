#include<stdio.h>
int main()
{
	int a,b,z=0;
	printf("Enter the number:\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		z=z+b;
		a=a/10;
	}

printf("Sum of the each digit of the number is = %d\n",z);
}