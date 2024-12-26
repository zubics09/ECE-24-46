#include <stdio.h>
int main() 
{
    int n, term = 2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int i;
    for ( i = 1; i <= n; i++) 
	{
        printf("%d ", term);
        term *= term;
    }
    printf("\n");
    return 0;
}

