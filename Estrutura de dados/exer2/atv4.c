//Antonio Vinicius Alves Lourenço #202303498365
//Suponha que você esteja desenvolvendo um sistema de notas e faltas para uma disciplina em uma escola
#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    int faltas;

    printf("Informe a primeira nota:");
    scanf("%f", &nota1);

    printf("Informe a segunda nota:");
    scanf("%f", &nota2);

    printf("Informe a terceira nota:");
    scanf("%f", &nota3);

    printf("Informe o número de faltas:");
    scanf("%d", &faltas);

    float mediaPonderada = (nota1 * 3 + nota2 * 4 + nota3 * 3) / 10.0;

    if (mediaPonderada >= 7 && faltas <= 15) {
        printf("Situação: Aprovado\n");
    } else if (mediaPonderada >= 5 && faltas <= 10) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
