#include<stdio.h>
int main()
{
	int a,b,c,i;
	char d[10];
	printf("Enter the principal value:");
	scanf("%d",&a);
	printf("the person is senior citizen :");
	scanf("%s",d);
	printf("Enter the years:");
	scanf("%d",&b);
	c=b*12;
	
	if(strcmp("yes",d)==0)
		{
			
		i=(a*12/100)*c;
		printf("The simple intrest is %d",i);
		}
	else 
		{
		i=(a*10/100)*c;
		printf("The simple intrest is %d ",i);
}
	
	return 0;
}
