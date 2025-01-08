#include <stdio.h>
#include "help.h"
#include <time.h>

int main(){
  int N;
  int rezultatas = 0;

  do{
    printf("Iveskite norimos sachmatu lentos dydi \n");
    scanf("%d", &N);

    if(N<3){
      printf("\nLentos dydis turi buti didesnis nei 2 \n");
    }

  }while(N<3);


  int lenta[N][N];
  int JudejimoX, JudejimoY;

  LentosGeneravimas(N, lenta);

  PradinisTaskas(&JudejimoX, &JudejimoY, N, lenta);

  int galimiJudesiai[8][2];

  printf("\nLenta su pradiniu tasku: \n");
  AtspausdintiLenta(N, lenta);

  int sk = GalimiZingsniai(JudejimoX, JudejimoY, N, lenta, galimiJudesiai);

  while(1){

    if(sk == 0) {
      break;
    }

    Judejimas(N, lenta, &JudejimoX, &JudejimoY, galimiJudesiai);
    AtspausdintiLenta(N, lenta);

    #ifdef _WIN32
      system("cls");
    #else
      system("clear");
    #endif


    printf("Dabartine Lenta: \n");
    AtspausdintiLenta(N, lenta);
    sk = GalimiZingsniai(JudejimoX, JudejimoY, N, lenta, galimiJudesiai);

    rezultatas++;
  }

  Pabaiga(rezultatas);
  printf("\nPaspauskite Enter, kad iseiti is programos");
  getchar();
  getchar();
  return 0;
}


