#include <stdio.h>

int main(void){

    double suma = 0;
    int iloscElementow = 0;

    do
    {
        suma += 1.00/(iloscElementow + 1);
        iloscElementow += 1;
    } while (suma < 10.0);
    
    printf("Suma %d elementow = %.10f", iloscElementow, suma);

    return 0;
}