#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("Enter the no. of term for Fabbonaci series :");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
	return 0;
}

		
