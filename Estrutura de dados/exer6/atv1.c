#include <stdio.h>
#include <stdlib.h>

int main(){

    int matiz[10][10];
    int i ,j;

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matiz[i][j]);
        }
    }
    printf("Emementos da matriz:\n");
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            printf("%d ", matiz[i][j]);
        }
        printf("\n");
    }
}