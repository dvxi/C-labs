#include <stdio.h>
  
int main ()
{  
    unsigned wynik = 0, liczba = 18;
    int p, n;
    unsigned lbPocz = 1;

    printf("Podaj liczbe: \n");
    scanf("%d", &liczba);
    printf("Podaj liczbe pierwszego bitu (od najmlodszego): \n");
    scanf("%d", &p);
    printf("Podaj liczbe bitow do sprawdzenia: \n");
    scanf("%d", &n);

    for(int i = 0; i < p; i++){ // maska dla p-tego bitu
        lbPocz >> 2;
    }
    
    for(int i = 0; i < n; i++){ // wykonujemy sprawdzenie AND na n kolejnych maskach
        if((lbPocz & liczba) == lbPocz){
            wynik += 1;
        }
        lbPocz >> 2;
    }

    printf("Ilosc jedynek w podanym zakresie: %d\n", wynik);
    return 0;
}