#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
	int n,i,count=2;
	n=atoi(argv[1]);
	int arr[n];
	for(i=0;i<n;i++)
	{
	  	arr[i]=atoi(argv[count++]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}

			
