#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter any value a:");
	scanf("%d",&a);
	printf("enter any value b:");
	scanf("%d",&b);
	printf("enter any value c:");
	scanf("%d",&c);
	printf("enter any value d:");
	scanf("%d",&d);
	
	
	
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d is greater",a);
			}
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is greater ",b);
			}
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			if(c>d)
			{
				printf("%d is greter",c);
			}
		}
	}
	if(d>a)
	{
		if(d>b)
		{
			if(d>c)
			{
				printf("%d is greter",d);
			}
		}
	}
	
	return 0;
}
