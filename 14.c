include<stdio.h>
#include<math.h>
void Add(int x, int n);
void Sub(int x, int n);
void Mul(int x, int n);
void Div(int x, int n);
void Pow(int x, int n);


int main(void)
{
	int x, n, choice;
	printf("Enter the value of x, n");
	scanf("%d %d",&x, &n);
	printf("1. addition\n 2.subtratction\n 3.multiplication\n 4.division\n 5.power\n");
	printf("Enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			Add(x,n);
			break;
		case 2: 
			Sub(x,n);
			break;
		case 3:
			Mul(x,n);
			break;
		case 4:
			Div(x,n);
			break;
		case 5:
			Pow(x,n);
			break;
		default:
			printf("Enter the right choice");
			break;
	}
}
void Add(int x,int n)
	{
		int sum;
		sum= x+n;
		printf("Add(x,n)=%d",sum);
	}
void Sub(int x,int n)
	{
		int subtract;
		subtract= x-n;
		printf("sub(x,n)=%d",subtract);
	}
void Mul(int x, int n)
	{
		int mul;
		mul=x*n;
		printf("mul(x,n)=%d",mul);
	}
void Div(int x,int n)
	{
		int divide;
		divide=x/n;
		printf("div(x,n)=%d",divide);
	}
void Pow(int x,int n)
	{
	int power;
	power=pow(x,n);
	printf("Pow(x,n)=%d",power);
}
