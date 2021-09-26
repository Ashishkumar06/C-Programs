#include<stdio.h>
int main()
{
	int x=10,y=20;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("value of x-[%d]\nvalue of y-[%d] \n",x,y);
	return 0;
}
