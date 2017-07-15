#include<stdio.h>
int main()
{
	int a[10];
	int b,i,j,z=0;
printf("Enter the number of elements you want in the array\n");
scanf("%d",&b);
printf("Enter the elements\n");
for(i=0;i<b;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
	z=z+a[i];
}
z=z/b;
printf("The average of the array is=%d\n",z);
}