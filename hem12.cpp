#include<stdio.h>
int main()
{
	double n1, n2, mul;
	printf("Enter two number :");
	scanf("%lf %lf", &n1, &n2, &mul);
	mul = n1 * n2;
	printf("multiple = %lf", mul);
	return 0;
}
