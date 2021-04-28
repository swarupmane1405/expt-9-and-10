#include<stdio.h>
void swap(int *p ,int *q);
int main()
{
	int a=10,b=5;
	swap(&a,&b);
	printf("p=%d\n",a);
	printf("q=%d\n",b);
	return 0;
}
void swap(int* p,int* q )
{
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}
