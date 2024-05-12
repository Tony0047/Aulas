#include <stdio.h>

int main(){

    int pes = 10.00;
    int maos = 15.00;
    int podologia = 30.00;
    float porcentagem = 0.50;

    int servicos[5][3];

    printf("Quantidade de servicos executados por cada manicure\n");
    for (int i = 0; i < 5; i++){
        printf("Manicure %d\n", i+1);
        printf("Digite a quantidade de pes: ");
        scanf("%d", &servicos[i][0]);
        printf("Digite a quantidade de maos: ");
        scanf("%d", &servicos[i][1]);
        printf("Digite a quantidade de podologia: ");
        scanf("%d", &servicos[i][2]);
    }

    for (int i = 0; i < 5; i++){
        float faturamento = servicos[i][0] * pes + servicos[i][1] * maos + servicos[i][2] * podologia;
        float salario = faturamento * porcentagem;
        printf("Manicure %d: Recebera R$%.2f\n", i+1, salario);
    }
    return 0;
}