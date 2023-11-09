#include <stdio.h>

int fib(int lb, int deep){
    int wynik;
    static int step = 0;
    step++;

    if(lb == 1){
        printf("%d", deep);
        for(int i = 0; i < deep; i++){
            printf(".");
        }
        printf(", Zwracam f(1), l=%d\n", step);
        return 1;
    }
    if(lb == 0){
        printf("%d", deep);
        for(int i = 0; i < deep; i++){
            printf(".");
        }
        printf(", Zwracam f(0), l=%d\n", step);
        return 0;
    }

    printf("%d", deep);
    for(int i = 0; i < deep; i++){
        printf(".");
    }
    printf(", Obliczam f(%d)=f(%d)+f(%d), l=%d\n", lb, lb-1, lb-2, step);
    wynik = fib(lb-1, deep+1)+fib(lb-2, deep+1);

    return wynik;
}

int main(void){

    int number, wynik;

    printf("Podaj liczbe: ");
    scanf("%d", &number);
    printf("\n");

    wynik = fib(number, 0);

    printf("rFibonacci (%d) = %d\n", number, wynik);

    return 1;
}