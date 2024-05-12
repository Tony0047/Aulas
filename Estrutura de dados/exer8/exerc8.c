#include <stdio.h>

struct Pessoa {
    char nome[50],sexo;
    float peso, altura;
    int idade;
    
};

int main() {
    struct Pessoa pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].peso);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &pessoas[i].sexo);
    }

    printf("\n\n");
    printf("Nome\t\tPeso\t\tAltura\t\tIdade\t\tSexo\n");
    printf("--------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%d\t\t%c\n", pessoas[i].nome, pessoas[i].peso, pessoas[i].altura, pessoas[i].idade, pessoas[i].sexo);
    }

    return 0;
}
