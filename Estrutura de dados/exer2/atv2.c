//Antonio Vinicius Alves Lourenço #202303498365
//Faça um programa em C que leia o destino do passageiro, se a viagem inclui retorno (ida e volta) e informe o preço da passagem conforme a tabela a seguir
#include <stdio.h>

int main() {
    int codigoDestino;
    char destino[20];
    float precoIda, precoIdaVolta;

    printf("Informe o código do destino:\n 1 Região norte\n 2 região nordeste\n 3 região centro-oeste\n 4 região sul\n ");
    scanf("%d", &codigoDestino);

    if (codigoDestino == 1) {
        strcpy(destino, "Região Norte");
        precoIda = 500.00;
        precoIdaVolta = 900.00;
    } else if (codigoDestino == 2) {
        strcpy(destino, "Região Nordeste");
        precoIda = 350.00;
        precoIdaVolta = 650.00;
    } else if (codigoDestino == 3) {
        strcpy(destino, "Região Centro-Oeste");
        precoIda = 350.00;
        precoIdaVolta = 600.00;
    } else if (codigoDestino == 4) {
        strcpy(destino, "Região Sul");
        precoIda = 300.00;
        precoIdaVolta = 550.00;
    } else {
        printf("Código de destino inválido.\n");
        return 1; 
    }


    printf("A viagem inclui retorno?\n(1 - sim; 2 - não): ");
    int opcao;
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Destino: %s\nPreço da passagem (ida e volta): R$ %.2f\n", destino, precoIdaVolta);
    } else if (opcao == 2) {
        printf("Destino: %s\nPreço da passagem (ida): R$ %.2f\n", destino, precoIda);
    } else {
        printf("Opção inválida.\n");
        return 1; 
    }

    return 0;
}
