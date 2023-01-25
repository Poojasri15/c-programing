#include<stdio.h>
int main()
{
	int x=1,n,fact=1;
	printf("enter the number to find factorial:");
	scanf("%d,&n");
	while(x<=n)
	{
		fact=fact*x;
		x++;
	}
	printf("factorial of %d is:%d",n,fact);
	return 0;
}
