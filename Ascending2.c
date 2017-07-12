#include<stdio.h>
int main()
{
	int a[10];
	int b,i,z,y;
printf("Enter the number of elements you want in the array\n");
scanf("%d",&b);
printf("Enter the elements\n");
for(i=0;i<b;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<b-1;i++)
{

	if(a[i]>a[i+1])
	{
		z=a[i];
		a[i]=a[i+1];
		a[i+1]=z;
	}

}
for(i=0;i<b;i++)
{
printf("%d\n",a[i]);
}
}