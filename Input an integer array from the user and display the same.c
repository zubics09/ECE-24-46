#include <stdio.h>
int main() 
{
    int arr[10], n;
    printf("enter size: ");
    scanf ("%d", &n);
    printf("enter elements: ");
    int i;
    for ( i= 0; i<n; i++)
    scanf("%d",&arr[i]);
    printf("array: ");
    for ( i= 0; i<n; i++)
    printf("%d", arr[i]);
    return 0;
}
