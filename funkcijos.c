#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENTOS_DYDIS 20 // reikes pakeisti su klaviaturos ivestim

// kodas rodo kurioje vietoje yra arklys poto duoda galimus ejimus ir uz kiekviena ejima duoda po taska (galima irasyti ejima mazaja ir didziaja raide)
void Judejimas(void){



    char judejimas[10]; // vartotojo ivestas judejimas

    int senas_x = 8, senas_y = 5; // kur randasi zirgas (pakeisti i random)
    int zirgo_ejimai[8][2] = {{1, 2}, {-1, 2}, {2, 1}, {2, -1},
                              {1,-2}, {-1,-2}, {-2,1}, {-2,-1}}; // visi galimi zirgo ejimai

    int naujas_x, naujas_y;
    int kitas_x, kitas_y;
    int taskai = 0;

    for(int i = 0; i < 10; i++){ //reikia pakeisti iki tol kol neliks ejimo vietu (dar nesuprogramuota)
    printf("Dabar esate: %c%d\n", 'A' + senas_x - 1, senas_y);
    printf("Galimi judejimai: ");


    for(int i = 0; i < 8; i++){
        naujas_x = senas_x + zirgo_ejimai[i][0];
        naujas_y = senas_y + zirgo_ejimai[i][1];
        if(naujas_x > 0 && naujas_y > 0 && naujas_x <= LENTOS_DYDIS && naujas_y <= LENTOS_DYDIS){
            printf("%c%d ", 'A' + naujas_x - 1, naujas_y);
        }

    }


    int a = 0;
    while(a != 1){

            printf("\nPasirinkite kur judeti: ");
            fgets(judejimas, sizeof(judejimas), stdin);


    if((judejimas[0] >= 'A' && judejimas[0] <= ('A' + LENTOS_DYDIS - 1)&& judejimas[1] >= '1' && judejimas[1] <= ('1' + LENTOS_DYDIS - 1))
    || (judejimas[0] >= 'a' && judejimas[0] <= ('a' + LENTOS_DYDIS - 1)&& judejimas[1] >= '1' && judejimas[1] <= ('1' + LENTOS_DYDIS - 1))){

         if (judejimas[0] >= 'a' && judejimas[0] <= ('a' + LENTOS_DYDIS - 1)) {
                    judejimas[0] = judejimas[0] - 32; // konvertuoja jeigu mazoji i didziaja
                }

        naujas_x = judejimas[0] - 'A' + 1;
        naujas_y = judejimas[1] - '0';







            for(int i = 0; i < 8; i++) {
                kitas_x = senas_x + zirgo_ejimai[i][0];
                kitas_y = senas_y + zirgo_ejimai[i][1];
                if(kitas_x == naujas_x && kitas_y == naujas_y) {
                    a = 1;
                    senas_x = naujas_x;
                    senas_y = naujas_y;
                    break;
                }
            }
            if(a != 1){
                printf("Neteisinga ivestis\n ");
            }
        }
        else  printf("Neteisinga ivestis\n ");

        }
    taskai++; // prideda taska
    printf("Taskai:%d\n", taskai);
    }
}


