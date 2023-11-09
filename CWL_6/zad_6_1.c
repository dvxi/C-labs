#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int where(float *first, float *last){
    int maxNegIndex = -1;
    int count = last - first;

    for(int i = 0; i < count; i++){
        if(*(first + i) < 0){
            if(maxNegIndex == -1 || (*(first + i) > *(first + maxNegIndex))) {
                maxNegIndex = i;
            }
        }
    }

    if(maxNegIndex == -1) {
        printf("Brak liczby ujemnej!\n");
    } else {
        return(maxNegIndex);
    }
}

int main(void){

    time_t czas;
    int wielkoscTablicy;
    srand((unsigned int)time(&czas));

    printf("Podaj wielkosc tablicy: ");
    scanf("%d", &wielkoscTablicy);
    printf("\n");

    float tab[wielkoscTablicy];

    for (int i = 0; i < wielkoscTablicy; i++)
    {
        *(tab + i) = rand()/(1.0 + RAND_MAX)*20.0 - 10.0;

        printf("tab[%d] = %f, adres elementu: %p\n", i, *(tab+i), (tab+i));
    }

    int indexMaxNeg = where(tab, (tab+wielkoscTablicy));

    printf("\nNajwiekszy element ujemny: \n");
    printf("tab[%d] = %f, adres elementu: %p\n", indexMaxNeg, *(tab+indexMaxNeg), tab+indexMaxNeg);

    return 1;
}