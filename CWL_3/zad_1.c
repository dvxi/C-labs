#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    time_t czas;
    srand((unsigned int) time(&czas));

    int dlugoscLiczby;
    printf("Podaj dlugosc liczby: ");
    scanf("%d", &dlugoscLiczby);
    printf("\n");

    int lba[dlugoscLiczby];
    int lbb[dlugoscLiczby];

    printf("Dlugosc tablicy: %d\n", sizeof(lba)/sizeof(int));
    printf("  ");
    for(int i = 0; i < dlugoscLiczby; i++){
        lba[i] = rand()%(2);
        printf("%d", lba[i]);
    }
    printf("\n+ ");
    for(int
#include <stdlib.h>
#include <time.h> i = 0; i < dlugoscLiczby; i++){
        lbb[i] = rand()%(2);
        printf("%d", lbb[i]);
    }
    printf("\n  ");
    for(int i = 0; i < dlugoscLiczby; i++){
        printf("-");
    }
    printf("\n  ");

    int temp = 0;
    int lbc[dlugoscLiczby];
    for(int i = dlugoscLiczby - 1; i >= 0; i--){
        lbc[i] = (lba[i] + lbb[i] + temp)%2;

        // printf("lba: %d, lbb: %d, lbc: %d, temp: %d, modulo: %d\n", lba[i], lbb[i], lbc[i], temp, (lba[i] + lbb[i] + temp)%2);

        if(temp > 0 && lbc[i] == 1) temp -= 1;

        if((lba[i] + lbb[i]) > 1) temp += 1;

    }
    for(int i = 0; i < dlugoscLiczby; i++){
        printf("%d", lbc[i]);
    }
    printf("\n\n");

    return 0;
}