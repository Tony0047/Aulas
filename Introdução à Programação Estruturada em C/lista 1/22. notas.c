#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float soma_1, soma_2, media_1, media_2;
    float nota, nota_1, nota_2, nota_3;
    
    soma_1 = 0;

    printf("nota 1:");
    scanf("%f", &nota_1);
    soma_1 += nota_1;
   
    printf("nota 2:");
    scanf("%f", &nota_2);
    soma_1 += nota_2;
    
    media_1 = soma_1/2;
    
    printf("nota:%.2f\n", media_1);
    soma_2 = 0;
    nota = 0;
   
    if(nota_1 > nota_2) {
        nota = nota_1;
    } else {
        nota = nota_2;
    }

    if(media_1 < 6){
        printf("nota menor que 6\n");
        printf("Adicione a nota 3:");
        scanf("%f", &nota_3);

    soma_2 = nota+nota_3;
        
    media_2 = soma_2/2;
    
    printf("Nota final:%.2f", media_2);
    }
    
    return 0;
}
