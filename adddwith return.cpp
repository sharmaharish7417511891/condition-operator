#include<stdio.h>
int add(int, int);
int main()
{
	int a,b,result;
	printf("enter two no:");
	scanf("%d %d",&a,&b);
	result=add(a,b);
	printf("%d",result);
	return 10;
}
 int add(int a,int b)
{
	
	
	return (a-b);
}
