#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    time_t czas;
    srand((unsigned int)time(&czas));

    int wielkoscTablicy;
    printf("Podaj wielkosc tablicy: ");
    scanf("%d", &wielkoscTablicy);
    printf("\n");

    int tab[wielkoscTablicy];

    for(int i = 0; i < wielkoscTablicy; i++){
        tab[i] = rand()%(61);
    }

    for(int i = 0; i < wielkoscTablicy; i++){
            printf("element[%d] = %d\n", i, tab[i]);
        }
    printf("\n");

    for(int i = 0; i < wielkoscTablicy; i++){
        int jedn = tab[i] % 10;
        int dzies = (tab[i] - jedn) / 10;
        int parzyste = 0;

        if(((jedn & 1 == 1) && (dzies & 1 == 1)) || ((jedn & 1 == 0) && (dzies & 1 == 0))){
            parzyste = 1;
        }
        
        if(parzyste){
            int znalazl = 0;
            int koniec = 0;

            int j = wielkoscTablicy - 1;
            do
            {
                int jedn2 = tab[j] % 10;
                int dzies2 = (tab[j] - jedn) / 10;
                int parzyste2 = 0;

                if(((jedn2 & 1 == 1) && (dzies2 & 1 == 1)) || ((jedn2 & 1 == 0) && (dzies2 & 1 == 0))){
                    parzyste2 = 1;
                }

                if(parzyste2 == 0){
                    int temp = tab[j];
                    tab[j] = tab[i];
                    tab[i] = tab[j];

                    znalazl = 1;
                }

                j = j - 1;
            } while (znalazl == 0 && j > i);
        }
    }

    for(int i = 0; i < wielkoscTablicy; i++){
        printf("element[%d] = %d\n", i, tab[i]);
    }

    return 0;
}