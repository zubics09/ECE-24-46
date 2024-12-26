#include <stdio.h>
int fibonacci(int n) 
{
    if (n <= 1) 
	{
        return n;
    }
    else{
    	return fibonacci(n - 1) + fibonacci(n - 2);
	}
    
}

int main() 
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    int i;
	for ( i = 0; i < n; i++) 
	{
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
