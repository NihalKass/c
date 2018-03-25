#include<stdio.h>
int main()
{
	int n,j,i,sub[10],avrg=0,sum=0,k;
	printf("Enter no. of students involved in result\n");
	scanf("%d",&n);
	printf("Enter the marks of 5-subject\n");
	printf("i.e:-- English,Networking,Software Eng.,Data analysis,oprating System\n");
		for(j=1;j<=n;j++)
		{
			printf(" Enter marks for %d student \n",j);
		
		for(i=1;i<=5;i++)
		{
			scanf("%d",&sub[i]);
		}
			if(i=5)
			{
				sum=0;
				for(k=1;k<=5;k++)
				sum+=sub[i];

			}
			avrg=sum/n;
			printf("Total sum and avrage marks for student %d is:%d and %d\n",i,sum,avrg);
		
		
		}
		return 0;
	
}


