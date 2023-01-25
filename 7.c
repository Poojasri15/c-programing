#include<stdio.h>
int main()
{
	int num,sum=0,n,reminder;
	printf("enter the no.of values:");
	scanf("%d",&n);
	printf("enter %d digit number:",n);
	scanf("%d",&num);
	while(num>0);
	{
		reminder=num%10;
		sum=sum+reminder;
		num/=10;
	}
	printf("the ans is:%d",sum);
}
