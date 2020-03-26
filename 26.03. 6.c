#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3 /* Число строк матрицы */
#define N 4 /* Число столбцов матрицы */

int main()
{
  int a[M][N] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {1, 2, 3, 4}};
  int i, j, k;
  int count;

  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%5d", a[i][j]);
      printf("\n");
  }

   for(i = 0; i < (M - 1); i++)
    for(k=i+1; k<M; k++){
    count = 0;
    for(j = 0; j < N; j++)
    if(a[i][j] == a[k][j])
    count++;
    if(count == N) printf("est' ravnye stroki");
    }

  return 0;
}
