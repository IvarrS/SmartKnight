#include <stdio.h>

void Judejimas(int N, int lenta[N][N], int *dabartinisX, int *dabartinisY, int galimiJudejimai[][2]){
  int naujasX, naujasY;
  int teisingosJudejimoKoordinates = 0;
  do{
    printf("\nIveskite norimas galimo judejimo koordinates \n");
    printf("X:");
    scanf("%d", &naujasY);
    printf("Y:");
    scanf("%d", &naujasX);
    printf("\n");

    naujasY -= 1;
    naujasX -= 1;

    for(int i = 0; i < 8; i++) {
      if(galimiJudejimai[i][0] == naujasX && galimiJudejimai[i][1] == naujasY){
        teisingosJudejimoKoordinates = 1;
        break;
      }
    }

    if(!teisingosJudejimoKoordinates){
      printf("\nNeteisingos judejimo koordinates, prasau pasirinkite judejimo koordinates is galimu.\n");
    }

  }while(!teisingosJudejimoKoordinates);

  lenta[*dabartinisX][*dabartinisY] = 1;

  *dabartinisX = naujasX;
  *dabartinisY = naujasY;

  lenta[naujasX][naujasY] = 2;



}
