#include <stdio.h>
int main()
{
     int mat[10][10],n, sum = 0;
	 printf("Enter the size of square matrix: ");
     scanf("%d", &n);
     printf("Enter elements of the matrix:\n");
     int i;
     for(i = 0; i < n; i++) 
	 {
	 	int j;
        for(j = 0; j < n; j++) 
		{
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++) 
	{int j;
        if (i == j ) 
		{
            sum += mat[i][i]; 
        }
    }
      printf("Sum of diagonal elements: %d\n", sum);
	   return 0;
}
