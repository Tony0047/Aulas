//Antonio Vinicius Alves Lourenço #202303498365
//5ª Em uma escola, os alunos das turmas do fundamental fizeram uma prova de matemática. Cada turma possui um número de alunos. 
#include <stdio.h>

int main() {
    int numTurmas;
    printf("Informe o número de turmas: ");
    scanf("%d", &numTurmas);

    for (int i = 1; i <= numTurmas; i++) {
        int numAlunos, nota, aprovados = 0, reprovados = 0, soma = 0;

        printf("\nTurma %d\n", i);
        printf("Informe o número de alunos na turma: ");
        scanf("%d", &numAlunos);

        for (int j = 1; j <= numAlunos; j++) {
            printf("Informe a nota do aluno %d: ", j);
            scanf("%d", &nota);

            soma += nota;

            if (nota >= 6) {
                aprovados++;
            } else {
                reprovados++;
            }
        }

        float media = (float)soma / numAlunos;
        printf("Média da turma %d: %.2f\n", i, media);

        printf("Alunos aprovados %d: %d\n", i, aprovados);
        float percentualReprovados = (float)reprovados / numAlunos * 100;
        printf("Percentual de reprovados na turma %d: %.2f%%\n", i, percentualReprovados);
    }

    return 0;
}
