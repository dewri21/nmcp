#include<stdio.h>
#include<math.h>
float fun(float x)
{
	return ((x*x*x)-(9*x)+1);
}
void main()
{
	printf("The given question is x^3 + 9x + 1");
	int flag=1;
	float x,x1,x2,e,f,f1,f2;
	do
	{
		printf("Enter x1");
		scanf("%f",&x1);
		printf("Enter x2");
		scanf("%f",&x2);
		printf("Enter error limit");
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
			printf("Re-enter values");
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
	printf("The root is %f",x);
	printf("The root upto 3 decimal places is %.3f",x);
}
