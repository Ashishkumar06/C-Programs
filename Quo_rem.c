#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter number");
scanf("%d",&a);
printf("Enter number");
scanf("%d",&b);
c=a/b;
d=a%b;
printf("Remainder-%d\n",c);
printf("Quotient-%d",d);
return 0;
}

