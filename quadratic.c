#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2;
	printf("Enter 2nd quadratic equation values of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{

		printf("Roots are complex\n ");
		root1=-b/2*a;
		root2=sqrt(-d)/(2*a);
		printf("Root1 :%.2f+i%.2f\n",root1,root2);
		printf("Root2:%.2f+i%.2f\n",root1,root2);
	}
	else if(d==0)
	{

		printf("Roots are equal\n ");
		root1=-b/2*a;
		printf("Root1 and Root2 are equal:%.3f",root1);
	}
	else
	{
		printf("Roots are real\n ");
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("Root1 and Root2 : %.3f %.3f",root1,root2);
	}

		return 0;
}




