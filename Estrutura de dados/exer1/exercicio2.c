//Antonio Vinicius Alves Louren�o #202303498365
//2� Fa�a um programa em C que leia a base e a altura de um ret�ngulo e imprima o per�metro (base + altura) e a �rea (base * altura).
#include <stdio.h>

int main() {
    float base,altura,perimetro,area;
    printf("base:");
    scanf("%f",&base);

    printf("altura:");
    scanf("%f",&altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    
    printf("Per�metro do ret�ngulo: %.2f\n", perimetro);
    printf("�rea do re�ngulo: %.2f\n", area);
    
    return 0;

}
