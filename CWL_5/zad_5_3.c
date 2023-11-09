#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* fun_1(int n){

    int suma = 0, iloczyn = 1, srednia;

    int tab[n];
    time_t czas;
    srand((unsigned int)time(&czas));

    for(int i = 0; i < n; i++){
        tab[i] = rand()%16;
        suma += tab[i];
        iloczyn *= tab[i];

        printf("%d\n", tab[i]);
    }

    srednia = ((float)suma / n);

    tab[0] = suma;
    tab[1] = iloczyn;
    tab[2] = srednia;

    return tab;
}

int main(void){

    int *tablica = fun_1(5);

    printf("Suma: %d, iloczyn: %d, srednia: %d\n", *tablica, *(tablica+1), *(tablica+2));

    return 0;
}