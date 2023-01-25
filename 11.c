#include<stdio.h>
int main(void)
{

int number,reminder,sum=0,i;
printf("enter the number/n");
scanf("%d",&number);
for(i=1;i<number;i++)
{
	reminder=number%i;
	if(reminder==0)
	{
		sum=sum+i;
	}
	if(sum==number)
	printf("%d is a perfect number",number);
	else
	printf("/n%d is not a perfect number",number);
}
}
