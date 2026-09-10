#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("%c upper case\n",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c lower case\n",ch);
	}
	else{
		printf("not a letter",ch);
	}
	return 0;
}
