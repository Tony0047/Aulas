#include <stdio.h>

struct Pessoa {
    char nome[50],sexo;
    float peso, altura;
    int idade;
};

int main() {
    struct Pessoa pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d: ", i + 1);
        printf("Nome:\n");
        scanf("%s", pessoas[i].nome);
        printf("Sexo do(a) %s (H/M): ",pessoas[i].nome);
        scanf(" %c", &pessoas[i].sexo);
        //estrutura de decisão indentificar o sexo e dicionar o pronome correto
        

        printf("Peso do(a) %s: ", pessoas[i].nome);
        scanf("%f", &pessoas[i].peso);
        printf("Altura do(a) %s: ", pessoas[i].nome);
        scanf("%f", &pessoas[i].altura);
        printf("Idade do(a)  %s: ",pessoas[i].nome);
        scanf("%d", &pessoas[i].idade);

    }

    printf("\n\n");
    printf("Nome\t\tPeso\t\tAltura\t\tIdade\t\tSexo\n");
    printf("--------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%.1f\t\t%.2f\t\t%d\t\t%c\n", pessoas[i].nome, pessoas[i].peso, pessoas[i].altura, pessoas[i].idade, pessoas[i].sexo);
    }

    return 0;
}
