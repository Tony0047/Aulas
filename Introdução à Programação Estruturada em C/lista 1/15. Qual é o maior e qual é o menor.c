#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int a, b, c;

    printf("número 1: ");
    scanf("%d", &a);
    printf("número 2: ");
    scanf("%d", &b);
    printf("número 3: ");
    scanf("%d", &c);

    int maior = a;
    int menor = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    printf("Maior número %d.\nMenor número %d.", maior, menor);

    return 0;
}
/*
int main() {
    
    int valor[3];
    int i;
    int maior, menor;

    printf("Digite os números:\n");
    
    for(i = 0; i < 3; i++) {
        printf("número %d: ", i+1);
        scanf("%d", &valor[i]);
    }
        
    maior = valor[0];
    menor = valor[0];
    
    for(i = 1; i < 3; i++) {
        if(valor[i] > maior){
            maior = valor[i];
        }
        if(valor[i] < menor){
            menor = valor[i];
        }
    }
    
    printf("Maior número %d.\nMenor número %d.", maior, menor);

    return 0;
}
*/