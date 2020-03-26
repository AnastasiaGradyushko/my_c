#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define M 3 /*סענמך*/
#define N 5 /*סעמכבצמג*/

int main()
{
  int a[M][N];
  int i, j, t;
  int min = INT_MAX, max = INT_MIN, imin, jmin, imax, jmax;

  for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
      a[i][j] = rand()%100;

 for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%5d", a[i][j]);
      printf("\n");

  }

   for(i = 0; i < M; i++){
    for(j = 0; j < N; j++){
        if (a[i][j] <= min){
        min = a[i][j];
        imin = i;
        jmin = j;
        }
        if (a[i][j] >= max){
            max = a[i][j];
            imax = i;
            jmax = j;
        }
    }
    t = a[imin][jmin];
    a[imin][jmin] = a[imax][jmax];
    a[imax][jmax] = t;
    min = INT_MAX;
    max = INT_MIN;
  }

printf("\n");
  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%5d", a[i][j]);
      printf("\n");

  }
  return 0;
}
