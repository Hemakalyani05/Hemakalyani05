#include<stdio.h>

double power(double base, double exp)
{
	double result = 1.0;
	while(exp>0)
	{
		result *= base;
		exp--;
	}
	return result;

}

typedef double(*powerfunction)(double,double);

int main()
{
	double base, exp;
	printf("Enter the base : ");
	scanf("%lf", &base);
	printf("\nEnter exponent: ");
	scanf("%lf", &exp);
	powerfunction powerptr = power;
	double result = powerptr(base, exp);
	printf("\n%2lf^%2lf = %2lf\n", base,exp,result);
	return 0;
}
