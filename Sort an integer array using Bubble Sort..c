#include <stdio.h>
void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++) 
	{
        for(j = 0; j < n - 1 - i; j++) 
		{
            if(arr[j] > arr[j+1]) 
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() 
{
    int arr[5], i;
printf("Enter 5 integers: ");
    for(i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, 5);
    printf("Sorted array: ");
    for(i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
