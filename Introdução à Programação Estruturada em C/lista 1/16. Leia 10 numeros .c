#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10; 
    int maior, menor, soma;
    float media;

    maior = 0;
    menor = 0;
    soma = 0;

    printf("digite os 10 números:\n");
    printf("número 1: ");
    scanf("%d", &num1);
    maior = num1;   
    menor = num1;       
    soma += num1;
   
    printf("número 2: ");
    scanf("%d", &num2);
    if (num2 > maior) {
        maior = num2;
    }else if (num2 < menor) { 
        menor = num2;
    }
    soma += num2;

    printf("número 3: ");
    scanf("%d", &num3);
    if (num3 > maior) {
        maior = num3;
    }else if(num3 < menor) { 
        menor = num3;
    }
    soma += num3;
    
    printf("número 4: ");
    scanf("%d", &num4);
    if (num4 > maior) {
        maior = num4;
    }else if(num4 < menor) { 
        menor = num4;
    }
    soma += num4;
    
    printf("número 5: ");
    scanf("%d", &num5);
    if (num5 > maior){
        maior = num5;
    }else if(num5 < menor){
        menor = num5;
    }
    soma += num5;

    printf("número 6: ");
    scanf("%d", &num6);
    if (num6 > maior){
        maior = num6;
    }else if(num6 < menor){
        menor = num6;
    }
    soma += num6;

    printf("número 7: ");
    scanf("%d", &num7);    
    if (num7 > maior){
        maior = num7;
    }else if(num7 < menor){
        menor = num7;
    }
    soma += num7;
    
    printf("número 8: ");
    scanf("%d", &num8);    
    if (num8 > maior){
        maior = num8;
    }else if(num8 < menor){
        menor = num8;
    }
    soma += num8;
    
    printf("número 9: ");
    scanf("%d", &num9);    
    if (num9 > maior){
        maior = num9;
    }else if(num9 < menor){
        menor = num9;
    }
    soma += num9;

    printf("número 10: ");
    scanf("%d", &num10);
        if (num10 > maior){
        maior = num10;
    }else if(num10 < menor){
        menor = num10;
    }
    soma += num10;
   
    media = soma/10.0;
    
    printf("menor número %d.\nMaior número %d.\n", menor, maior);
    printf("soma %d\n", soma);
    printf("média %.2f", media);

    return 0;
}

/*
int main() {

    int i, num;
    int menor, maior, soma;
    float media;

    menor = 0;
    maior = 0;
    soma = 0;

    printf("Digite 10 números:\n");

    for (i = 1; i <= 10; i++) {
        printf("Número %d: ", i);
        scanf("%d", &num);

        if (i == 1) {
            menor = num;
            maior = num;
        } else {
            if (num > menor) {
                menor = num;
            }
            if (num < maior) {
                maior = num;
            }
        }

        soma += num;
    }

    media = (float) soma / 10;

    printf("O menor número %d.\nO maior número %d.", maior, menor);
    printf("\nA soma %d", soma);
    printf("\nA média %.2f", media);

    return 0;
}
*/