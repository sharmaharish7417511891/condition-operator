#include<stdio.h>
#include<math.h>
int main()
{
	int a[3],i,sum=0;
	printf("enter any 3 value");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("show all value:");
	for(i=0;i<3;i++)
	{
		a[i]=a[i]*a[i];
		sum=sum+a[i];
		printf("%d",a[i]);
	}
	printf("Sum of All Elements:%d",sum);
	return 0;
}
