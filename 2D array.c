#include <stdio.h>
int main() {
  int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    
  };
  printf("The matrix is:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n"); 
  }
  return 0;
}
