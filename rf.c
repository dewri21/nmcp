//Regular-Falsi Method

#include<stdio.h>
#include<math.h>
float fun(float x)
{
	return ((x*x*x)-(2*x)-5);
}
void main()
{
	float x,x1,x2,f,f1,f2,e;
	int flag=1;
	do
	{
		printf("Enter x1 and x2 ");
		scanf("%f %f",&x1,&x2);
		printf("Enter error limit ");
		scanf("%f",&e);
		f1=fun(x1);
		f2=fun(x2);
		x=((x1*f2)-(x2*f1))/(f2-f1);
		f=fun(x);
		if ((f1*f2)<0)
			flag=0;
		else
		{
			flag=1;
			printf("\nRe-enter the values");
		}
	}while (flag);
	if (flag==0)
		while (fabs(f2-f1)>e)
		{
			if ((f*f1)<0)
				x2=x;
			else
				x1=x;
			f1=fun(x1);
			f2=fun(x2);
			x=((x1*f2)-(x2*f1))/(f2-f1);
			f=fun(x);
		}
		printf("\nThe root is %f ",x);
}
