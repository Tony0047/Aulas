//Antonio Vinicius Alves Lourenço #202303498365
#include <stdio.h>

int main(){

    int matrizA[2][2], matrizB[2][2], matrizSoma[2][2];
    int i, j;

    printf("Elementos da matris A[2][2]:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor da matrizA[%d][%d]:\n", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Elementos da matriz B[2][2]:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor da matrizB[%d][%d]:\n", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\n Matriz soma[2][2]:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    return 0;
}