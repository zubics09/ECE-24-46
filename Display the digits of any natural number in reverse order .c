#include <stdio.h>
int main() 
{
    int n, reverse = 0, digit;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    printf("Reversed digits: ");
    while (n > 0) 
	{
        digit = n % 10;
        printf("%d ", digit);
        n /= 10;
    }
    printf ("\n");
    return 0;
}
