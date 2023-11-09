#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    time_t czas;
    srand((unsigned int) time(&czas));

    int n;
    int tab[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    do
    {
        printf("Podaj liczbe > 10000: ");
        scanf("%d", &n);
        printf("\n");

    } while (n <= 10000);
    
    for(int i = 0; i < n; i++){
        float temp = (rand()/(1.0 + RAND_MAX))*20 - 10;

        int rounded = (int)(temp + 9.5);

        // printf("%f\n", temp);

        tab[rounded] += 1;
    }

    for(int i = 0; i < 20; i++){
        printf("przedzial (%f, %f] ilosc %d\n", (-10.0 + i), (-9.0 + i), tab[i]);
    }

    return 0;
}