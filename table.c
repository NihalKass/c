#include<stdio.h>
int n,i,t;
int main()
{
	printf("Enter the no. to counting in form of a table");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		t=n*i;
		printf("%d*%d=%d\n",i,n,t);
	}
	return 0;

}
