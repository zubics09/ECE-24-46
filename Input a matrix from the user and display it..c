#include <stdio.h>
int main() 
 {
      int mat[10][10],r,c;
      printf("Enter number of rows and columns: ");
     scanf("%d %d", &r, &c);
      printf("Enter elements of the matrix:\n");
     int i;
     for(i = 0; i < r; i++) 
     {
     	int j;
         for( j = 0; j < c; j++)
		 {
		 	scanf("%d", &mat[i][j]);
		  } 
      }
     printf("Matrix is:\n");
     for(i = 0; i < r; i++) 
   	 {
	 	 int j;
         for(j = 0; j < c; j++)
		 {
		    	printf("%d ", mat[i][j]);
		  } 
	     printf("\n");
      } 
      return 0;
     
 }

