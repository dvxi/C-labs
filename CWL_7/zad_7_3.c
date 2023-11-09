#include <stdio.h>

int *razem(int *tab1, int *tab2){
    int *index1 = tab1;
    int *index2 = tab2;

    int tab3[sizeof(tab1) + sizeof(tab2)];

    int *index3 = tab3;

    while(*index1 || *index2){
        if(*index1 > *index2){
            *index3 = *index2;
            index2 += 1;
        } else {
            *index3 = *index1;
            index1 += 1;
        }
    }

    return tab3;
}

int main(void){

    int tab1[] = {1,12,13,14,22};
    int tab2[] = {3,4,13,45,54,55,56,66};

    int *index = razem(tab1, tab2);

    printf("Output: ");
    while(*index){
        printf("%d,", *index);
        index += 1;
    }
    printf("\n");

    return 1;
}