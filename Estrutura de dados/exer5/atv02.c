#include <stdio.h>

int main(){
    int valor[15];
    int i;
    int par = 0;
    int impar = 0;

    printf("Os 15 valores:\n");
    for (i = 0; i < 15; i++){
        scanf("%d", &valor[i]);
    }

    for (i = 0; i < 15; i++){
        if (valor[i] % 2 == 0){
            par++;
        } else {
            impar++;
        }
    }

    //mostra a lista de numeros pares e impares
    printf("Números pares:\n");
    for (i = 0; i < 15; i++){
        if (valor[i] % 2 == 0){
            printf("%d\n", valor[i]);
        }
    }

    printf("Números ímpares:\n");
    for (i = 0; i < 15; i++){
        if (valor[i] % 2 != 0){
            printf("%d\n", valor[i]);
        }
    }

    //mostrar a quntidade de numeros pares e impares
    printf("Quantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", impar);

    return 0;
}