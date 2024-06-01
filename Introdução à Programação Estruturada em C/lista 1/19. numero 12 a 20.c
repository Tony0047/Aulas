#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int numero;

    printf("Digite um número entre 12 e 20: ");
    scanf("%d", &numero);

    if (numero >= 12 && numero <= 20) {
        printf("número %d valido.\n", numero);
    } else {
        printf("Inválida!\n");
    }

    return 0;

}
/*
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
*/