#include <stdio.h>
int main() 
{
    int rows=4;
    int i;
    for ( i = 1; i <= rows; i++) 
	{
		int j;
        for ( j = 1; j <= i; j++)  
		{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

