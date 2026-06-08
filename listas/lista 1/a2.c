#include <stdio.h>

typedef struct {
    char time1[50];
    char time2[50];
    int gols1;
    int gols2;
} Placar;

int main() {
    Placar jogo;

    printf("Digite o nome do primeiro time: ");
    scanf("%49s", jogo.time1);

    printf("Digite os gols do primeiro time: ");
    scanf("%d", &jogo.gols1);

    printf("Digite o nome do segundo time: ");
    scanf("%49s", jogo.time2);

    printf("Digite os gols do segundo time: ");
    scanf("%d", &jogo.gols2);

    printf("\n--- PLACAR ---\n");
    printf("%s %d x %d %s\n",
           jogo.time1, jogo.gols1,
           jogo.gols2, jogo.time2);

    if (jogo.gols1 > jogo.gols2) {
        printf("Vencedor: %s\n", jogo.time1);
    } else if (jogo.gols2 > jogo.gols1) {
        printf("Vencedor: %s\n", jogo.time2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}