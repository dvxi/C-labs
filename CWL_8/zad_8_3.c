#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){

    time_t czas;
    srand((unsigned int) time(&czas));

    int len = atoi(argv[1]);

    char S_1[len];
    char S_2[3];

    for(int i = 0; i < len; i++){
        *(S_1 + i) = 97 + rand()%(122 - 97 + 1);
    }

    char letter = 97 + rand()%(122 - 97 + 1);

    for(int i = 0; i < 3; i++){
        *(S_2 + i) = letter;
    }

    printf("indeksy wystepowania to: ");

    for(int i = 0; i < len;){
        int newIndex = (strchr(S_1 + i, letter) - S_1);

        char piece[3];

        strncpy(piece, (S_1 + newIndex), 3);

        printf("%s\n", piece);

        // if(strcmp(piece, S_2) == 0){
        //     printf("%d ", newIndex);
        //     i += 3;
        // }

    }

    printf("\n%s\n", S_1);

    return 1;
}