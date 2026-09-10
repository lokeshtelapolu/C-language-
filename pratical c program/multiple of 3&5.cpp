#include<stdio.h>
int main()
{
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	{
		printf("multiple of 3 & 5");	
	}
	else
	{
		printf("not a multiple of 3 & 5");
	}
	return 0;

}
