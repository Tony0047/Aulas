//Antonio Vinicius Alves Lourenço #202303498365
//2ª Faça um programa em C que leia a base e a altura de um retângulo e imprima o perí­metro (base + altura) e a área (base * altura).
#include <stdio.h>

int main() {
    float base,altura,perimetro,area;
    printf("base:");
    scanf("%f",&base);

    printf("altura:");
    scanf("%f",&altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    
    printf("Perímetro do retângulo: %.2f\n", perimetro);
    printf("área do reângulo: %.2f\n", area);
    
    return 0;

}
