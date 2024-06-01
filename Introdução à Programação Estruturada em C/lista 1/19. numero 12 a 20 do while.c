#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    
    int numero;

    do {
        printf("Digite um n�mero entre 12 e 20: ");
        scanf("%d", &numero);

        if (numero < 12 || numero > 20) {
            printf("Inválida!\n");
        }
    } while (numero < 12 || numero > 20);

    printf("número: %d\n", numero);

    return 0;
}
