//Antonio Vinicius Alves Lourenço #202303498365
#include <stdio.h>

int main(){

    int matriz[3][3];
    int i ,j;

    printf("Valores da matriz:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o valor da matriz[%d][%d]:\n ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da matriz:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[i][j] * 2);
        }
        printf("\n");
    }

    return 0;
}