#include <stdio.h>

int main(void) {

    // 65 -:- 90
    int literaInt = -1;
    char litera = 'A';

    int szerokoscChoinki = 0;

    do
    {
        printf("Podaj litere: ");
        scanf("%c", &litera);
        printf("\n");
        literaInt = litera;
    } while (literaInt < 65 || literaInt > 90);

    szerokoscChoinki = (literaInt - 65) * 2 + 1;

    for(int i = 1; i <= (literaInt - 65) + 1; i++){

        int iloscSpacji = (szerokoscChoinki - (2 * i - +1 ))/2;

        for(int j = 0; j < iloscSpacji; j++){
            printf(" ");
        }

        char startLitera = 64 + i;
        char tempLitera = startLitera;

        do
        {
            printf("%c", tempLitera);
            tempLitera -= 1;
        } while (tempLitera > 65);
        if(tempLitera >= 65){
            do
            {  
                printf("%c", tempLitera);
                tempLitera += 1;
            } while (tempLitera <= startLitera);
        }
        for(int k = 1; k < iloscSpacji; k++){
            printf(" ");
        }

        printf("\n");
        

    }

    return 0;
}