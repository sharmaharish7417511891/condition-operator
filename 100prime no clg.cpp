	//			first 100 prime no
#include<stdio.h>
#include<math.h>
int main()
{  
int num,i,count=0;
	for(num=2;count<=100;num++)
	{
		int flag=0;
	for(i=2;i<=sqrt(num);i++)
{

	if(num%i==0)
	{
		flag=1;
		break;
	}
}
	if(flag==0)
	{
	printf("%d\n",num);
	count++;
}
	}
}	
