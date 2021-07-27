#include<stdio.h>
int main()
{
	char str[50];
	int i,j,k=0;
	printf("Enter string");
	scanf("%s",str);
	for (i=0;str[i]!='\0';i++);
	for (j=0,i--;j<i;j++,i--)
	{
		if (str[i]!=str[j])
		{
			k++;
		}
	}
	if (k==0)
	{
		printf("palingdrome");
	}
	else
	{
		printf("Not a palingdrome");
	}
	return 0;
}
