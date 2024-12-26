#include <stdio.h>
int main() 
{
    int n;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i;
    for ( i = 1; i <= n; i++) 
	{
        sum += 1.0 / (2 * i);
    }
    printf("Sum of the series = %.2f\n", sum);
    return 0;
}
