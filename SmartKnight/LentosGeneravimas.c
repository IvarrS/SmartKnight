#include <stdio.h>

void LentosGeneravimas(int N, int lenta[N][N]){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      lenta[i][j] = 0;
    }
  }
}
