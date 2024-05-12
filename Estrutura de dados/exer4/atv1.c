#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define NUM_PAISES 30
#define num_jogadores 12

typedef struct {
    float peso;
    int idade;
} Jogador;

typedef struct {
    Jogador jogadores[num_jogadores];
} Time;

int main() {
    Time times[NUM_PAISES];
    float pesoTotal = 0;
    int idadeTotal = 0;

    // Ler os dados de cada país
    for (int i = 0; i < NUM_PAISES; i++) {
        printf("País %d:\n", i + 1);
        float pesoMaximo = 0;
        int idadeMinima = INT_MAX;

        // Ler os dados de cada jogador do país
        for (int j = 0; j < num_jogadores; j++) {
            printf("Jogador %d:\n", j + 1);
            printf("Peso: ");
            scanf("%f", &times[i].jogadores[j].peso);
            printf("Idade: ");
            scanf("%d", &times[i].jogadores[j].idade);

            pesoTotal += times[i].jogadores[j].peso;
            idadeTotal += times[i].jogadores[j].idade;

            // Atualizar o atleta mais pesado e mais jovem do país
            if (times[i].jogadores[j].peso > pesoMaximo) {
                pesoMaximo = times[i].jogadores[j].peso;
            }
            if (times[i].jogadores[j].idade < idadeMinima) {
                idadeMinima = times[i].jogadores[j].idade;
            }
        }

        // Calcular peso médio e idade média do país
        float pesoMedio = pesoTotal / (NUM_PAISES * num_jogadores);
        float idadeMedia = idadeTotal / (NUM_PAISES * num_jogadores);

        printf("Peso médio do país %d: %.2f\n", i + 1, pesoMedio);
        printf("Idade média do país %d: %.2f\n", i + 1, idadeMedia);
        printf("Atleta mais pesado do país %d: %.2f\n", i + 1, pesoMaximo);
        printf("Atleta mais jovem do país %d: %d\n", i + 1, idadeMinima);
    }

    // Calcular peso médio e idade média de todos os participantes
    float pesoMedioTotal = pesoTotal / (NUM_PAISES * num_jogadores);
    float idadeMediaTotal = idadeTotal / (NUM_PAISES * num_jogadores);

    printf("Peso médio total: %.2f\n", pesoMedioTotal);
    printf("Idade média total: %.2f\n", idadeMediaTotal);

    return 0;
}
