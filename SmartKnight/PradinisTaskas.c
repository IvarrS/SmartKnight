#include <time.h>


void PradinisTaskas(int *randomX, int *randomY, int N, int lenta[N][N]){
  srand(time(0));
  *randomX = rand() % N;
  *randomY = rand() % N;

  lenta[*randomX][*randomY] = 1;
}

