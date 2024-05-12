//Antonio Vinicius Alves Lourenço #202303498365
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numCons, qtdeKwh, tipo;
    float valorAPagar, custoTotal = 0;
    int totalConsumoResidencial = 0, totalConsumoComercial = 0, totalConsumoIndustrial = 0;
    int numConsumidoresTipo1e2 = 0;
    float mediaConsumoTipo1e2;

    while (1) { // Loop até 0 
        printf("Informe o numero do consumidor (digite 0 para encerrar): ");
        scanf("%i", &numCons);

        if (numCons == 0) //(zero) para encerrar o programa
            break;

        printf("Informe a qtde de Kwh: ");
        scanf("%i", &qtdeKwh);

        printf("Informe o tipo de consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%i", &tipo);

        switch (tipo) {
            case 1:
                valorAPagar = qtdeKwh * 0.3;
                totalConsumoResidencial += qtdeKwh;
                break;
            case 2:
                valorAPagar = qtdeKwh * 0.5;
                totalConsumoComercial += qtdeKwh;
                break;
            case 3:
                valorAPagar = qtdeKwh * 0.7;
                totalConsumoIndustrial += qtdeKwh;
                break;
            default:
                printf("Opção inválida!!\n");
                continue; // Volta ao início
        }

        custoTotal += valorAPagar;

        //tipo de consumidor
        if (tipo == 1 || tipo == 2) {
            mediaConsumoTipo1e2 += qtdeKwh;
            numConsumidoresTipo1e2++;
        }

        printf("Valor a pagar: R$%.2f\n", valorAPagar);
    }

    printf("\nCusto total para todos os consumidores: R$%.2f\n", custoTotal);
    printf("Total de consumo residencial: %d kWh\n", totalConsumoResidencial);
    printf("Total de consumo comercial: %d kWh\n", totalConsumoComercial);
    printf("Total de consumo industrial: %d kWh\n", totalConsumoIndustrial);

    // Calcula a média
    if (numConsumidoresTipo1e2 > 0)
        mediaConsumoTipo1e2 /= numConsumidoresTipo1e2;

    printf("Média de consumo dos tipos 1 e 2: %.2f kWh\n", mediaConsumoTipo1e2);

    return 0;
}
