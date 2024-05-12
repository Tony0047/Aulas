//Antonio Vinicius Alves Lourenço #202303498365
#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, percentualReprovados;
    float mediaTurma = 0, somaNotas = 0;
    int qtdeAlunos, qtdeAprovados = 0, qtdeReprovados = 0;
    int i = 0;
    printf("Informe a quantidade de alunos: ");
    scanf("%i", &qtdeAlunos);

    while (i < qtdeAlunos) {
        printf("Informe a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        somaNotas += nota;

        if (nota >= 7) {
            qtdeAprovados++;
        } else {
            qtdeReprovados++;
        }
        i++;
    }

    printf("Quantidade de aprovados: %i\n", qtdeAprovados);
    printf("Quantidade de reprovados: %i\n", qtdeReprovados);

    mediaTurma = somaNotas / qtdeAlunos;
    printf("Média da turma: %.2f\n", mediaTurma);

    percentualReprovados = (float)qtdeReprovados / qtdeAlunos * 100;
    printf("Percentual de reprovados: %.2f%%\n", percentualReprovados);

    return 0;
}
