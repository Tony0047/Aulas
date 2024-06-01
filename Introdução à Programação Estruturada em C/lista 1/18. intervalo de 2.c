#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;
    
    printf("Digite o primeiro n�mero do intervalo: ");
    scanf("%d", &a);
    
    printf("Digite o segundo n�mero do intervalo: ");
    scanf("%d", &b);
    
    printf("Digite o n�mero a ser verificado: ");
    scanf("%d", &c);
    
    if (c >= a){
        printf("O n�mero %d est� dentro do intervalo de %d e %d.\n", c, a, b);
    }else if  (c <= b){
        printf("O n�mero %d est� fora do intervalo de %d e %d.\n", c, a, b);
    }else if  (c >= b){
        printf("O n�mero %d est� dentro do intervalo de %d e %d.\n", c, a, b);
    }else {
        printf("Inv�lido.\n");
    }
    return 0;
}
