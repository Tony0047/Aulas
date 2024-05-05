//Antonio Vinicius Alves Lourenço #202303498365
//O hospital local está fazendo uma campanha para receber doação de sangue.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int idade, resf, alim;
    float peso;

    printf("Informe seu nome: ");
    fgets(nome, 50, stdin);

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Você está alimentado? (1 - sim; 2 - não): ");
    scanf("%d", &alim);

    printf("Você está resfriado? (1 - sim; 2 - não): ");
    scanf("%d", &resf);


    if (idade >= 16 && idade <= 69 && peso >= 50 && alim == 1 && resf == 2) {
        printf("\nNome: %s", nome);
        printf("Apto para doar sangue.\n");
    } else {
        printf("\nNome: %s", nome);
        printf("Não apto para doar sangue.\n");
    }

    return 0;
}
