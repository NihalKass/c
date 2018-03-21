#include<stdio.h>
int main()
{
	int n,a,b,temp,sum =0;
	printf("Enter any no.");
	scanf("%d",&n);
	
	a = n%10;
	b = n/10;
	
	while(a!=0){
		printf("%d",a);
		sum += a;
		temp = b;
		a = temp%10;
		b = temp/10;
		
	}
	printf("\nSum is :%d",sum);
}


