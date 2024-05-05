//Antonio Vinicius Alves Lourenço #202303498365
//1ª Faça um programa em C que leia três números reais e calcule a médiaaritmética destes números. Ao final, o programa deve imprimir o resultado do cálculo.
#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);
    
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("a media é :%2.f",media);

    return 0;
}