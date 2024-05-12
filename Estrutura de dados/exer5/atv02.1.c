#include <stdio.h>

int main() {
    int numeros[15];
    int i;

    // Lendo os números e armazenando no vetor
    printf("Digite 15 números inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
    }

    // Imprimindo a listagem numerada com par ou ímpar
    printf("\nListagem numerada:\n");
    for (i = 0; i < 15; i++) {
        printf("%d - %d ", i+1, numeros[i]);
        if (numeros[i] % 2 == 0) {
            printf("(par)\n");
        } else {
            printf("(ímpar)\n");
        }
    }

    return 0;
}
