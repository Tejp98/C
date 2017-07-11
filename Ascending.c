#include<stdio.h>
int main()
{
	int a[10];
	int b,i,j,z,y;
printf("Enter the number of elements you want in the array\n");
scanf("%d",&b);
printf("Enter the elements\n");
for(i=0;i<b;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<b;i++)
{
for(j=0;j<b-i-1;j++)
{
	if(a[j]>a[j+1])
	{
		z=a[j];
		a[j]=a[j+1];
		a[j+1]=z;
	}
}
}
for(j=0;j<b;j++)
{
printf("%d\n",a[j]);
}
}