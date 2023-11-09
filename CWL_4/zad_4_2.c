#include <stdio.h>

int main(void){

    int lbCal;
    long int input;

    do
    {
        printf("Podaj liczbe calkowita: ");
        scanf("%ld", &input);
        printf("\n");
    } while (input > 2147483647 || input < -2147483648);
    
    lbCal = input;
    // printf("%d\n", lbCal);

    char lb[4];
    lb[0] = '0';
    lb[1] = '1';
    lb[2] = '1';
    lb[3] = '\0';

    // printf("%s\n", lb);

    char liczba[33];
    for(int i = 0; i < 32; i++){
        
        int mnoznik = 1;
        mnoznik = mnoznik << (31 - i);
        liczba[i] = (((lbCal & mnoznik) == mnoznik) ? '1' : '0');

        // if((lbCal & mnoznik) == mnoznik){
        //     liczba[i] = '1';
        // } else {
        //     liczba[i] = '0';
        // }

        // printf("mnoznik %d, lbCal & mnoznik: %d, liczba[i]: %c\n", mnoznik, lbCal & mnoznik, liczba[i]);
    }
    liczba[32] = '\0';
    printf("liczba %d zapis binarny %s", lbCal, liczba);


    return 0;
}