#include <stdio.h>
#include <math.h>
float f(float x)
{
	return (1/(1+x*x));
}
int main()
{
	float x0, xn, sumex=0, sum=0, h, res;
	int i,n;
	printf("Enter the limits of the integral\n");
	scanf("%f%f",&x0,&xn);
	printf("Enter the number of intervals\n");
	scanf("%d",&n);
	h=(xn-x0)/n;
	sumex=f(x0)+f(xn);
	for (i=0;i<=n;i++)
		sum=sum+f(x0+i*h);
	res=(h/2)*(sumex+2*sum);
	printf("\nThe required integral is = %f",res);
}

