#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = -1;
    int num_pessoas = 0;
    int soma_idades = 0;
    int menor_idade = 9999;
    int maior_idade = 0;
    
    while (idade != 0) {
        printf("Digite a idade (0 para sair):");
        scanf("%d", &idade);
        
        if (idade != 0) {
            num_pessoas++;
            soma_idades += idade;
            
            if (idade < menor_idade) {
                menor_idade = idade;
            }
            
            if (idade > maior_idade) {
                maior_idade = idade;
            }
        }
    }
    
    if (num_pessoas > 0) {
        float idade_media = (float) soma_idades / num_pessoas;
        
        printf("N�mero de pessoas: %d\n", num_pessoas);
        printf("Idade m�dia: %.1f\n", idade_media);
        printf("Menor idade: %d\n", menor_idade);
        printf("Maior idade: %d\n", maior_idade);
    } else {
        printf("Nenhuma idade foi informada.\n");
    }
    
    return 0;
}
