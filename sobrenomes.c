#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char **nomes;
    int j = 0;
    int k = 0;
    int contador_letras = 1;
    int contador_palavras = 1;

   nomes = (char**)malloc(contador_palavras*sizeof(char*));
    for(int i = 0; i < contador_palavras; i++){
        nomes[i] = (char*)malloc(contador_letras*sizeof(char));
    }

    while(1){



    nomes = (char**)realloc(nomes,contador_palavras*sizeof(char*));
    for(int i = 0; i < contador_palavras; i++){
        nomes[i] = (char*)realloc(nomes,contador_letras*sizeof(char));
    }

    scanf("%c",&nomes[j][k]);
    contador_letras++;
    k++;
    if(nomes[j][k] == 36){break;}
    else if(nomes == '\n'){
        contador_palavras++;
        j++;
    }
    
    }







    return 0;
}