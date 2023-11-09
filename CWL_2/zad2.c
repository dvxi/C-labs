#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    time_t czas;   
    srand((unsigned int)time(&czas));

    int b = rand();
    int a = rand()%b;

    printf("a: %d, b: %d\n", a, b);

    for(int i = a; i <= b; i++){
        int pierwsza = 1;

        int j = 2;
        do
        {
            if(i % j == 0) pierwsza = 0;
            j++;
        } while (pierwsza && j < i);

        if(pierwsza && i != 0) printf("%d\n", i);
    }

    return 0;
}