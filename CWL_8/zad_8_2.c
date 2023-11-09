#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    int len = strlen(argv[1]);
    char commandString[len];
    strcpy(commandString, argv[1]);

    *strchr(commandString, ')') = '\0';
    *strchr(commandString, '(') = '\0';

    char* function = commandString;
    char* value = (commandString + strlen(commandString) + 1);

    double result = 0;
    double number = atof(value);

    if(strcmp("cos", function)){
        result = cos(number);
    } else if(strcmp("log", function)){
        result = log(number);
    } else if(strcmp("sin", function)){
        result = sin(number);
    }

    printf("Komenda: %s | %s | %f\n", commandString, value, result);
}