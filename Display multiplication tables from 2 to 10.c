#include <stdio.h>
int main() 
{
	int i;
    for ( i = 2; i <= 10; i++) 
	{
        printf("Table of %d:\n", i);
        int j;
        for ( j = 1; j <= 10; j++) 
		{
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
