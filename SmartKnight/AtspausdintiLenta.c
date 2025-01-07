#include <stdio.h>

void AtspausdintiLenta(int N, int lenta[N][N]){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      printf("%d ", lenta[i][j]);
    }
    printf("\n");
  }
}
