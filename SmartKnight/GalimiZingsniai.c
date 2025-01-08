#include <stdio.h>

int GalimiZingsniai(int randomX, int randomY, int N, int lenta[N][N], int galimiJudejimai[][2]){
  int x, y;
  int sk = 0;
  int i = 0;
  int Judejimai[8][2] = {
      {-2, 1},
      {-1, 2},
      {1, 2},
      {2, 1},
      {2, -1},
      {1, -2},
      {-1, -2},
      {-2, -1}
  };
  do{
    int naujasX = randomX + Judejimai[i][0];
    int naujasY = randomY + Judejimai[i][1];

    if(naujasX >= 0 && naujasY >= 0 && naujasY <= N-1 && naujasX <= N-1 && lenta[naujasX][naujasY] != 1){
      galimiJudejimai[sk][0] = naujasX;
      galimiJudejimai[sk][1] = naujasY;
      sk++;
    }
    i++;
  }while (i < 8);


  if(sk > 0 ){
    printf("\nGalimi judejimai: \n");
    for (int i = 0; i < sk; i++){
      printf("(%d, %d)\n", galimiJudejimai[i][1] + 1 , galimiJudejimai[i][0] + 1);
    }
  }

  return sk;
}
