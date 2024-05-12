#include <stdio.h>

int main(){
    int valores[15];
    int i, busca;
    int encontrado = 0;

    printf("Os 15 valores:\n");
    for (i = 0; i < 15; i++){
        scanf("%d", &valores[i]);
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &busca);

    for (i = 0; i < 15; i++){
        if (valores[i] == busca){
            encontrado = 1;
            printf("o numero %d foi encontrado na posicao %d\n", busca, i);
            break;
        }
    }

    if (!encontrado){
        printf("O número %d não foi encontrado\n", busca);
    }
    return 0;
}