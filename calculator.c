#include<stdio.h>
int main()
{
	float a,b,sum,sub,mul,div;
       	int n;
	while (1)
	{
		printf("Enter any choice \n 1.ADD \n 2.SUB \n 3.MUL \n 4.DIV\n 5.EXIT\n");
		scanf("%d",&n);
		switch (n){
			case 1:
				printf("\n Enter any Two no.\n");
				scanf("%f%f",&a,&b);
				sum=a+b;
				printf("Sum of the no. is %f\n",sum);
			break;
			case 2:
				printf("\n Enter any two no.\n");
				scanf("%f%f",&a,&b);
				sub=a-b;
				printf("the subtract of the no. is %f\n",sub);
			break;
			case 3:
				  printf("\nEnter any two no.\n");
				  scanf("%f%f",&a,&b);      
				  mul=a*b;
				  printf("the Multiplication of the no. is %f\n",mul);
			break;
			case 4:
				 printf("\nEnter any two no.\n");
				 scanf("%f%f",&a,&b);
				 div=a/b;
				 printf("the Division of the no. is %f\n",div);
			break;
			case 5:
				return 0;
			break; 
			default:
			printf("\n INVALID CHOICE");
		}
	}
}

