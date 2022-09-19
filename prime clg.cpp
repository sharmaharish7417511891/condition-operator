#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,i,flag;
	printf("enter any no:");
	scanf("%d",&num);
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("is not prime");
	}
	else
	{
		printf("is prime");
	}
}
    
