#include<stdio.h>
int main()
{
	int num1,num2,r,i;
	printf("enter the minimum range:");
	scanf("%d",&num1);
	printf("\n enter the maximum range:");
	scanf("%d",&num2);
	printf("\n displaying even numbers between %d and %d",num1,num2);
	for(i=num1;i<num2;i++)
	{
		r=i%2;
		if(r==0)
		{
			printf("\n %d",i);
		}
	}
	printf("\n displaying odd numbers between %d and %d",num1,num2);
	for(i=num1;i<num2;i++)
	{
		r=i%2;
		if(r==1)
		{
			printf("\n %d",i);
		}
	}
	return 0;
}
