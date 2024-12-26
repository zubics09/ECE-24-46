#include <stdio.h>
int main()
{
    int rows=5;
    int i;
    for ( i = rows; i >= 1; i--) 
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
