#include<stdio.h>
#include<conio.h>
int main()
{
	char s1[50];
	int i,j,a;
	printf("Enter string");
	scanf("%s",&s1);
	printf("Enter Letter to be removed");
	a=getche();
	for (i=0;s1[i]!='\0';i++)
	{
		if (s1[i]==a)
		{
			for (j=0;s1[j]!='\0';j++)
			{
				s1[j]=s1[j+1];
			}
		}
		i++;
	}
	printf("%s",s1);
	return 0;
}
