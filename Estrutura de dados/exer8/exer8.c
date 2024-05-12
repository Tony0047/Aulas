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
        printf("Sexo (H/M): ",pessoas[i].nome);
        scanf(" %c", &pessoas[i].sexo);
        //estrutura de decisão indentificar o sexo e dicionar o pronome correto
        if(pessoas[i].sexo == 'M' || pessoas[i].sexo == 'm'){
            printf("Peso da %s: ", pessoas[i].nome);
            scanf("%f", &pessoas[i].peso);
            printf("Altura da %s: ", pessoas[i].nome);
            scanf("%f", &pessoas[i].altura);
            printf("Idade da  %s: ",pessoas[i].nome);
            scanf("%d", &pessoas[i].idade);
        }else if(pessoas[i].sexo == 'H' || pessoas[i].sexo == 'h'){
            printf("Peso do %s: ", pessoas[i].nome);
            scanf("%f", &pessoas[i].peso);
            printf("Altura do %s: ", pessoas[i].nome);
            scanf("%f", &pessoas[i].altura);
            printf("Idade do %s: ",pessoas[i].nome);
            scanf("%d", &pessoas[i].idade);
        }else{
            printf("Sexo invalido\n");
            i--;
        }
    }

    printf("\n\n");
    printf("Nome\t\tPeso\t\tAltura\t\tIdade\t\tSexo\n");
    printf("--------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%.1f\t\t%.2f\t\t%d\t\t%c\n", pessoas[i].nome, pessoas[i].peso, pessoas[i].altura, pessoas[i].idade, pessoas[i].sexo);
    }

    return 0;
}
