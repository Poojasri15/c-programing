#include<stdio.h>
int main()
{
	int i;
	printf("Enter the age of person:");
	scanf("%d",&i);
	if(i>=18)
	{
		printf("Eligible To vote");
	}
	else
	{
	
	printf("Not eligble to vote");
	printf("\nThe years to left to vote is %d",18-i);
}
}
