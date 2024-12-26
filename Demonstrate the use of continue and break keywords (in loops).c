#include <stdio.h>
int main() 
{
	int n;
    printf("enter a number to stop at (1-10):");
    scanf("%d", &n);
    int i;
    for ( i = 1; i <= 10; i++) 
	{
        if (i == n) 
		{
         printf(" breaking the loop at %d\n",i);  
		  break; 
        }
        if (i % 2 == 0)
        {
	      continue;
	    }
        printf("odd number: %d\n",i );
    
    }
    return 0;
}
    
