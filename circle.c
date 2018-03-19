#include<stdio.h>
float area,circ,r;
int main()
{
	printf("Enter radius of circle");
	scanf("%f",&r);
	area=3.14*r*r;
	circ=2*3.14*r;
	printf("Area of the circle is %f and circumference is %f",area,circ); //output//
	return 0;
}
