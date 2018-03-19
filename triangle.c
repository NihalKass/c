#include<stdio.h>
int main()
{
	float a,base,height,area1,area2;
	printf("Enter the side length of an Equalteral triangle \n And \n base and height of a Right Angle Triangle\n");
	scanf("%f %f %f",&a,&base,&height);
	area1=1.73/4*a*a;
	area2=0.5*base*height;
	printf("Area of Equalateral tri is %f \n and \n Area of RAT is %f ",area1,area2);
        return 0;
}


