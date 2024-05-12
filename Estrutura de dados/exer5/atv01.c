#include <stdio.h>

int main() {
    int valor[5];
    int i;
    int maior;


    printf("Os 5 valores:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &valor[i]);
    }

    maior = valor [0];
    for (i = 1; i < 5; i++){
        if (valor[i] > maior){
            maior = valor[i];
        }
    }

    printf("O maior valor é: %d\n", maior);

    return 0;
}