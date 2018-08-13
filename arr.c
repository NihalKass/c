#include<stdio.h>
#include<stdlib.h>

void main(int argc , char *argv[])
{
	int i;
	int arr[argc];
	for(i=0;i<argc;i++)
		arr[i]=atoi(argv[i+1]);
	for(i=0;i<argc-1;i++)
	{
		printf("%d ",arr[i]);
	}

}

		

