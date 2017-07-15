#include<stdio.h>
int main()
{ 
	int a,s,b,z=0;
	printf("Enter the Number\n");
	scanf("%d",&a);
   s=a;
	while(a>0)
	{
		b=a%10;
		z=z+(b*b*b);
		a/=10;
	}
	if(z==s)
		printf("Number is Armstrong\n");
	else
		printf("Number is not Armstrong\n");
}