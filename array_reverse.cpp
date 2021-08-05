#include<stdio.h>
int main()
{
	char str[4];
	int i,j;
	printf("Enter String");
	scanf("%s",str);
	for (i=0;str[i]!='\0';i++);
	{
		for (j=i-1;j>=0;j--)
		{
			printf("%c, ",str[j]);
		}
    }  
	return 0;
}
