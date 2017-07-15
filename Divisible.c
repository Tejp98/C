#include<stdio.h>
int main()
{
	int i;
	printf("The numbers divisible by 5 and 7 between 1 to 100 are\n");
	for(i=1;i<100;i++)
	{
		if(i%5==0 && i%7==0)
			printf("%d\n",i);
	}
}