#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){

    time_t czas;
    srand((unsigned int)time(&czas));

    char losuj_wyraz[20];
    char litera;

    if(argc == 1){
        printf("Nie podano litery!\n");
        return 0;
    } else {
        litera = *argv[1];
    }
    

    for(int i = 0; i < 20; i++){
        losuj_wyraz[i] = 97 + rand()%(122-97+1);
    }

    printf("wylosowany lancuch znakow: %s\n", losuj_wyraz);

    int dlugoscWyrazu = 20;

    for(int i = 0; i < 20; i++){
        if(losuj_wyraz[i] == litera){
            for(int j = i; j < dlugoscWyrazu - 1; j++){
                losuj_wyraz[j] = losuj_wyraz[j+1];
            }
            losuj_wyraz[dlugoscWyrazu - 1] = '\0';
        }
    }

    printf("lancuch znakow: %s\n", losuj_wyraz);

    return 1;
}