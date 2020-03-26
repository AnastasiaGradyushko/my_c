#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define M 3 /*סענמך*/
#define N 4 /*סעמכבצמג*/

int main()
{
  int a[M][N] = {{2, 3, 3, 9}, {11, 22, 23, 14}, {21, 22, 23, 25}};
  int i, j, c, k = 0;

  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%3d", a[i][j]);
      printf("\n");

  }

  for(j = 0; j < N; j++){
   if (k == 0){
    for(i = 0; i < M; i++){
            if (a[i][j]%2 != 0){
                k++;
                c = j;
            }
    }
   }
   else break;
    if (k != M) k = 0;
  }
    if (k != 0){
        printf("perviy stolbets s nechetnymi - %d\n", c);
    }
    else printf("net takih stolbtsov\n");

  return 0;
}
