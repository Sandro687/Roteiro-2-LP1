#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void){

    char string[30];

    printf("Digite o string a ser recebido./n");
    getchar();
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1] = '\0';
}
    for (i = 0; i <= 30; i++){
        if (i == 0){
        break;
        }
        printf ("%s", string[i]);
    }
