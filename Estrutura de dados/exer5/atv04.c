#include <stdio.h>

int main(){
    int valores[10];
    int crescente = 1;
    int decrescente = 1;

    printf("Os 10 valores:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }

    //verificar se a lista está em ordem crescente
    for (int i = 0; i < 9; i++){
        if (valores[i] > valores[i + 1]){
            crescente = 0;
            break;
        }
    }

    //verificar se a lista está em ordem decrescente
    for (int i = 0; i < 9; i++){
        if (valores[i] < valores[i + 1]){
            decrescente = 0;
            break;
        }
    }

    if (crescente){
        printf("A lista está em ordem crescente\n");
    } else if (decrescente){
        printf("A lista está em ordem decrescente\n");
    } else {
        printf("A lista não está em ordem crescente nem decrescente\n");
    }

    return 0;
}