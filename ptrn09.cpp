#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1;i<=4;i++)
	{
		ch='A';
		for(j=1;j<=4;j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
