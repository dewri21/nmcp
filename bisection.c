//Bisection Method

#include<stdio.h>
#include<math.h>
float fun(float x)
{
	return ((x*x*x)-(2*x)-5);
}
void main()
{
	printf("The given question is x^3 - 2x - 5");
	int flag=1;
	float x,x1,x2,e,f,f1,f2;
	do
	{
		printf("\nEnter x1 ");
		scanf("%f",&x1);
		printf("\nEnter x2 ");
		scanf("%f",&x2);
		printf("\nEnter error limit ");
		scanf("%f",&e);
		x=(x1+x2)/2;
		f=fun(x);
		f1=fun(x1);
		f2=fun(x2);
		if ((f1*f2)<0)
			flag=0;
		else
		{
			flag=1;
			printf("\nRe-enter values");
		}
	}while (flag);
	if (flag==0)
	{
		while (fabs(x2-x1)>e)
		{
			if ((f*f1)<0)
				x2=x;
			else
				x1=x;
			x=(x1+x2)/2;
			f=fun(x);
			f1=fun(x1);
			f2=fun(x2);
		}
	}
	printf("\nThe root is %f",x);
	printf("\nThe root upto 3 decimal places is %.3f",x);
}
