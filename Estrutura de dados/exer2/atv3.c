//Antonio Vinicius Alves Lourenço #202303498365
//A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para um país do 1 º mundo
#include <stdio.h>

int main() {
    float indicePoluicao;

    printf("Informe o índice de poluição: ");
    scanf("%f", &indicePoluicao);

    if (indicePoluicao > 0.25 && indicePoluicao <= 0.3) {
        printf("Intimação para as indústrias do 1º grupo.\n");
    } else if (indicePoluicao > 0.25 && indicePoluicao <= 0.4) {
        printf("Intimação para as indústrias do 1º e 2º grupos.\n");
    } else if (indicePoluicao > 0.25 && indicePoluicao <= 0.5) {
        printf("Intimação para as indústrias do 1º, 2º e 3º grupos.\n");
    } else if (indicePoluicao > 0.5) {
        printf("Intimação para todas as indústrias devido a um índice muito alto.\n");
    } else {
        printf("Índice de poluição aceitável.\nSem intimações.");
    }

    return 0;
}
