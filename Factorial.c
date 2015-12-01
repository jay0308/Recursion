// factorial using recursion
#include <stdio.h>

int factorial(int num)
{
	if(num==1)
	{
		return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}
int main(int argc, char *argv[])
{
	int n;
	printf("Enter the no. to find factorial: ");
	scanf("%d",&n);
	printf("Factorial= %d",factorial(n));
	return 0;
}
