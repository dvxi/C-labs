#include <stdio.h>                     //konieczne biblioteki
#include <string.h>                    

int main(int argc, char* argv[])    //komentarze dla wywołania z argumentami Jeden Dwa 
{      
    //deklaracja koniecznych zmiennych, miedzy innymi tablic nap_1 oraz nap_2

    if(argc == 1) return 0;

    char nap_1[strlen(argv[1])];
    char nap_2[strlen(argv[2])];

    int len_1 = strlen(argv[1]);
    int len_2 = strlen(argv[2]);

    printf("Dlg 1: %d, Dlg 2: %d\n", (int)strlen(argv[1]), (int)strlen(argv[2]));

    //zapisanie argumentów wywołania programu do tablic nap_1 oraz nap_2
    if(argc == 3) {
        // nap_1 = argv[1];
        for(int i = 0; i < len_1; i++){
            *(nap_1 + i) = *(argv[1] + i);
        }
        // nap_2 = argv[2];
        for(int i = 0; i < len_2; i++){
            *(nap_2 + i) = *(argv[2] + i);
        }
    }

    printf ("A -->  napis_1 = %s napis_2 = %s\n", nap_1, nap_2);   //zostanie wypisane: A --> napis_1 = Jeden napis_2 = Dwa 
  
    //wymiana zawartosci tablic nap_1 i nap_2
    // char nap_temp[] = nap_2;
    // nap_2 = nap_1;
    // nap_1 = nap_temp;
    char nap_3[len_2];

    for(int i = 0; i < len_2; i++){
        *(nap_3 + i) = *(nap_2 + i);
        *(nap_3 + i + 1) = '\0';
    }

    for(int i = 0; i < len_1; i++){
        *(nap_2 + i) = *(nap_1 + i);
        *(nap_2 + i + 1) = '\0';
    }

    for(int i = 0; i < len_2; i++){
        *(nap_1 + i) = *(nap_3 + i);    
        *(nap_1 + i + 1) = '\0';
    }

    printf ("B -->  napis_1 = %s napis_2 =  %s\n", nap_1, nap_2);    //zostanie wypisane: B --> napis_1 = Dwa napis_2 = Jeden 
    return 0;
}