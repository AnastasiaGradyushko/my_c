#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5
#define N 6

int main()
{
  int a[M][N];
  int i, j;
  int min;

  for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
      {a[i][j] = rand()%100;
      }
 for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%5d", a[i][j]);
      printf("\n");
  }
      for(j = 0; j < N; j++){
         min = a[0][j];
        for(i = 0; i < M; i++)
        if (a[i][j]<min) min = a[i][j];
       printf("%5d", min);
      printf("\n");

  }
  return 0;
}
