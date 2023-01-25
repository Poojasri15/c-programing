#include<stdio.h>
int main(void)
{
	int num,reverse=0,temp,reminder;
	printf("enter the number:\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		reminder=num%10;
		reverse=reverse*10;
		num/=10;
}
 printf("given number=%d/n",temp);
 printf("the reverse number=%d/n",reverse);

