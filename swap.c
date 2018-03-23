#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,n,c=0;
	while(1)
	{
	printf("\nEnter the choice \n 1.Swap using 3rd variable \n 2.Swap the no. without using 3rd variable\n 3.EXIT\n");
	scanf("%d",&n);
	switch (n)
	{	
		case 1:
	     
		printf("Enter any two no.\n");
		scanf("%d%d",&a,&b);
		c=a;
		a=b;
		b=c;
		printf("\nnumber After swapped a=%d and b=%d",a,b);
		break;
	     
		case 2:
	     
		     printf("Enter any two no.\n");
		     scanf("%d%d",&a,&b);
		     a=a+b;
		     b=a-b;
		     a=a-b;
		     printf("\nnumber after swapped a=%d and b=%d",a,b);
	        break;
	     case 3:
	     		exit(1);
	 
	     break;
	}
	}
	
	     return 0;
}






