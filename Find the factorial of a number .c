#include <stdio.h>
int main() 
{
    int n;
	long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++) 
	{
        factorial *= i;
    }
    printf("Factorial = %lld\n", factorial);
    return 0;
}
