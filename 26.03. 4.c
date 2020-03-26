#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3 /*ñòðîê*/
#define N 4 /*ñòîëáöîâ*/

int main()
{
  int a[M][N];
  int i, j, k = 0;
  int min = INT_MAX, jmin;

    for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
      a[i][j] = rand()%100;

  for(j = 0; j < N; j++){
    for(i = 0; i < M; i++)
        if (a[i][j] >= 0){
        if (a[i][j] <= min){
            min = a[i][j];
            jmin = j;
            k++;
            }
        }

    if (k !=0)
        printf("minimal %d -go stolbtsa = %d\n", jmin, min);
    else printf("ops\n");
  }


  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%3d", a[i][j]);
      printf("\n");

  }
  return 0;
}
