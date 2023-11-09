#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    time_t czas;
    srand((unsigned int) time(&czas));

    int liczby[10];
    int maxIndex = 0;
    int maxIndexCount = 0;

    for(int i = 0; i < 10; i++){
        liczby[i] = (rand()%(201) - 100);

        if(liczby[i] > liczby[maxIndex]) 
        {
            maxIndex = i;
            maxIndexCount = 0;
        }
        if(liczby[i] == liczby[maxIndex]) maxIndexCount += 1;

        printf("element[%d] =%+3d\n", i, liczby[i]);
    }

    printf("\n\nMaksymalny element to %d, wystepuje %d razy\n", liczby[maxIndex], maxIndexCount);

    return 0;
}