#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int number_cmp(char *num_1, char *num_2){

    int len1 = strlen(num_1);
    int len2 = strlen(num_2);

    if(len1 > len2){
        return 1;
    } else if (len2 > len1){
        return -1;
    } else {

        char* digit1[1];
        char* digit2[1];

        for(int i = 0; i < len1; i++){
            
            strncpy(digit1, *(num_1 + i), 1);
            strncpy(digit2, *(num_2 + i), 1);

            int intdigit1 = atoi(digit1);
            int intdigit2 = atoi(digit2);

            if(intdigit1 > intdigit2){
                return 1;
            } else if(intdigit1 < intdigit2) {
                return -1; 
            }
        }

        return 0;
    }
}

int main(int argc, char* argv[]){
    if(argc != 3){
        printf("Nie podano 2 liczb!\n");
        return 0;
    }

    char* a = argv[1];
    char* b = argv[2];

    int result = number_cmp(a, b);
}