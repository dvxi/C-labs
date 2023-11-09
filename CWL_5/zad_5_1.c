#include <stdio.h>

float suma(float *first, int n){

    float sum = 0;

    for(int i = 0; i <= n; i++){
        sum += *(first+i);
    }

    return sum;
}

double iloczyn(float *first, float *last) {

    double wyn = 1;
    int ilosc = last - first;

    for(int i = 0; i <= ilosc; i++){
        wyn *= *(first + i);
    }
    return wyn;
}

int main(void){

    float tablica[100];

    for(int i = 0; i < 100; i++){
        tablica[i] = -3.0 + (i * 0.07);
        // printf("%f\n", tablica[i]);
    }

    printf("suma wszystkich elementow = %.2f, iloczyn wszystkich elementow %.9f\n", suma(tablica, 99), iloczyn(tablica, tablica+99));
    printf("----------------------------------------------------------\n");
    for(int i = 0; i < 91; i+= 10){
        printf("elementy od %d do %d suma = %.2f, iloczyn = %.9g\n", i, i+9, suma(tablica+i, 9), iloczyn(tablica+i, tablica+i+9));
    }

    return 0;
}