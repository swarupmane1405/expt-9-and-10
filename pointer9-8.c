#include<stdio.h>
int main()
{
	int a[5],i,*p;
	p=&a[i];
	printf("enter any five value:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the value of array and its address is :\n");
	for(i=0;i<=4;i++)
	{
		printf("the value of a[%d] is %d and address id a[%d] is %u \n",&a[i],p,i);
		p++;
	}
	return 0;
}
