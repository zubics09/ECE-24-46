#include <stdio.h>
int main() 
{
    int arr[10], n, sum = 0;
	printf("Enter size: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	int i;
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) 
	{
        sum += arr[i];
    }
	printf("Sum of the elements: %d\n", sum);
    return 0;
}
