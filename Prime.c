#include<stdio.h>
int main()
{
	int a,i,z=0;
	printf("Enter the Number\n");
	scanf("%d",&a);
	for(i=2;i<=(a/2);i++)
	{
		if(a%i==0)
			z=1;
	}
	if(z==1)
		printf("Number is not a prime number\n");
	else
		printf("Number is Prime\n ");
}