#include<stdio.h>
int factorial(int n);
int n,result,z;
int main()
{
	printf("Enter any no.");
	scanf("%d",&n);
	if (n<0)
	{
		printf("negetive no. don't exist factorial");
	}
	else
	{
		//result=factorial(n);
		printf("Factorial of the no. is:%d ",factorial(n));
	}
	return 0;
}

int factorial(int n)
{
	int z;
	//printf("\n%d",n);
	if (n==0)
	{
		return 1;
	}
	else
	{
		z=n*factorial(n-1);
	//	printf("%d",z);
		return z;
	}
}


