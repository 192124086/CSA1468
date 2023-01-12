#include<stdio.h>
int main()
{
	char n;
	printf("Enter an operator:");
	scanf("%c",&n);
	if(n=='*'||n=='/'||n=='+'||n=='-'||n=='%'||n=='<'||n=='>'||n=='^'||n=='!')
	{
		printf("Given operator is valid");
	}
	else
	{
		printf("Given operator is invalid");
	}
}
