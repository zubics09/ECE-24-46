#include <stdio.h>
int main() 
{
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int i;
    for ( i = 1; i <= n; i++) 
	{
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
