#include<stdio.h>
int main()
{
	int i,n,m,p,q;
	printf("enter any no:");
	scanf("%d %d",&n,&p);
	
	i=1;
	do
	{
		m=n*i;
		q=p*i;
		printf("%d x %d=%d \t",n,i,m);
		printf("%d x %d=%d\n",p,i,q);
		i++;
	} while(i<=10);
}
