//Secant Method

#include<stdio.h>
#include<math.h>
float fun (float x)
{
	return ((x*x*x)-(2*x)-5);
}
void main()
{
	float x,x1,x2,f,f1,f2,e;
	printf("Enter x1 and x2 ");
	scanf("%f %f",&x1,&x2);
	printf("\nEnter the error limit ");
	scanf("%f",&e);
	f1=fun(x1);
	f2=fun(x2);
	x=((x1*f2)-(x2*f1))/(f2-f1);
	f=fun(x);
	while (fabs(x2-x1)>e)
	{
		x1=x2;
		x2=x;
		f1=fun(x1);
		f2=fun(x2);
		x=((x1*f2)-(x2*f1))/(f2-f1);
		f=fun(x);
	}
	printf("\nThe root is %f",x);
}
