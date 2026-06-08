#include <stdio.h>

typedef struct {
    char nome[50];
    int pontos;
} Jogador;

int main() {
    int N, i;

    printf("Digite a quantidade de jogadores: ");
    scanf("%d", &N);

    Jogador jogadores[N];

    for (i = 0; i < N; i++) {
        printf("\nJogador %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", jogadores[i].nome);

        printf("Pontos: ");
        scanf("%d", &jogadores[i].pontos);
    }

    int maior = 0;
    int menor = 0;

    for (i = 1; i < N; i++) {
        if (jogadores[i].pontos > jogadores[maior].pontos) {
            maior = i;
        }

        if (jogadores[i].pontos < jogadores[menor].pontos) {
            menor = i;
        }
    }

    printf("\n--- RESULTADO ---\n");
    printf("Jogador com mais pontos: %s (%d pontos)\n",
           jogadores[maior].nome,
           jogadores[maior].pontos);

    printf("Jogador com menos pontos: %s (%d pontos)\n",
           jogadores[menor].nome,
           jogadores[menor].pontos);

    return 0;
}