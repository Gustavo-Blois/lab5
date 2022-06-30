#include <stdio.h>
#include <stdlib.h>
int main(){
    int **matriz;
    int **transposta;
    int linhas;
    int colunas;
    int *mult;
    int soma;
    scanf("%d %d",&linhas,&colunas);

    matriz = (int**) malloc(linhas*(sizeof(int*)));
    for(int i = 0; i < linhas;i++){
        matriz[i] = (int*)malloc(colunas*(sizeof(int)));
    }
    transposta = (int **)malloc(colunas*(sizeof(int*)));
    for(int i =0; i < colunas;i++){
        transposta[i] = malloc(linhas*(sizeof(int*)));
    }

    for(int i = 0; i < linhas; i ++){
        for(int j =0; j < colunas; j++){
            scanf("%d",&matriz[i][j]);
            transposta[j][i] = matriz[i][j];
        }
        }

    mult = (int*)malloc((linhas*linhas)*(sizeof(int)));



    printf("%d %d ",linhas,linhas);
    for(int i = 0; i < (linhas*linhas);i++){
        printf("%d ",mult[i]);
    }
    for(int i = 0; i<linhas;i++){
        free(matriz[i]);
    }
    for(int i = 0; i<colunas;i++){
        free(transposta[i]);
    }
    free(matriz);
    free(transposta);
    free(mult);
    return 0;
}