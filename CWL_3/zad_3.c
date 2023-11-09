#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    time_t czas;
    srand((unsigned int) time(&czas));

    int n;
    printf("Podaj liczbe > 10000: ");
    scanf("%d", &n);
    printf("\n");
    
    float liczby[n];

    for(int i = 0; i < n; i++){
        liczby[i] = ((rand()/(1.0 + RAND_MAX))*200.0 - 100.0);

        printf("element[%d] =%+6.2f\n",i,liczby[i]);
    }

    float ostatni = liczby[n - 1];

    for (int j = n - 1; j > 0; j--)
    {
        liczby[j] = liczby[j-1];
    }

    liczby[0] = ostatni;

    printf("\nPo zamianie: \n\n");

    for(int i = 0; i < n; i++){
        printf("element[%d] =%+.2f\n",i,liczby[i]);
    }
    

    return 0;
}