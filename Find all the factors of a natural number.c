#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors: ");
    int i;   
    for ( i = 1; i <= n; i++) 
	{
        if (n % i == 0) 
		{
            printf("%d ", i);
        }
    }
    return 0; 
}
