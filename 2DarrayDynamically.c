#include <stdio.h>
#include <stdlib.h> 
int main() {
   int row = 2, col = 3; //number of rows=2 and number of columns=3
   int *arr = (int *)malloc(row * col * sizeof(int)); 
   int i, j;
   for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
         *(arr + i*col + j) = i + j;    
   printf("The matrix elements are:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         scanf("%d ", *(arr + i*col + j)); 
      }
      printf("\n");
   }
   free(arr); 
   return 0;
}


