#include <stdio.h>
#include <math.h>
int main()
{
	double num=16.0, base= 2.0, exponent= 3.0;
	printf("sqare root of %.2f: %2f\n", num, sqrt(num));
	printf("%.2f raised to the power %.2f: %.2f\n", base, exponent, pow(base, exponent));
	return 0;
}
