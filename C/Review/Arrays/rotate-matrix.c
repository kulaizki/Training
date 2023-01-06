#include <stdio.h>

#define N 3  // size of the matrix

void rotate(int mat[N][N]) {
  for (int i = 0; i < N / 2; i++) {
    for (int j = i; j < N - i - 1; j++) {
      int temp = mat[i][j];
      mat[i][j] = mat[N - 1 - j][i];
      mat[N - 1 - j][i] = mat[N - 1 - i][N - 1 - j];
      mat[N - 1 - i][N - 1 - j] = mat[j][N - 1 - i];
      mat[j][N - 1 - i] = temp;
    }
  }
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8 ,9}};
    printf("Before rotate:");
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
    }

    rotate(matrix);

    printf("\nAfter rotate:");
    for (int i = 0; i < 3; i++) {
        printf("\n"); 
        for (int j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
    } 
    return 0;
}
