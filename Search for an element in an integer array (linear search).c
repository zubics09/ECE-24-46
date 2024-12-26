#include <stdio.h>
int main() 
{
    int arr[10], n, key, found = 0;
	printf("Enter size: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	int i;
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
     printf("Enter the key: ");
    scanf("%d", &key );
    for(i = 0; i < n; i++)
	 {
        if(arr[i] == key) 
		{
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found at index %d.\n", i);
    else
        printf("Element not found.\n");

    return 0;
}
