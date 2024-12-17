#include <time.h>

void PradinisTaskas(int N, int lenta[N][N]){
  srand(time(0));
  int randomX = rand() % N;
  int randomY = rand() % N;

  lenta[randomX][randomY] = 1;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      printf("%d ", lenta[i][j]);
    }
    printf("\n");
  }
}
