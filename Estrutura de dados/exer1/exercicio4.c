//Antonio Vinicius Alves Lourenço #202303498365
//4ª Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa em C que informe se uma equipe foi classificada, de acordo com a seguinte especificação:​
#include<stdio.h>

int main(){
    int pontos[3];

    for (int i = 0; i < 3; i++) {
        printf("Informe os pontos do jogador %d: ", i + 1);
        scanf("%d", &pontos[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (pontos[i] < pontos[j]) {
                int temp = pontos[i];
                pontos[i] = pontos[j];
                pontos[j] = temp;
            }
        }
    }
    printf("Pontos em ordem decrescente: %d, %d, %d\n", pontos[0], pontos[1], pontos[2]);

    int somaPontos = pontos[0] + pontos[1] + pontos[2];

    if (somaPontos > 100) {
        float media = (float)somaPontos / 3;
        printf("Média aritmética: %.2f\n", media);
    } else {
        printf("Equipe desclassificada\n");
    }

    return 0;
}






