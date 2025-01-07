#include <stdio.h>
#include "help.h"
#include <time.h>

int main(){
  int N;
  int rezultatas = 0;
  printf("Iveskite norimos sachmatu lentos dydi \n");
  scanf("%d", &N);

  int lenta[N][N];
  int randomX, randomY;
  int JudejimoX, JudejimoY;

  LentosGeneravimas(N, lenta);

  printf("\nLenta su pradiniu tasku: \n");
  PradinisTaskas(&randomX, &randomY, N, lenta);
  AtspausdintiLenta(N, lenta);

  int sk = GalimiZingsniai(randomX, randomY, N, lenta);

  while(1){

    if(sk == 0) {
      break;
    }

    Judejimas(N, lenta, &JudejimoX, &JudejimoY);
    system("cls");
    printf("Dabartine Lenta: \n");
    AtspausdintiLenta(N, lenta);
    sk = GalimiZingsniai(JudejimoX, JudejimoY, N, lenta);

    rezultatas++;
  }

  Pabaiga(rezultatas);
  return 0;
}


