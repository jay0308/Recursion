//fibannoci series
#include <stdio.h>

/* itteratively
void fibonaci(int n)
{	
	int a=0,b=1,c,i;
	for(i=0;i<n;i++)
	{
		if(i<=1)
			printf("%d, ",i);
		else
		{
			c=a+b;
			printf("%d, ",a+b);
			a=b;
			b=c;
		}
	}
}*/

//recursively
void fibonaci(int n,int i,int a,int b,int c)
{
	if(i<n)
	{
		if(i<=1)
		{
			printf("%d, ",i);
			i++;
			fibonaci(n,i,a,b,c);
		}
		else
		{
			c=a+b;
			printf("%d, ",c);
			a=b;b=c;i++;
			fibonaci(n,i,a,b,c);
		}
	}
}
int main(int argc, char *argv[])
{
	int n;
	printf("***FIBANNOCI SEREIS***\n");
	printf("Enter nth term: ");
	scanf("%d",&n);
	fibonaci(n,0,0,1,0);		//A
	return 0;
}
