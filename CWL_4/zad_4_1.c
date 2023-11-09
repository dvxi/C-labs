#include <stdio.h>

int main(void){

    char tab[8];

    char tempTab[8];
    int correct = 0;

    do
    {
        correct = 1;

        printf("Podaj 8 znakowy napis skladajacy sie z 0 i 1: ");
        scanf("%s", tempTab);
        if(tempTab[7] == NULL){
            printf("Za krotkie");
            correct = 0;
        // } else if(tempTab[9] != NULL){
        //     printf("Za dlugie");
        //     correct = 0;
        } else {
            for(int i = 0; i < 8; i++){
                if(!(tempTab[i] == '0' || tempTab[i] == '1')){
                    correct = 0;
                    printf("%c na indeksie %d rozny od 0 lub 1", tempTab[i], i);
                }
            }
        }
        printf("\n");
    } while (correct == 0);
    
    printf("%s\n", tempTab);

    int liczbaCalkowita = 0;

    for(int i = 7; i > 0; i--){ //dodatnie czesci
        int mnoznik = 1;

        for(int j = 0; j < (7-i); j++){
            mnoznik = mnoznik * 2;
        }
        printf("mnoznik: %d lbc: %d liczba %d\n", mnoznik, liczbaCalkowita, (tempTab[i] - 48));
        liczbaCalkowita = liczbaCalkowita + (mnoznik * (tempTab[i] - 48));
        // printf("mnoznik dla lb %d: %d \n", i, mnoznik);
    }

    if(tempTab[0] == '1'){
        liczbaCalkowita = liczbaCalkowita - 128;
    }

    printf("%d \n", liczbaCalkowita);

    return 0;
}