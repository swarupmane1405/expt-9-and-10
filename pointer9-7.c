#include<stdio.h>
int main()
{
	int x=10,y=20;
	int *p,*q;
	p=&x;
	q=&y;
	printf("the address of x is %u \n",p);
	printf("the address of y is %u \n",p);
	printf("the value of x is %d",*p);
	printf("the value of x is %d",*q);
	return 0;
}
