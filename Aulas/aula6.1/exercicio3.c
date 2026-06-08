#include <stdio.h>

typedef struct {
    char nome[50];
    int pontos;
    int vitorias;
} Jogador;

int main() {
    int n, i;
    float mediaVitorias;
    int acimaMedia = 0;

    printf("Digite a quantidade de jogadores: ");
    scanf("%d", &n);

    Jogador jogadores[n];

    int indiceMaisPontos = 0;
    int indiceMaisVitorias = 0;
    int somaVitorias = 0;

    for (i = 0; i < n; i++) {
        printf("\nJogador %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", jogadores[i].nome);

        printf("Pontos: ");
        scanf("%d", &jogadores[i].pontos);

        printf("Vitorias: ");
        scanf("%d", &jogadores[i].vitorias);

        somaVitorias += jogadores[i].vitorias;

        if (jogadores[i].pontos > jogadores[indiceMaisPontos].pontos) {
            indiceMaisPontos = i;
        }

        if (jogadores[i].vitorias > jogadores[indiceMaisVitorias].vitorias) {
            indiceMaisVitorias = i;
        }
    }

    mediaVitorias = (float)somaVitorias / n;

    for (i = 0; i < n; i++) {
        if (jogadores[i].vitorias > mediaVitorias) {
            acimaMedia++;
        }
    }

    printf("\n--- RANKING DE JOGADORES ---\n");
    printf("%-15s %-10s %-10s\n", "Nome", "Pontos", "Vitorias");

    for (i = 0; i < n; i++) {
        printf("%-15s %-10d %-10d\n",
               jogadores[i].nome,
               jogadores[i].pontos,
               jogadores[i].vitorias);
    }

    printf("\nJogador com mais pontos: %s (%d pontos)\n",
           jogadores[indiceMaisPontos].nome,
           jogadores[indiceMaisPontos].pontos);

    printf("Jogador com mais vitorias: %s (%d vitorias)\n",
           jogadores[indiceMaisVitorias].nome,
           jogadores[indiceMaisVitorias].vitorias);

    printf("Media de vitorias: %.2f\n", mediaVitorias);
    printf("Jogadores acima da media de vitorias: %d\n", acimaMedia);

    return 0;
}