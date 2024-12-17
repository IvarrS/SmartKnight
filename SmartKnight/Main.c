#include <stdio.h>
#include "help.h"
#include <time.h>

int main(){
  int N;
  printf("Iveskite norimos sachmatu lentos dydi \n");
  scanf("%d", &N);

  int lenta[N][N];

  printf("Pradine lenta: \n");
  LentosGeneravimas(N, lenta);



  printf("\nLenta su pradiniu tasku: \n");
  PradinisTaskas(N, lenta);




  return 0;
}


