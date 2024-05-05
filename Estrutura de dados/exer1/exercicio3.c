//Antonio Vinicius Alves Lourenço #202303498365
//3ª Faça um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. O programa deverá ler o tempo decorrido na viagem e a​ velocidade média e aplicar as fórmulas:
#include<stdio.h>

int main(){
    float tempo,velocidade,distancia,litros;
    printf("tempo decorrido na viagem:");
    scanf("%f",&tempo);

    printf("velocidade média:");
    scanf("%f",&velocidade);

    distancia = tempo * velocidade;
    litros = distancia/12.0;

    printf("Distancia percorida: %.2f km\n",distancia);
    printf("Litros consumidos: %.2f litros\n",litros);

    return 0;

}