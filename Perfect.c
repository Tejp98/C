#include<stdio.h>
int main()
{
	int a,b,sum=0,z=1;
	printf("Enter the Number\n");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		z=z*b;
		a/=10;

	}
	if(sum==z)
		printf("Number is perfect\n");
	else
		printf("Number is not Perfect\n");
}