#include<stdio.h>
int main()
{
	int year;
	printf("enter a year:");
	scanf("%d",&year);
	if(year%400==0)
	
		printf("%d is a leap year",year);
	
	else if (year%100==0)
	printf("%d is not a leap year",year);
	
	else if(year%4==0)
	printf("%d is a leap year",year);
	
	else
	printf("the given year is not a leap year ");
	
	return 0;
	 
}
