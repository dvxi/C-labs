#include <stdio.h>

int main(void){

    int lb1, lb2;
    int maska = 65535;

    printf("Podaj 1. liczbe: ");
    scanf("%d", &lb1);
    printf("\nPodaj 2. liczbe: ");
    scanf("%d", &lb2);

    if((lb1 & maska) == (lb2 & maska)){
        for(int i = 0; i < 32; i++){
            int mnoznik = 1;
            for(int j = 0; j < 31 - i; j++){
                mnoznik = mnoznik * 2;
            }

            if((maska & mnoznik) == mnoznik){
                printf("1");
            } else printf("0");
        }

        printf("\nprawda");
    } else printf("\nnieprawda");

    return 0;
}