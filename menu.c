#include<stdio.h>
int main()
{

	int n;
	float l,b,a,as,ar,ps,pr;
	printf("Enter the choice \n 1.Area of Square \n 2.Perimeter Of Square \n 3.Area of Rectangle \n4.Perimeter of Rectangle \n 5.EXIT\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Enter the side length of Square");
			scanf("%f",a);
			as=a*a;
			printf("Area of Square is %f",as);
		break;
		case 2:
	
			printf("Enter the side length of square");
			scanf("%f",a);
			ps=4*a;
			printf("Perimeter of square is %f ",ps);
		break;
		case 3:
			printf("Enter length and breadth of rectangle");
			scanf("%df%f",&l,&b);
			ar=l*b;
			printf("area of the rectangle is %f",ar);
		break;
		case 4:
			printf("Enter the length and breath of rectangle");
			scanf("%f%f",&l,&b);
			pr=2*(l+b);
			printf("perimeter of rectangle is %f",pr);
		break;
		case 5:
			return 0;
		break;
		default:
		printf("Enter choice is wrong");
	}

}



