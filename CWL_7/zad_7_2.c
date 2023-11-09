#include <stdio.h>
#define SIZE 10

int readLast(int *tab, int *length){
    // int *index = tab + SIZE - 1;

    // while (!(*index)){
    //     index -= 1;

    //     if(index < tab){
    //         printf("Stos pusty!\n");
    //         break;
    //     }
    // }

    if(*length == 0) {
        printf("Stos pusty!\n");
        return 0;
    }

    return *(tab + *length - 1);
}

int addElem(int *tab, int number, int *length){
    // int *index = tab + SIZE - 1;

    // if(*index){
    //     printf("Stos pelny!\n");
    //     return 0;
    // } else {
    //     while(!(*(index - 1))){
    //         index -= 1;

    //         if((index - 1) < tab){
    //             break;
    //         }
    //     }

    //     *index = number;
    //     return 1;
    // }

    if(*length == SIZE) {
        printf("Stos pelny!\n");
        return 0;
    } else {
        *(tab + *length) = number;
        *length += 1;
    }
}

int *removeLast(int *tab, int *length){
    // int *index = tab + SIZE - 1;

    // while (!(*index)){
    //     index -= 1;

    //     if(index < tab){
    //         printf("Stos pusty!\n");
    //         break;
    //     }
    // }

    if(*length == 0) {
        printf("Stos pusty!\n");
        return 0;
    } else {
        *length -= 1;
        return (tab + *length);
    }
}

int main(void){

    int tablica[SIZE] = {1, 2, 3};
    int tab_len;

    int *index = tablica + SIZE - 1;

    //dlugosc tablicy

    while (!(*index)){
        index -= 1;
        if(index < tablica){
            break;
        }
    }
    tab_len = index - tablica;

    printf("Ostatnia liczba: %d\n", readLast(tablica, &tab_len));
    addElem(tablica, 5, &tab_len);
    printf("Ostatnia liczba: %d\n", readLast(tablica, &tab_len));
    int *wskaznik = removeLast(tablica, &tab_len);

    return 1;
}