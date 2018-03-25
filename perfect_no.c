#include<stdio.h>
int main()
{
	int n,i,num,total=0;
	printf("Enter any no. to check weather its perfct or not\n");
	scanf("%d",&n);
	num=n/2;
	for(i=1;i<=num;i++)
	{
		if(n%i==0)
		{
		total+=i;
		
		}
	}
	if(total==n)
	{
		printf("It is a Perfect Number\n");
	}
	else
	{
		printf("It is not a Perfect no.\n");
	}
	return 0;
}

