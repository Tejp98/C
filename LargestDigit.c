#include<stdio.h>
int main()
{
	int a,b=0,max=0;
	printf("Enter the Number\n");
	scanf("%d",&a);
	while(a>0)
	{
		
		b=a%10;
		
		if(max<b)
			{max=b;}
		
		
		a/=10;

	}
	printf("Largest digit in the number is %d\n",max);
}