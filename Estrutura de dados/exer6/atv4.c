//Antonio Vinicius Alves Lourenço #202303498365
#include <stdio.h>

int main(){
    int delegacoes = 5;
    int atletas = 10;

    float alturas[delegacoes][atletas];
    float maiorAltura[delegacoes];
    int i, j ;
    
    for (i = 0; i < delegacoes; i++){
        printf("Delegacao %d\n", i+1);
        for (j = 0; j < atletas; j++){
            printf("Digite a altura do atleta %d: ", j+1);
            scanf("%f", &alturas[i][j]);

            if (alturas[i][j] > maiorAltura[i]){
                maiorAltura[i] = alturas[i][j];
            }
        }

    }

    printf("\nMaior altura de cada delegacao\n");
    for (i = 0; i < delegacoes; i++){
        printf("Delegacao %d: %.2f\n", i+1, maiorAltura[i]);
    }
    


    return 0;
}