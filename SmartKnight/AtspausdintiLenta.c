#include <stdio.h>

void AtspausdintiLenta(int N, int lenta[N][N]) {
  printf("   ");
  for (int i = 0; i < N; i++) {
    printf("%2d ", i + 1);
  }
  printf("\n");

  for (int i = 0; i < N; i++) {
    printf("%2d ", i + 1);
    for (int j = 0; j < N; j++) {
      printf("%2d ", lenta[i][j]);
    }
    printf("\n");
  }
}

