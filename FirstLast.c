#include<stdio.h>
int main()
{
	int a,b,c,z=0,d=0;
	printf("Enter the Number\n");
	scanf("%d",&a);
	b=a%10;
	while(a!=0)
	{
		z=z*10+a%10;
		a/=10;

	}
	c=z%10;
	d=b+c;
	printf("Sum of the first and last digit of the number is %d\n",d);

}