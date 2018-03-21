#include<stdio.h>
int main()
{
	int i,x=0,y,temp,sum=0;
	printf("Enter range of no.initial and final\n");
	scanf("%d %d",&x,&y);
		if(x%2==0)
		{
			printf("Even no. is:");
			for(i=x;i<=y;i=i+2)
			{
				printf("%d,",i);
				sum += i;
			}
			printf("Even sum : %d",sum);
		}
		else
		{
			printf("Odd no. is:");
			for(i=x;i<=y;i=i+2)
			{
				printf("%d,",i);
				sum += i;
			}
			printf("Odd sum : %d",sum);
		}

}

