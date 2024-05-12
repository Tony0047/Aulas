#include <stdio.h>

int main(){
    int num[10];
    int num2[10];

    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 10; i++){
        num2[i] = num[i];
    }

    
    for (int i = 0; i < 10; i++){
        for (int j = i+1; j < 10; j++){
            if (num2[i] > num2[j]){
                int aux = num2[i];
                num2[i] = num2[j];
                num2[j] = aux;
            }
        }
    }

    //vetor ordenado
    printf("Vetor ordenado:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", num2[i]);
    }


    return 0;
}