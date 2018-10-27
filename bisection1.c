//Bisection Method

#include<stdio.h>
#include<math.h>
float fun(float x)
{
	return ((x*x*x)-(2*x)-5);
}
void main()
{
	float x,x1,x2,e,f,f1,f2;
	printf("\nEnter x1 and x2 ");
	scanf("%f %f",&x1,&x2);
	printf("\nEnter error limit ");
	scanf("%f",&e);
	x=(x1+x2)/2;
	f=fun(x);
	f1=fun(x1);
	f2=fun(x2);
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
	printf("\nThe root is %f",x);
}
