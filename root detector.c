#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	double delta = b*b - 4*a*c;
	double x1, x2;
	
	printf("Enter a:");
	scanf("%lf",&a);
	printf("Enter b:");
	scanf("%lf",&b);
	printf("Enter c:");
	scanf("%lf",&c);
	
	delta = b*b - 4*a*c;

	if(delta<0)
	{
		printf("There is no real root.\n");
	}	
	else if(delta==0)
	{
		x1 = ((-b + sqrt(delta))/(2*a));
		printf("There is one root: %.2lf",x1);
	}
	else
	{
		x1 = ((-b + sqrt(delta))/(2*a));
	    x2 = ((-b - sqrt(delta))/(2*a));
		printf("There is two roots: %.2lf, %.2lf\n",x1,x2);
	}


return 0;
}
