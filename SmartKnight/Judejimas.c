#include <stdio.h>

void Judejimas(int N, int lenta[N][N], int *JudejimoX, int *JudejimoY){

  printf("\nIveskite norimas galimo judejimo koordinates \n");
  printf("X:");
  scanf("%d", JudejimoX);
  printf("Y:");
  scanf("%d", JudejimoY);
  printf("\n");

  lenta[*JudejimoX][*JudejimoY] = 1;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      printf("%d ", lenta[i][j]);
    }
    printf("\n");
  }
}
