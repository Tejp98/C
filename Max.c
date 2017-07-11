#include<stdio.h>
int main()
{
	int a[10];
	int b,i,z;
printf("Enter the number of elements you want in the array\n");
scanf("%d",&b);
printf("Enter the elements\n");
for(i=0;i<b;i++)
{
	scanf("%d",&a[i]);
}
z=a[0];
for(i=1;i<b;i++)
{
if(z<a[i])
	z=a[i];
}
printf("Maximum number in the array is %d\n",z);
}