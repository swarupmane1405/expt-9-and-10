//array pointer 
#include<stdio.h>
int main()
{
	int a[50],n,i;
	int *p;
	printf("enter a size of array:");
	scanf("%d",&n);
	printf("enter the element:");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<n-1;i++)
	{
	  printf("\n value of element is %d & address is %u",*p,p);
	  p++;
	}
	return 0;
}
