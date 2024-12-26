#include <stdio.h>

int main() 
{
    char arr[] = {'T', 'h' ,'a' ,'n' ,'k' ,'y' ,'o' ,'u' };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Character array: ");
    int i;
    for ( i = 0; i < n; i++) 
	{
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}

