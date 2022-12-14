#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
  int result;
  clrscr();
  result=sum();
  printf("sum=%d",result);
  getch();
}

   int sum()
   {
   int a,b,c;
   printf("enter two number");
   scanf("%d %d",a,b);
   c=a+b;
   return c;
}