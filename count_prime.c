#include<stdio.h>
int prime(int i);
int main()
{
	int a,b,i,y=0;
	printf("Enter Range of no initial and final");
	scanf("%d%d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		y+=prime(i);
		
	}
	printf("No.of prime no. in range %d-%d :%d",a,b,y);
 	return 0;
}
int prime(int i)
{
	int temp=0,j,count=0;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
		count++;
		}
	}
		if(count==2)
		temp=1;
		else 
		temp=0;
	
	return temp;
}




