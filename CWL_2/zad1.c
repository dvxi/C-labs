#include <stdio.h>

int n = 0;
int blankIndex = 0;

int main(void) {

    printf("Podaj liczbe: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        
        for(int j = n; j >= 0; j--){
            printf("%d", j);
            if(j == blankIndex) printf(" ");
        }

        printf("\n");
        blankIndex += 1;
    }

    return 0;
}